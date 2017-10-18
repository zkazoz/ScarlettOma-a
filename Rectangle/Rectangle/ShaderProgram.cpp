#include "ShaderProgram.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <glm/glm.hpp>
#include <vector>

GLuint _programHandle;
vector<unique_ptr<Shader>> _attachedShaders;

void CreateProgram() {

	_programHandle = glCreateProgram();
	glBindAttribLocation(_programHandle, 0, "VertexPosition");
	glBindAttribLocation(_programHandle, 1, "'VertexColor");
	glLinkProgram(_programHandle);
}


	void ShaderProgram::AttachShader(std::string name, GLenum type)
	{
		// Create and add the shaders to a list
		std::unique_ptr<Shader> shader(new Shader);
		shader->CreateShader(name, type);
		_attachedShaders.push_back(std::move(shader));
	}

	void LinkProgram() {
		glAttachShader(_attachedShaders);
		}

