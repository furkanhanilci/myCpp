#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
    //int x = 10 / 4;
    //float x = 10. / 4;
    //double x = 10. / 4;
    //double x = 10 + (4.0 / 3);
    //cout << x << endl;
    double x,y;
    x = 10;
    y = (x = 100);
    cout << x << "\t" << y << endl;
}