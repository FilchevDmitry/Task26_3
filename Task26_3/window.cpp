#include<iostream>
#include"window.h"
#include"screen.h"

void Window::setDimentionWindow(int& width, int& height,Screen &chekPosition)
{
	if (width > 0 && height > 0)
	{	
		if (chekPosition.chek(positionX1, positionY1,width,height))
		{
			widthWindow = width;
			heightWindow = height;
			std::cout << "New window dimensions width=" << widthWindow << " height =" << heightWindow << std::endl;
		}
		else
			std::cout << "Incorrect dimensions \n";
	}
	else 
	{
		std::cout << "Incorrect dimensions \n";
	}
}

void Window::setPosition(int& X, int& Y, Screen &chekPosition)
{
	if (chekPosition.chek(X, Y, widthWindow, heightWindow))
	{
		if (positionX2 != 0 || positionY2 != 0)
		{
			positionX1 = positionX2;
			positionY1 = positionY2;
			positionX2 = X;
			positionY2 = Y;
			std::cout << "New Position X=" << X << " Position Y=" << Y << std::endl;
		}
		else
		{
			positionX2 = positionX1;
			positionY2 = positionY1;
			positionX1 = X;
			positionY1 = Y;
			std::cout << "New Position X=" << X << " Position Y=" << Y << std::endl;
		}

	}
	else
	{
		std::cout << "incorrect coordinates\n";
	}
	
}

void Window::getDimentionWindow(int& width, int& height)
{
	width = widthWindow ;
	height = heightWindow;
}

void Window::getPosition(int& X1, int& Y1)
{
	X1 = positionX1;
	Y1 = positionY1;
}


