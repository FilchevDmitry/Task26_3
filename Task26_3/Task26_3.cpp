#include <iostream>
#include"screen.h"
#include"window.h"

int main()
{   
    Screen screen;
    Window window;
    int num = 0;
    bool exit = true;
    while (exit)
    {
        std::cout << "Input:\n1-move\n2-resize\n3-display\n4-close\n";
        std::cin >> num;
        switch (num)
        {
            case 1:
            {
                int x = 0;
                int y = 0;
                std::cout << "Input new coordinates\n";
                std::cout << "X=";
                std::cin >> x;
                std::cout << "Y=";
                std::cin >> y;
                window.setPosition(x, y,screen);
                break;
            }
            case 2:
            {
                int width = 0;
                int height = 0;
                std::cout << "Input new dimensions\n";
                std::cout << "width=";
                std::cin >> width;
                std::cout << "height=";
                std::cin >> height;
                window.setDimentionWindow(width, height,screen);
                break;
            }
            case 3:
            {
                screen.print(window);
                break;
            }
            case 4:
            {
                exit = false;
                break;
            }
            default: 
            {
            std::cout << "Incorrect input\n";
            break; 
            }
        }
    }
    
    
}
