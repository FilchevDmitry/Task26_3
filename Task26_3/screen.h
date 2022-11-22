#pragma once
class Screen
{
public:
	void getDimensionsScreen(int &width, int &height);
	bool chek(int& posX, int& posY, int& width, int& height);
	void print();
private:
	int widthScreen = 200;
	int heightScreen = 100;
};