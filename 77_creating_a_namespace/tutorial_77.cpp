#include <iostream>
#include <vector>
#include <array>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::array;

namespace utilz // utilz isminde bir namespace oluşturuyoruz.
{
     void print_array(const int data[], int size) // namespace içinde print_array fonksiyonu oluşturuyoruz.
    {
    
        for(int i = 0; i < size; i++)
        {
            cout << data[i] << "\t";
        }
        cout << "\n";
    }
} 

using namespace utilz;
int main()
{
    int data[] = {1, 2, 3};
    utilz:: print_array(data, 3);
    std::cout << data[0] << std::endl;
}



// utilz adlı bir namespace içinde print_array() adlı bir fonksiyon tanımlar.
// print_array() fonksiyonu, bir int dizisi ve boyutunu alır ve bu diziyi ekrana yazar.
// main() fonksiyonu, data adlı bir int dizisi oluşturur ve {1, 2, 3} değerlerini atar.
//  Daha sonra, utilz namespace'inden print_array() fonksiyonunu çağırarak data dizisini ekrana yazdırır. Son olarak, data[0] elemanını yazdırır