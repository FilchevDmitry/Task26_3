#include"screen.h"
#include"window.h"
#include<iostream>
Window win;
void Screen::getDimensionsScreen(int& width, int& height)
{
	width = widthScreen;
	height = heightScreen;
}
bool Screen::chek(int &posX,int &posY,int &width,int &height)
{

	if (posX >= 0 && posY >= 0)
	{
		if ((posX + height) > heightScreen || ((posY + width) > widthScreen))
		{
			return false;
		}
		else
			return true;
	}
	else
		return false;
}
void Screen::print()
{
	int x = 0;
	int y = 0;
	win.getPosition(x, y);
	int width = 0;
	int height = 0;
	win.getDimentionWindow(width, height);
	int temp1 = x;
	int temp2 = y;
	for (int i = 0; i < heightScreen ; i++)
	{
		int count = 0;
		x = temp1;
		for (int j = 0; j < widthScreen; j++)
		{	
			if ((x == j) && (y == i))
			{
				if (count <= width)
				{
					std::cout << "1";
					count++;
					x++;
				}
				else
					std::cout << "0";
			}
			else
			std::cout << "0";
		}
		if ((i >= y) && (y <= (temp2 + height)))
		{
			y++;
		}
		std::cout << std::endl;
	}
}
