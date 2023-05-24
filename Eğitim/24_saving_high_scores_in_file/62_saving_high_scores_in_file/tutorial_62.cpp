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


void print_vector(vector<int> vector) // void türünde ve print_vector adında bir fonksiyon tanımlanır.Fonksiyonun parametreleri arasında, vector<int> türünde bir vektör yer alır ve vector adıyla çağrılabilir.
{
   for(int i = 0; i < vector.size(); i++) // for döngüsü kullanarak, vektörün her elemanı vector[i] olarak erişilir ve cout ifadesi kullanılarak ekrana yazdırılır. 
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

    ifstream input("best_score.txt");   // ifstream türünden file adlı bir dosya oluşturulur ve "best_score.txt" dosyası bu dosya ile açılır.

    if (!input.is_open())   // dosya açık değilse 
    {
        cout << "unable to read file\n";
        return;
    }
    int best_score;
    input >> best_score;

    ofstream output("best_score.txt");   // "best_score.txt" adlı bir dosyaya  değer yazmak için ofstream türünden output adlı bir çıkış akışı oluşturur.

    if (count < best_score) // count adlı bir değişkenin değerini, eğer count değişkeninin değeri best_score değişkenin değerinden küçükse, dosyaya yazdırır. 
    {                       // Aksi takdirde, dosyaya best_score değerini yazar.
        output << count;
    }
    else
    {
        output << best_score;
    }

    print_vector(guesses); // print_vector adlı bir fonksiyon çağrılır ve guesses adlı bir vektörün elemanları ekrana yazdırılır.
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