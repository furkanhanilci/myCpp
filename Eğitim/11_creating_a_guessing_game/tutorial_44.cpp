#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void play_game() // play_game fonksiyonunu tanımlıyoruz.
{
    int random = rand() % 251; // rastgele bir sayı oluşturuyoruz ve 251 e bölüyoruz böylee rastgele sayı 0-250 arsında bir değer alıyor.
    cout << random << endl;
    cout << "Guess a number"; 
    while(true)
    {
        int guess; // guess değişkenini tanmladık.
        cin >>guess; // tahmin edeceğimiz sayıyı yazdık.
        if(guess == random) // eğer tahminimiz doğruysa "you win" çıktısını aldık
        {
            cout << "you win\n";
            break;
        }else if (guess < random) // eğer tahminimiz değerden küçükse "too low" çıktısını aldık.
        {
            cout << "Too low \n";
        }else
        {
            cout << "Too high \n";
        }

    }
    
}

int main()
{
    srand(time(NULL)); // rastgele sayının her seferde farklı bir ayrı olması için,
    int choice; // choice değişkeni oluşturduk.
    do
    {
        cout << "0. Quit" << endl << "1. Play Game\n";
        cin >> choice; // choice değişkeni içn input alıyoruz, oyunu başlatmak için.

        switch(choice)
        {
            case 0:
                cout << "Thanks for nothing\n"; // case değişkenine 0 dersek oyun başlamaz.
                return 0;

            case 1:
                play_game(); // yukarda oluşturduğumuz fonksiyonu çağırdık ve oyunu oynadık.
                break;    
        }
    } while (choice != 0); // choice değişkeni 0 olmadığı sürece döngü devam eder.

    
}