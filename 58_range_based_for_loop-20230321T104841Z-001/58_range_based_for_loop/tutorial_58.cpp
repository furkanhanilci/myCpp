#include <iostream> 
#include <string>
#include <vector>
#include <array>


using std::cout;
using std::cin;
using std::array;
using std::vector;



int main()
{
    array<int, 60> data = {1, 2, 3, 4, 5, 6}; // size'ı 60 olan ama içinde 6 elemanı olan (aslında diğer elemanlar da sıfır.) bir array tanımladık.

    for(int n : data) // bu for döngüsünde eleman hangi tipte (int) ve bu veri tipini hangi arrayden,nereden alıyoruz (data) belirtilir. (range based loop)
    {
        cout << n << "\t";

    }

/*
    for(int i = 0; i < 6; i++)         // yukarıdaki for döngüsü ile aynı işlevi görür ama yukarıdaki daha basit ve temiz.
    {
        cout << data[i] << "\t";
    }

    cout << "\n";
*/

}

