#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{

    //enum season{summer, spring, fall, winter};

    enum class Season{summer, spring, fall, winter}; // Season isimli bir class oluşturuldu.

   /* int age;
    cout << "how old are you" << endl;
    cin >> age; // age isimli değişken için input aldık.

    switch (age)
    {
        case 13:
            cout << "Your age is 13\n";
            break; // Bu case'i bitirdik anlamında kullanılır.

        case 14:
            cout << "Your age is 14\n";
            break;
        
        default:
            cout << "Catch all\n";
            break;

    }
    */

    //season now = winter;

    Season now = Season::winter;

    /* switch (now)
    {
        case summer:
        break;

        case spring:
        break;

        case fall:
        break;

        case winter:
        cout << "Stay Warm!\n";
  
    }
    */

     switch (now) // now isimli değişken durumlarına göre case'ler yürütülecek.
    {
        case Season::summer:
        break; // Bu case'i bitirdik anlamında kullanılır.

        case Season::spring:
        break;

        case Season::fall:
        break;

        case Season::winter:  // now değişkeni winter olduğu için "" içindeki ifade bastırılır.
        cout << "Stay Warm!\n";
  
    }

    return 0;

}
