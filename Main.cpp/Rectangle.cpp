/*******************************************
Materia: Graficas Computacionales
Autor: A01373890 Gabriela Aguilar Lugo
********************************************/


#include "Rectangle.h"

Rectangle::Rectangle()
{
	_width = 1.0;
	_height = 1.0;
}

Rectangle::Rectangle(float w, float h)
{
	_width = w;
	_height = h;
}

float Rectangle::getWidth()
{
	return _width;
}

void Rectangle::setWidth(float w)
{
	_width = w;
}

float Rectangle::getHeight()
{
	return _height;
}

void Rectangle::setHeight(float h)
{
	_height = h;
}

float Rectangle::getArea()
{
	return _width * _height;
}

float Rectangle::getPerimeter()
{
	return (2 * _width) + (2 * _height);
}
