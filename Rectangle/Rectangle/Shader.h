#pragma once
#include <string>

class Shader
{
public:
	Shader();
	void CreateShader(std::string path, GLenum type);
	GLuint GetHandle();

private:
	Shader();
	GLuint _shaderHandle = 0;
};