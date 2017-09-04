#include "InputFile.h"

#include <iostream>
#include <fstream>


int main(int argc, char* argv[])
{
	std::string filename = "Prueba.txt";
	InputFile myFile;
	myFile.Read(filename);
	std::string contents = myFile.GetContents();
	std::cout << "Contents: " << contents << std::endl;
	std::cin.get();
}