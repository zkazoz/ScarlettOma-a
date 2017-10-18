#pragma once
#include <string>

class ShaderProgram
{
public:
	ShaderProgram();
	void CreateProgram();
	void AttachShader(std::string Path, GLenum type);
	void LinkProgram();
	void Activate();
	void Desactivate();
	void SetAttribute(GLuint locationIndex, std::string name);
	void SetUniformf(std::string name, float value);
	void SetUniformf(std::string name, float x, float y);
	
private:
	GLuint _programHandle = 0;
	vector<unique_ptr<Shader>> _attachedShaders;
	void DeleteAndDetachShaders();
	void DeletePRogram();

};