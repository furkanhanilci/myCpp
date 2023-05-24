#include <iostream>
#include <fstream>
#include <vector>
#include <array>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;
using std::array;
using std::ifstream;

/*
********************* 1 **********************
int main()
{
    ifstream file ("abc.txt");    // ifstream türünden file adlı bir dosya oluşturulur ve "abc.txt" dosyası bu dosya ile açılır.
    vector<string> names;         // vector<std::string> türünde names vektörü oluşturulur
    string input;                 // std::string türünde input adlı bir dize tanımlanır.

    while(file >> input)          // while döngüsü kullanarak, file dosyasından input değişkenine metin okunur ve her okuma işlemi sonrasında names vektörüne eklenir.
    {
        names.push_back(input);
    }    

    for(string name : names)      // for döngüsü kullanılarak, names vektöründeki her dize name değişkenine atanır ve cout ifadesi kullanılarak ekrana yazdırılır.
    {
        cout << name << endl;
    }
}
*/

/*
********************* 2 **********************
int main()
{
    ifstream file ("abc.txt");
    vector<char> names;
    char input;

    while(file >> input)
    {
        names.push_back(input);
    }    

    for(char name : names)
    {
        cout << name << endl;
    }
}
*/

//******************* 3 **********************
int main()
{
    ifstream file ("abc.txt");   // ifstream türünden file adlı bir dosya oluşturulur ve "abc.txt" dosyası bu dosya ile açılır.
    if(file.is_open())
    {
        cout << "it worked\n ";
    }

    string line;
    getline(file, line);  // dosyadaki ilk satırdaki metin getline işlevi kullanılarak line adlı değişkene atanır.
    cout << line << "\n";
    return 0;
}