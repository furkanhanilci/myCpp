#include <iostream>
#include <string>
#include <vector> 

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main()
{
    vector<int> data = {1, 2, 3}; //  int tipinde data isimli bir vektör oluşturduk, ve değerleri atadık. 
    data.push_back(12); // data vektörüne 12 değerini push_back ile ekledik.
    cout << data[data.size()-1] << endl; // data vektörünün son indeksindeki değerini bastıdık
    data.pop_back();  // vektördeki son elemanı çıkarır.
    cout << data.size() << endl; // vektörün size'ını bastırır.
}
