#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    int i;
    string sentence = "Hello my name is Furkan"; // sentence değişkeni oluşturuldu.
    for(int i = 0; i < sentence.size(); i++);
    {
        cout << sentence[i] << endl;
    }
}
        // break ifadesi içinde olduğu döngüyü kırar,bitirir diyebiliriz.
        // continue ise içinde olduğu döngünün tekrarlanmasını durdurur ve sonraki tekrarlamaya geçer.
        // sonraki uygulamalarda break ve continue daha detaylıca anlaşılabilir.
