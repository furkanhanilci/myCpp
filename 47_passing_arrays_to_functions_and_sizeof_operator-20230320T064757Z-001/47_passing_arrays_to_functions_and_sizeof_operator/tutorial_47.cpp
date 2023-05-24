#include <iostream>

void print_array(int array[], int size)  // print_array" isminde fonksiyon tanımladık.Fonksiyon, "array" adında bir tamsayı dizisi ve "size" adında bir tamsayı değişkeni alır.

{
    for(int i = 0; i < size; i++)    // "i" değişkeni 0'dan "size" değerine kadar artırılır ve "array" dizisindeki her bir eleman ekrana yazdırılır. 
    {
        std::cout << array[i] << "\t";
    }
    std::cout << std::endl;
}


int main()
{
    int guesses[] = {12, 43, 23, 43, 23}; // guesses dizisi oluşturulur ve dizie değerler atanır.
    int size = sizeof(guesses) / sizeof(int); 
    print_array(guesses, 5); // print array fonksiyonu ile guesses dizisi ekrana bastırılır.
}

