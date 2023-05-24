#include <iostream>

using std::cout;
using std::cin;

int main() //main function
{
    int slices; //değişken oluşturuldu.
    cout << "how many pieces of pizza you eat?"; // "" içnde ki ifadeyi print eder.
    
    cin >> slices;  // slices değişkeni için input alınıcak.

    cout << " You Have " <<  slices << " slices of pizza " << std::endl;

}
