#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

/*
int main()
{
    int i = 0; // i değişkeni oluşturduk ve 1 değerini atadık.
    
    while (i <= 10) // i<=10 olduğu sürece aşağıdaki süslü parantez içindeki işlemler uygulanır.
    {
        cout << i << "\t"; // i değişkeni bastırılır.
        i++;  // bastırıldıktan sonra da i 1 arttırılır.
               
    }
    
}
*/

int main()
{
    int number, factorial; // number ve factorial değişkenler int tipinden tanımlandı.

    cout << "Enter the number to take factorial" << endl;
    cin >> number; // number değişkeni için input alındı.
    
    int i = number-1; // i değişkeni number-1 olarak atandı.

    while (i > 1) // i>1 olduğu sürece süslü parantez içi uygulandı.
    {
        number *= i;
        i--;
        factorial = number;
    }


    cout << factorial << endl; // while loop bittikten ve factorial değişkeni son halini aldıktan sonra bastırılır.

}