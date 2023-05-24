#include <iostream>
#include <limits>

using std::cout;
using std::cin;
using std::endl;



void print_array(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
}

int main()
{
    const int SIZE = 100;          // constant sabit değişkei oluşturuldu ve değer atandı.
    int guesses[SIZE];             // Size boyutunda tamsayı olan guesses dizisi oluşturuldu.

    int count = 0;                 // count değişkeni oluşturuldu ve 0 olarak atandı.

    for(int i = 0; i < SIZE; i++)  // for döngüsü ile "guesses" adında bir tamsayı dizisi içerisine değerlerin atanması işlemi gerçekleştirilir.
    {
        if(cin >> guesses[i])      // Eğer kullanıcı bir tam sayı girerse, "cin" nesnesi değeri okur ve "if" bloğu içerisinde yer alan "count" değişkeni arttırılır. Bu şekilde, kullanıcının kaç tane sayı girdiği takip edilir.
                                   // Ancak kullanıcı bir sayı yerine başka bir karakter veya kelime girerse, 
        {                          // "cin" nesnesi işlevini tamamlayamaz ve "else" bloğu çalışır. Bu blok, döngüyü sonlandırır ve girdi almayı durdurur.
            count++;
        }
        else
        {
            break;
        }
    }
    
    print_array(guesses, count);    // sadece girdiğimiz değerleri görmek istediğimiz için argüman olarak count kullandık.
    std::cin.clear();               // "std::cin.clear()" kullanılarak, önceki girişlerin temizlenmesi sağlanır.
    std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');  // standart giriş akışı nesnesinden "max" adında bir "streamsize" değişkeni kadar karakteri atlayarak önceki girdilerin tamamen temizlenmesi sağlanır.

    std::string test;  //"test" adında bir "string" değişkeni tanımlanır ve "std::cin" kullanılarak kullanıcının  girdiği değer bu değişkene atanır.
    std::cin >> test;
    std:: cout << test << endl;

    return 0; 
}