#include <iostream>

struct Rectangle
{
    double lenght;
    double width;
};

double area(double lenght, double width) //rectangle
{
    return lenght * width;
}

double area(double lenght) //square
{
    return lenght * lenght;
}

double pow(double base, int pow = 2) // int pow = 2, pow değerini default olarak başta belirliyoruz.
{                                    // yani pow değerini fonksiyonu çağırdığımızda girmezsek default olarak 2 sayacak.
    int total = 1;
    for(int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}


int main()
{  
    std::cout << pow(3, 3) << std::endl;
    std::cout << pow(3) << std::endl;
    /*
    Rectangle rectangle;
    rectangle.lenght = 10;
    rectangle.width = 10;
    std::cout << area(rectangle.lenght, rectangle.width) << std::endl;
    std::cout << area(rectangle.lenght) << std::end;
    std::cout << area(rectangle) << std::endl;
    */

    return 0;
}