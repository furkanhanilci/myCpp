#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;


void print_vector(vector<int> vector)   // print_vector fonksiyon oluşturduk.
{
    for(int i = 0; i < vector.size(); i++) // for döngüsü ile vektör üzerinde gezinerek elemanlarını bastırıyoruz.
    {
        cout << vector[i] << "\t";
    }
    cout << "\n";
}

void play_game()   // daha önce de oluşturduğumuz play_game fonkiyonunu vector'lere göre düzenliyoruz.
{
    vector<int> guesses;  // guesses isminde integer tipinden bir vektör tanımladık.
  
    int random = rand() % 251; // 0-250 arasında olacak şekilde random bir sayı oluşturuyoruz.
    //cout << random << endl;
    cout << "Guess the number: " << endl;
    
    while(true)
    {
        int guess; // guess isminde int tipinde bir değişken oluşturduk.
        cin >> guess; // guess değişkeni için input alıyoruz.
        guesses.push_back(guess);   // guesses vektörüne input verdiğimiz guess değişkenini atıyoruz.

        if(guess == random) // eğer tahminimiz sayıya eşit ise,
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
    print_vector(guesses); // tahminlerimizi yerleştirdiğimiz vektörü bastırıyoruz.
    
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
    } while (choice != 0); // choice değişkeni sıfır olmadığı sürece do parantezi içindeki işlemler uygulanır.
    
}