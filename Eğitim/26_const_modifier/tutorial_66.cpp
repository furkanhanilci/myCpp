#include <iostream>
#include <vector>


void do_something(const int array[])
{

}                                            // const int türünde tanımlamamızın sebebi ise array'in hiçbir şekilde değişmesini istemediğimiz için.(constant)
void print_array(const int data[], int size) // print_array isimli bir fonksiyon oluturuyoruz.
{                                            // parametreleri ise const int tipinde bir array ve ve onun boyutu.
    for(int i = 0; i < size; i++)
    {                                         // bu fonksiyon data içindeki değerleri sırasıyla bastırır. 
        std::cout << data[i] << "\t";
    }

    std::cout << "\n";
    do_something(data);
}

int main()
{
    int data[] = {1, 2, 3};
    print_array(data, 3);
    std::cout << data[0] << std::endl;
    return 0;
}