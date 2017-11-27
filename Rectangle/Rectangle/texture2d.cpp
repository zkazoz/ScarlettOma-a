#include <IL/il.h>
#include "texture2d.h"
#include <GL/glew.h>
#include <GL/freeglut.h>

texture2d::texture2d() {
	_textureid = 0;
}
texture2d::~texture2d() {
	glDeleteTextures(1,&_textureid);
}



void texture2d::LoadTexture(std::string path)
{
	ILuint imageID;
	ilGenImages(1, &imageID);
	ilBindImage(imageID);
	ilLoadImage(path.c_str());

	glGenTextures(1, &_textureid);
	glBindTexture(GL_TEXTURE_2D, _textureid);
		glTexImage2D(GL_TEXTURE_2D, 0, ilGetInteger(IL_IMAGE_FORMAT),
		ilGetInteger(IL_IMAGE_WIDTH), ilGetInteger(IL_IMAGE_HEIGHT),
		0, ilGetInteger(IL_IMAGE_FORMAT), ilGetInteger(IL_IMAGE_TYPE),
		ilGetData());
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

	glBindTexture(GL_TEXTURE_2D, 0);
	ilBindImage(0);
	ilDeleteImages(1, &imageID);
}

void texture2d::Bind()

{
	glBindTexture(GL_TEXTURE_2D, _textureid);
}

void texture2d::Unbind()

{
	glBindTexture(GL_TEXTURE_2D, 0);

}


