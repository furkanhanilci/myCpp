#include <iostream>
#include <float.h>

//using std::cout;

using namespace std;

int main()
{
    float a = 10.0 / 3;
    a = a * 10000000;
    double b;
    long long c;
    
    // About fixed
    // https://en.cppreference.com/w/cpp/io/manip/fixed
    cout << std::fixed << a << std::endl;
    cout << LDBL_DIG << std::endl;
}