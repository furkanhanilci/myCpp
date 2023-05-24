#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int answer = 11; // answer isimli bir değişken belirledik ve 11 değerini atadık.
int guess;       // guess isimli bir değişken belirledik
int tahmin;      // tahmin isimli bir değişken belirledik

/*
int main()
{
    int answer = 11; 
    int guess, points;
    cout << "guess the number ";
    cin >> guess;
    if(guess == answer) // eğer tahminimiz cevaba eşit ise 10 puan kazanırız.
    {
        points = 10;
    }
    cout << points << endl;
}
*/

/*
int main()
{
    int answer = 11;
    cout << "Guess the number: ";
    int guess;
    cin >> guess; 
    int points = guess == answer ? 10 : 0; // eğer guess = answr ise 10 puan alırız aksi takdirde 0 puan.

    cout << points << endl;
}
*/


int main()
{
    int answer = 11;
    cout << "Guess the number: ";
    int guess;
    cin >> guess; 
   
    guess == answer ? cout << "Good Job\n" : cout << "Bad Job\n"; // Eğer kullanıcının tahmini doğruysa "points" değişkenine 10 atanıyor, yanlışsa 0 atanıyor. "? " ifadesi doğru mu demek.
}


