#include <iostream>
#include <vector>

int main() {
    // Bir vektör tanımlıyoruz ve ilk değerlerini atıyoruz
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    // Bir pointer tanımlıyoruz ve vektörün başlangıç adresine atıyoruz
    int *pointerToVector = myVector.data();

    // Pointer aracılığıyla vektörün elemanlarına erişiyoruz ve ekrana yazdırıyoruz
    std::cout << "The first element of the vector is: " << *pointerToVector << std::endl;
    std::cout << "The second element of the vector is: " << *(pointerToVector + 1) << std::endl;
    std::cout << "The third element of the vector is: " << *(pointerToVector + 2) << std::endl;

    return 0;
}
