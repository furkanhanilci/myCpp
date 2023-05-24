#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;



// ****************** 1 *********************
/*
int main()
{
    int guesses[] = {10, 13, 54, 42, 12, 12, 13}; // "guesses" isimli bir array oluştuduk ve içine değerleri yerleştirdik.
    cout << guesses[3] << endl;                   // "guesses" isimli array'in 3. indeksindeki değeri bastırır. 
    return 0;
}
*/

// ****************** 2 *********************
/*
int main() // 
{
    int guesses[40];  //  40 elemanlı bir tamsayı dizisi olan "guesses" adında bir dizi tanımlar.
    cout << guesses[3] << endl;  // bu dizinin 3. elemanını ekrana yazdırır.
    guesses [3] = 300;           // 3. indeksteki elemanın değerini 300 olarak değiştirir ve tekrar ekrana yazdırır.
    cout << guesses[3] << endl;
    return 0;
}
*/

// ****************** 3 *********************
/*
int main()
{
    int guesses[10] = {12, 43, 23, 43, 23};                  // "guesses" adında bir tamsayı dizisi tanımlar ve ilk beş elemanını sırasıyla 12, 43, 23, 43 ve 23 değerleriyle başlatır.
    int size = sizeof(guesses) / sizeof(guesses[0]);     // "size" adında bir int değişken tanımlanır ve bu değişkene "guesses" dizisinin toplam boyutu "guesses[0]" elemanının boyutuna bölünerek atanır.
    cout << size << endl;

    for(int i = 0; i< size; i++)           //Sonrasında "i" değişkeni "size" değerine kadar artırılır ve "guesses" dizisindeki her bir eleman ekrana yazdırılır.
    {
        cout << guesses[i] << endl;
    }  
    return 0;
}
*/

// ****************** 4 *********************

int main()
{
    int guesses [10] = {12, 43, 23, 43, 23};
    int size = sizeof(guesses) / sizeof(guesses[0]);
    int num_elements = 5;

    cout << size << endl;

    for(int i = 0; i < num_elements; i++)
    {
        cout << guesses[i] << "\t";
    }

    return 0;
}