 #include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
int choice; // choice isimli int tipinden bir değişken oluşturduk.

/*
int main()
 {
    cout << "0. Quit" << endl << "1. Play Game\n";
    cin >> choice;                       // choice değişkeni için input alıyoruz.

    switch (choice)                      // aldığımız input'u case olarak ayırıyoruz.
    {
    case 0:
        cout << "Thanks for nothing\n";  // case 0 ise "" içindeki ifade döner eğer değil ise 
        return 0;
    
    case 1:
        cout << "let's play\n";          // case için verilen değer 0 değil 1 ise 
        break;

    default:                             // case değişkeni 0 veya 1 dışında bir değer aldığında.
        cout << "invalid choice\n";     
        break;
    } 

 }
 */ 


int main()
{
    int choice;
    do // menüyü ilk başta 1 kere göstermek için do while kullanıyoruz.
    {
        cout << "0. Quit" << endl << "1. Play Game\n";
        cin >> choice;
        switch(choice)
        {
            case 0:
            cout << "Thanks for nothing\n";
            return 0;
    
            case 1:
            cout << "let's play\n";
            break;
        }
    }
    while(choice != 0); // choice değişkeni 0 olmadığı sürece devam eder.

}
 
 