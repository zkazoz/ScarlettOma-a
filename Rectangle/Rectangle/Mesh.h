#pragma once
class Mesh
{
public:
	Mesh();
	void CreateMesh(GLint vertexCount);
	void Draw(GLenum primitive);
	void SetPositionAttribute(glm::vec2 positions, GLenum usage, GLuint locationIndex);
	void SetPositionAttribute(glm::vec3 positions, GLenum usage, GLuint locationIndex);
	void SetColorAttribute(glm::vec3 positions, GLenum usage, GLuint locationIndex);
	void SetColorAttribute(glm::vec4 positions, GLenum usage, GLuint locationIndex);

	
private:
	Mesh();
	void SetAttributeData(GLuint& buffer, const GLsizeiptr size, const void* data, GLenum usage, GLuint locationIndex, const GLint components);
	GLuint _vertexArrayObject = 0;
	GLuint _positionsVertexBufferObject = 3;
	GLuint _colorsVertexBufferObject = 3;
	GLuint _vertexCount = 4; 


};

