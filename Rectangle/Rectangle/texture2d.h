#include <IL/il.h>
#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>


class texture2d
{
public:
	texture2d();
	~texture2d();
	void LoadTexture(std::string path);
	void Bind();
	void Unbind();
	

private:

	GLuint _textureid;
};