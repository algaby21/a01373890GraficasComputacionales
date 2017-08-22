#pragma once
/*******************************************
Materia: Graficas Computacionales
Fecha: 21 de agosto del 2017
Autor: A01373890 Gabriela Aguilar Lugo
********************************************/

#include <string>

class inputFile {

public:
	bool Read(std::string filename);
	std::string GetContents();

private:
	std::string _contents;

};