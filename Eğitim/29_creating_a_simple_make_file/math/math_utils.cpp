#include "math_utils.h"

double area(double lenght, double width) //rectangle
{
    return lenght * width;
}

double area(double lenght) //rectangle
{
    return lenght * lenght;
}

double pow(double base, int pow)
{
    int total = 1;
    for(int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}
