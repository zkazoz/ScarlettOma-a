#version 330

in vec3 InterpolatedColor;
in vec3 Pixelposition;
out vec4 FragColor;

uniform vec3 LightPosition;
uniform vec3 LightColor;
uniform vec3 CameraPosition;

void main()
{
	vec3 ambient = 0.1f * LightColor;
	vec3 diffuse = (InterpolatedNormal * VertexNormal)* LightColor;
	L= LightPostion - PixelPostion;
	L = Normalize(L);
	

	FragColor = vec4(InterpolatedColor, 1.0f);

}