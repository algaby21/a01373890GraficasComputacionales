/*******************************************
Materia: Graficas Computacionales
Autor: A01373890 Gabriela Aguilar Lugo
Rectangulo y triangulo 
********************************************/
/*

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"

int main()
{
	Circle circulo(2.0, "green");

	Rectangle rectangulo(3.0, 15.0);

	std::cout << circulo.GetRadius() << std::endl;
	std::cout << rectangulo.getPerimeter() << std::endl;
	std::cout << rectangulo.getArea() << std::endl;

	std::cin.get();
}*/


#include "InputFile.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {

	std::string filename = "Prueba.txt";
	InputFile myFile;
	myFile.Read(filename);
	std::string _contents = myFile.GetContents();
	std::cout << "Contents: " << _contents << std::endl;
	std::cin.get();

	return 0;
}

