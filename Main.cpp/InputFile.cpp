/*******************************************
Materia: Graficas Computacionales
Fecha: 21 de agosto del 2017
Autor: A01373890 Gabriela Aguilar Lugo
********************************************/

#include "InputFile.h"
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

bool InputFile::Read(std::string filename)
{
	ifstream file;
	file.open(filename);

	if (!file) {
		_contents = "";
		return false;
	}
	else {
		string line;
		stringstream data;
		while (getline(file, line)) {
			data << line << "\n";
		}
		_contents = data.str();
		file.close();
		return true;
	}
}

std::string InputFile::GetContents()
{
	return _contents;
}