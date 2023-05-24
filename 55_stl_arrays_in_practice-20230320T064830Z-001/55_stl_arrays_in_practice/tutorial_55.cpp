#include <iostream>
#include <vector>
#include <array>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::array;  

void print_array(array<int, 20> data, int size) // print_array fonksiyonu oluşturduk.
{
    
    for(int i = 0; i < size; i++)      // for döngüsü ile data isimli arrayın elemanlarını bastırıyoruz. 
    {
        cout << data[i] << "\t";
    }
    cout << "\n";
}

int main()        
{
    array<int, 20> data = {1, 2, 3};   // data isimli array'e değerler atanır. 
    print_array(data, 3);
}


/*

C++ programlama dilinde "<" sembolü, değişken tanımlarken belirli bir veri tipi için bir şablon parametresi belirtmek için kullanılır.
Örneğin, standart şablon kütüphanesi'nin vektör (vector) konteynerini kullanan bir tamsayı koleksiyonu tutan
"myVector" adlı bir değişken tanımlamak istediğinizi varsayalım. Bunu aşağıdaki gibi tanımlayabilirsiniz:

    std::vector<int> myVector;

Burada, std::vector bir şablon sınıfıdır ve bir veya daha fazla şablon parametresi alır. Bu durumda, vektörde saklanacak öğelerin türünü "<int>" kullanarak belirtiyoruz.
Bu, derleyicinin yalnızca tamsayıları depolayabilen bir vektör oluşturmasını söyler.
Virgülle ayrılmış birden fazla şablon parametresi de olabilir. Örneğin:

    std::pair<int, std::string> myPair;

Burada, std::pair başka bir şablon sınıfıdır ve iki şablon parametresi alır. İlk parametre bir tamsayıdır ve ikinci parametre bir dizedir.
Özetle, C++'da "<" sembolü, şablon parametrelerini kabul eden sınıflar ve veri yapılarında değişken tanımlarken şablon parametrelerini belirtmek için kullanılır.

*/