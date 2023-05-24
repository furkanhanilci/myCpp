#include <iostream>

int main() {
    // Bir dizi tanımlıyoruz ve ilk değerlerini atıyoruz
    int myArray[5] = {1, 2, 3, 4, 5};
    // Bir pointer tanımlıyoruz ve dizinin başlangıç adresine atıyoruz
    int *pointerToArray = myArray;

    // Pointer aracılığıyla dizinin elemanlarına tersten erişiyoruz ve ekrana yazdırıyoruz
    std::cout << "Dizinin tersten yazdırılmış hali:" << std::endl;
    for(int i=4; i>=0; i--) {
        std::cout << *(pointerToArray + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
