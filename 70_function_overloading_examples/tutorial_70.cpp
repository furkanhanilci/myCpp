#include <iostream>
#include <string>

void swap(int &a, int &b) // ilk swap fonksiyonunu oluşturuyoruz.(int türünden 2 değer alır)
{

    int temp = a;
    a = b;
    b = temp;

    std::cout << "a: " << a << "\tb:" << b << "\n";
}


void swap(std::string &a, std::string &b) // 2. swap fonksiyonumuzu oluşturuyoruz.(farklı tür değerler alır(string))
{
    std::string temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    swap(a,b);

    std::string first_name = "Furkan";
    std::string last_name = "Hanilçi";

    swap(first_name, last_name);
    std::cout << first_name << " " << last_name << std::endl;
    std::cout << "a: " << a << "\tb:" << b << "\n";    

    return 0;
}

// overloading = creating multiple versions of a function.