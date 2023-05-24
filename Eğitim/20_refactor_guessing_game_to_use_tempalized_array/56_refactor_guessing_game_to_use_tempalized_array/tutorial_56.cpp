#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::array;


void print_array(array<int, 251> array, int size)    // print_array fonksiyonu oluşturuyoruz ve array içindeki değerleri bastırıyoruz.
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    cout << "\n";
}

void play_game()
{
    array<int, 251> guesses; // guesses isminde size'ı 251 olan int bir array tanımladık.
  
    int random = rand() % 251; // random isimli değişken oluşturduk ve  0-250 arasında bir sayı tanımladık.
    int count = 0;
    //cout << random << endl;
    cout << "Guess the number: " << endl;
    
    while(true)
    {
        int guess;
        cin >> guess;
        guesses[count++] = guess;
        
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
    print_array(guesses, count);
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