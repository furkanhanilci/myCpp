#include <iostream>
#include "math_utils.h"




int main()
{  
    std::cout << utilz::pow(3, 3) << std::endl;
    std::cout << utilz::pow(3) << std::endl;
    
    Rectangle rectangle;
    rectangle.lenght = 10;
    rectangle.width = 10;
    std::cout << utilz::area(rectangle.lenght, rectangle.width) << std::endl;
    std::cout << utilz::area(rectangle.lenght) << std::endl;
    std::cout << utilz::area(rectangle) << std::endl;
    

    return 0;
}