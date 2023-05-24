#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;


string password = "karsanotonom"; // password değişkeni oluşturduk ve "" içindeki ifadeyi atadık.
string type; // type değişkeni oluşturuldu.
string pass; // pass değişkeni oluşturuldu.


bool is_equal(string type) // is_equal() fonksiyonu, bir string parametre olan type ile tanımlanmıştır. Bu fonksiyon, password ve type değişkenlerini karşılaştırır ve eşitse true, değilse false döndürür. 
{
    return (password == type);
}


string sifre_al(string type)
{
    cout << "type the password" << endl;
    cin >> type;
    return type;
}


int main()
{
                                       // do while loop'u bir şeyin en az 1 kere olmasını istiyorsak kullanırız.
    do // aşağıdaki süslü parantez içindeki ifadeyi while döngüsünü başlatmadan 1 kere döndürür.
    {
        
        pass=sifre_al(type); 

        if(is_equal(pass) == false)
        {
            cout << "please try again\n" << endl;    
        }

    } while (is_equal (pass) == false);


    cout << "password is true" << "\n" << endl;

}

