#include "Mesh.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <vector>

GLuint vao;
GLuint positionsVBO;
GLuint colorsVBO;
GLint _vertexCount;
GLuint _vertexArrayObject;
GLuint _colorsVertexBufferObject;
GLuint shaderProgram;
GLuint _positionsVertexBufferObject;

void CreateMesh(GLint vertexCount) {
	_vertexCount = vertexCount;
	glGenVertexArrays(1, &_vertexArrayObject);
	
}
void Draw(GLenum primitive) {
	glBindVertexArray(_vertexArrayObject);
	glDrawArrays(primitive, 0, _vertexCount);
	glBindVertexArray(0);
	

}

void SetPositionAttribute(glm::vec2 positions, GLenum usage, GLuint locationIndex) {
	SetAttributeData(_positionsVertexBufferObject, sizeof(glm::vec3) * positions.size(),
		positions.data(), usage, locationIndex, 3);

	glGenBuffers(1, &positionsVBO);
	glBindBuffer(GL_ARRAY_BUFFER, positionsVBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec2) * positions.size(),
		positions.data(), GL_STATIC_DRAW);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, nullptr);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	std::vector<glm::vec2> positions;
	positions.push_back(glm::vec2(-1.0f, -1.0f));
	positions.push_back(glm::vec2(1.0f, -1.0f));
	positions.push_back(glm::vec2(0.0f, 1.0f));
	positions.push_back(glm::vec2(2.0f, 1.0f));

	

}
void SetColorAttribute(glm::vec3 positions, GLenum usage, GLuint locationIndex) {
	glGenBuffers(1, &colorsVBO);
	glBindBuffer(GL_ARRAY_BUFFER, colorsVBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec3) * colors.size(),
		colors.data(), GL_STATIC_DRAW);
	glEnableVertexAttribArray(1);
	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, nullptr);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

	glBindVertexArray(0);
	std::vector<glm::vec3> colors;

	colors.push_back(glm::vec3(1.0f, 0.0f, 0.0f));
	colors.push_back(glm::vec3(0.0f, 1.0f, 0.0f));
	colors.push_back(glm::vec3(0.0f, 0.0f, 1.0f));

}

void SetAttributeData(GLuint& buffer, const GLsizeiptr size, const void* data, GLenum usage, GLuint locationIndex, const GLint components) {
	GLuint positionsVBO;
	glGenBuffers(1, &positionsVBO);
	glBindBuffer(GL_ARRAY_BUFFER, positionsVBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(glm::vec2) * positions.size(),
		positions.data(), GL_STATIC_DRAW);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, nullptr);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}
