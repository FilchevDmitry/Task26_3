#include <iostream>
#include"screen.h"
#include"window.h"

int main()
{   
    Screen screen;
    int a = 0;
    int b = 0;
    screen.getDimensions(a, b);
    std::cout << a<<" "<<b;
}
