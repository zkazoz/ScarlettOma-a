#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <vector>

GLuint vao;
void Initialize() {

	float ra = glm::radians(18.0f);
	float ra2 = glm::radians(306.0f);
	float ra3 = glm::radians(234.0f);
	float ra4 = glm::radians(162.0f);
	float ra5 = glm::radians(90.0f);

	float ax = glm::cos(ra);
	float ay = glm::sin(ra);
	float bx = glm::cos(ra2);
	float by = glm::sin(ra2);
	float cx = glm::cos(ra3);
	float cy = glm::sin(ra3);
	float dx = glm::cos(ra4);
	float dy = glm::sin(ra4);
	float ex = glm::cos(ra5);
	float ey = glm::sin(ra5);


	float pax = (0.5)*(glm::cos(ra));
	float pay = (0.5)*(glm::sin(ra));
	float pbx = (0.5)*(glm::cos(ra2));
	float pby = (0.5)*(glm::sin(ra2));
	float pcx = (0.5)*(glm::cos(ra3));
	float pcy = (0.5)*(glm::sin(ra3));
	float pdx = (0.5)*(glm::cos(ra4));
	float pdy = (0.5)*(glm::sin(ra4));
	float pex = (0.5)*(glm::cos(ra5));
	float pey = (0.5)*(glm::sin(ra5));

	std::vector<glm::vec2> positions;
	
	positions.push_back(glm::vec2(ax, ay));
	positions.push_back(glm::vec2(pax, pay));
	positions.push_back(glm::vec2(ex, ey));
	positions.push_back(glm::vec2(pex, pey));
	positions.push_back(glm::vec2(dx, dy));
	positions.push_back(glm::vec2(pdx, pdy));
	positions.push_back(glm::vec2(cx, cy));
	positions.push_back(glm::vec2(pcx, pcy));
	positions.push_back(glm::vec2(bx, by));
	positions.push_back(glm::vec2(pbx, pby));
	positions.push_back(glm::vec2(ax, ay));
	positions.push_back(glm::vec2(pax, pay));
	positions.push_back(glm::vec2(ex, ey));




	

	

	



	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);
	GLuint positionsVBO;
	glGenBuffers(1, &positionsVBO);
	glBindBuffer(GL_ARRAY_BUFFER, positionsVBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec2) * positions.size(),positions.data(), GL_STATIC_DRAW);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, nullptr);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);


}

void MainLoop()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	glBindVertexArray(vao);

	glDrawArrays(GL_TRIANGLE_STRIP, 0, 13);
	glBindVertexArray(0);
	
	
	glutSwapBuffers();
}


int main(int argc, char* argv[])
{

	

	glutInit(&argc, argv);
	
	glutInitContextProfile(GLUT_CORE_PROFILE);
	
	glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);
	
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
	
	glutInitWindowSize(400, 400);
	
	glutCreateWindow("Hello World OpenGL");
	
	glutDisplayFunc(MainLoop);

		
	glewInit();

	
	
	glClearColor(1.0f, 1.0f, 0.5f, 1.0f);

	
	Initialize();

	
	
	glutMainLoop();

	return 0;
}