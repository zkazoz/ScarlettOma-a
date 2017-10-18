#include "Shader.h"
#include "InputFile.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <vector>


GLuint _shaderHandle = 0;
void CreateShader(std::string path, GLenum type)
{
	InputFile ifile;

	ifile.Read("Path.vert");
	std::string vertexSource = ifile.GetContents();
	const GLchar *vertexSource_c =
		(const GLchar*)vertexSource.c_str();
	GLuint _shaderHandle = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(_shaderHandle, 1, &vertexSource_c, nullptr);
	glCompileShader(_shaderHandle);

	GLint vertexShaderCompileSuccess = 0;
	glGetShaderiv(_shaderHandle, GL_COMPILE_STATUS, &vertexShaderCompileSuccess);

	if (vertexShaderCompileSuccess == GL_FALSE)
	{
		GLint logLength = 0;
		glGetShaderiv(_shaderHandle, GL_INFO_LOG_LENGTH, &logLength);
		if (logLength > 0)
		{
			std::vector<GLchar> compileLog(logLength);
			glGetShaderInfoLog(_shaderHandle, logLength, &logLength, &compileLog[0]);

			for (int i = 0; i < logLength; i++) {
				std::cout << compileLog[i];

			}
			std::cout << std::endl;
		}
		std::cout << "Shader Defaultvert did not compiled" << std::endl;

	}

	
}


GLuint GetHandle() {
	return _shaderHandle;
}


