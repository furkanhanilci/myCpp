#include <iostream>

int main() {
    // Bir dizi tanımlıyoruz ve ilk değerlerini atıyoruz
    int myArray[5] = {1, 2, 3, 4, 5};
    // Bir pointer tanımlıyoruz ve dizinin başlangıç adresine atıyoruz
    int *pointerToArray = myArray;

    // Dizideki elemanların toplamını buluyoruz
    int sum = 0;
    for(int i=0; i<5; i++) {
        sum += *(pointerToArray + i);
    }

    // Elemanların ortalamasını hesaplıyoruz ve ekrana yazdırıyoruz
    double average = static_cast<double>(sum) / 5;
    std::cout << "The average of the elements in the array is: " << average << std::endl;

    return 0;
}
