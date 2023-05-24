#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

void print_vector(vector<int> &data)      // print_vector isimli bir fonksiyon oluşturduk .
{
    data.push_back(12);                   // data vektörüne 12 değerini ekledik.(son indeksine)
    for(int i = 0; i < data.size(); i++)  // for döngüsü ile data vektörünün elemanlarını sırasıyla bastırıyoruz.
    {
        cout << data[i] << "\t";
    }
    cout << "\n";
}

int main()
{
vector<int> data = {1, 2, 3}; 
print_vector(data);             // her print_vector fonksiyonunu kullandığımızda 12 değeri 1 kere daha eklenir.
print_vector(data);
print_vector(data);
print_vector(data);
}