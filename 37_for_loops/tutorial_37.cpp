#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

/*
int main()
{
    for(int i = 0; i < 10; i++ ) // ilk kısım değişkene değer atama-başlatma,2. kısım kıyaslama,3. kısım ise güncelleme kısmıdır.
    {
        cout << i << endl;   // i<10 olduğu sürece i 1 arttırılır.
    }

}
*/

int main()
{
    int fact;
    cout << "Enter the number to take factorial" << endl;
    cin >> fact; // faktöriyeli alınıcak sayı için input alıyoruz.
    int factorial = fact; // türü int olan factorial değişkenini fact değişkenine atadık.


    for (int i = fact -1; i > 1; i--) // i>1 olduğu sürece süslü parantez içindeki işlem uygulanır ve her işlem sonası i 1 azaltılır.
    {
        factorial = factorial * i;
    }

    cout << "factorial of: " << fact << " is " << factorial << endl;

    return 0;
}
