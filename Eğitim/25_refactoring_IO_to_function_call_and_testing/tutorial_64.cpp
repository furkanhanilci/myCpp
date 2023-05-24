#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::ifstream;
using std::ofstream;
                             
void save_score(int count) // save_score isminde ve int türünden count isimli bir parametre alan fonksiyonu tanımlıyoruz.
{                          // save_score fonksiyonu "count" adında bir tamsayı parametresi alır ve bu sayıyı "best_score.txt" adlı bir dosyaya, eğer bu sayı şu an dosyada tutulan en iyi skordan daha düşükse kaydeder.
    ifstream input("best_score.txt"); // "input" adında bir "ifstream" nesnesi oluşturulur ve "best_score.txt" dosyası açılır. 

    if (!input.is_open()) //  "is_open()" fonksiyonu, dosyanın açılıp açılmadığını kontrol eder. Dosya açılmazsa, "unable to read file" yazısı ekrana basılır ve fonksiyondan çıkılır.
    {
        cout << "unable to read file\n";
        return;
    }
    int best_score;
    input >> best_score; // Eğer dosya açılırsa, dosyadan ">>" operatörü kullanılarak "best_score" adlı bir tamsayı değişkenine değer atanır.

    ofstream output("best_score.txt"); // Daha sonra, "output" adında bir "ofstream" nesnesi oluşturulur ve yine "best_score.txt" dosyası açılır. Bu sefer, dosya yazmak için açılır.

    if (count < best_score) //  eğer "count" değişkeni "best_score" değişkeninden küçükse, "output" nesnesi "count" değişkeninin değerini dosyaya yazar. 
    {
        output << count;
    }
    else                   //  Aksi takdirde, "best_score" değişkeninin değeri dosyaya yazılır.
    {
        output << best_score;
    }

} 

void print_vector(vector<int> vector)
{
   for(int i = 0; i < vector.size(); i++)
   {
    cout << vector[i] << "\t" << endl;
   }
}

void play_game()
{
    vector<int> guesses;
    int count = 0;

    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess the number: " << endl;
    
    while(true)
    {
        int guess;
        cin >> guess;
        count++;

        guesses.push_back(guess);

        if(guess == random)
        {
            cout << "*************** You Win! ***************\n";
            break;
        }
        else if(guess < random)
        {
            cout << "*************** Too low, Try Again ***************\n";
        }
        else 
        {
            cout << "*************** Too High, Try Again ***************\n";
        }
    }

    save_score(count);

    print_vector(guesses);
} 

int main()
{
    srand(time(NULL));

    int choice;
    do
    {
        cout << "0. Quit" << endl << "1. Play Game\n";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thanks for nothing\n";
            return 0;
        
        case 1:
            play_game();
            break;
        }
    } while (choice != 0);
    
}