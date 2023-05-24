#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;


void print_array(int array[], int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << array[i] << "\t";
    }
    cout << "\n";
}

void play_game()
{
    int guesses[251]; 
    int guess_count = 0; 

    int random = rand() % 251;
    //cout << random << endl;
    cout << "Guess the number: " << endl;
    
    while(true)
    {
        int guess;
        cin >> guess;
        guesses[guess_count++] = guess;  //  "guesses" dizisindeki "guess_count" indisli eleman, kullanıcının girdiği "guess" değerine eşitlenir. 
                                         //  "guess_count" değişkeni daha sonra artırılır, böylece bir sonraki kullanıcının girdisi bir sonraki elemana atanır.
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
    print_array(guesses, guess_count);
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
             play_game(); // yukarda oluşturduğumuz fonksiyonu çağırdık ve oyunu oynadık.
                break;   

        
        

        }
    } while (choice != 0);
    
}