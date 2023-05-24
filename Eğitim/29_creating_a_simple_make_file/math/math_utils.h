#ifndef MATH_UTILS
#define MATH_UTILS

struct Rectangle
{
    double lenght;
    double width;
};

double area(double lenght, double width);

double area(double lenght);

double area(Rectangle rectangle);

double pow(double base, int pow = 2);
#endif