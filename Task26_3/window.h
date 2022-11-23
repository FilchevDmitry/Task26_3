#pragma once
class Window
{
public:
	void setDimentionWindow(int &width, int &height, class Screen &chekPosition);
	void setPosition(int& X, int& Y, class Screen& chekPosition);
	void getDimentionWindow(int &width, int &height);
	void getPosition(int& X1, int& Y1);
private:
	int widthWindow=80;
	int heightWindow=50;
	int positionX1=0;
	int positionY1=0;
	int positionX2 = 0;
	int positionY2 = 0;
};


