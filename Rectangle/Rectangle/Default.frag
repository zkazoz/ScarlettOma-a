#version 330

in vec3 InterpolatedColor;
in vec3 InterpolatedNormal;

out vec4 FragColor;


uniform vec3 LightColor;
uniform vec3 LightPosition;

void main()
{
	vec3 ambient= 0.1f * LightColor; 
	FragColor = vec4(InterpolatedColor, 1.0f);
	
}