#include<iostream>
#include"window.h"

void Window::setDimentionWindow(int& width, int& height)
{
	widthWindow = width;
	heightWindow = height;
	std::cout << "New window dimensions width=" << widthWindow << " height =" << heightWindow << std::endl;
}

void Window::setPosition(int& X, int& Y)
{
	positionX1 = positionX2;
	positionY1 = positionY2;
	positionX2 = X;
	positionY2 = Y;
	
}

void Window::getDimentionWindow(int& width, int& height)
{
	width = widthWindow ;
	height = heightWindow;
}

void Window::getPosition(int& X1, int& Y1, int &X2, int &Y2)
{
	X1 = positionX1;
	Y1 = positionY1;
	X2 = positionX2;
	Y2 = positionY2;
}


