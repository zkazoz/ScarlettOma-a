#version 330

in vec3 VertexPosition;
in vec3 VertexColor;
in vec3 VertexNormal;

out vec3 InterpolatedColor;
out vec3 InterpolatedNormal; 

uniform mat4 Matrix;
uniform mat4 ModelMatrix;
uniform mat4 NormalMatrix;

void main()
{
	InterpolatedColor = VertexColor;
	gl_Position = Matrix * vec4(VertexPosition, 1.0f);
	InterpolatedNormal = VertexNormal;
}