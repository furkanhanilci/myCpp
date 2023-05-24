#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    int age_answer = 63;   // age_answer isimli bir değişken oluşturduk ve 63 değerini verdik.
    int age_guess;

    string answer = "Furkan";
    string name_guess;

    cout << "Guess my name!" << endl;
    cin >> name_guess; //name_guess isimli değişken için input alıyoruz.

    cout << "Guess my age!" << endl;
    cin >> age_guess;

    /*if(guess == answer && age_guess == age_answer) 
    {
        cout << "You got it right!";
    }
    */

   if(name_guess == answer || age_guess == age_answer) // "||" ifadesi or ifadesidir ve 2 koşuldan birinin doğru olması süslü parantez içindeki ifadenin yürütülmei için yeterlidir.
    {
        cout << "You got it right!" << endl;
    }

    return 0;
}