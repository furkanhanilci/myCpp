#include <iostream>
#include <vector>

int main() {
    // Bir vektör tanımlıyoruz ve ilk değerlerini atıyoruz
    std::vector<int> myVector = {10, 5, 20, 15, 30};
    // Bir pointer tanımlıyoruz ve vektörün başlangıç adresine atıyoruz
    int *pointerToVector = myVector.data();

    // Vektörün ilk elemanını en büyük olarak kabul ediyoruz
    int max = *pointerToVector;

    // Pointer aracılığıyla vektörün elemanlarına erişiyoruz ve en büyük elemanı buluyoruz
    for(int i=0; i<myVector.size(); i++) {
        if(*(pointerToVector + i) > max) {
            max = *(pointerToVector + i);
        }
    }

    // En büyük elemanı ekrana yazdırıyoruz
    std::cout << "The maximum element of the vector is: " << max << std::endl;

    return 0;
}
