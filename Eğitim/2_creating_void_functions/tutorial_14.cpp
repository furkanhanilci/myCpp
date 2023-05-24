#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power(double base,int exponent) // Double return
{
    double result = 1;

    for(int i = 0; i < exponent; i++)
    {
        result = result * base ;
    }

    return result;

}

void print_pow(double base, int exponent) // No return
{ 
    double mypower = power(base, exponent);
    cout << base << " raised to the " << exponent << " power is " << mypower << "\n";
}

int main()
{
double base ;
int exponent ;
cout << "what is the base" << "\n";
cin >> base;
cout << "what is the exponent" << "\n";
cin >> exponent;
print_pow(base, exponent);

}



