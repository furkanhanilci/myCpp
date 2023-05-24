#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int age;     // age isimli bir değişken bildirdik.
    cout << "Please type age" << endl;
    cin >> age;  // age isimli değişkene input alıyoruz.
    
    if(age < 13) // eğer age değişkeni<13 ise süslü parantez içindekiler yürütülür. 
    {
        cout << "You're not old enough\n ";
        return -1;
    }

    else if(age < 19) // eğer age <13 değil ise ve <19 ise süslü parantez içindeki ifadeler yürütülür.
    {
        cout << "You're almost 19\n";
    }

    else cout << "False\n" << endl; // if ve else if koşulları sağlanmadığında 


    return 0;
}