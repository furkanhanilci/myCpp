#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power(double base,int exponent) // Created function
{
    double result = 1;

    for(int i = 0; i < exponent; i++)
    {
        result = result * base ;
    }

    return result;

}

int main()
{
    int base, exponent; 
    cout << "What is base?";
    cin >> base;
    cout << "What is exponent";
    cin >> exponent;
    double myPower = power(base,exponent);
    // power = pow(base,exponent);
    cout << myPower << "\n"; 
}
