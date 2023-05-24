#include <iostream>
#include <climits>

using std::cout;

int main()
{
    short a; 
    int b;  // int en az 16 ama genellikle 32 bit
    long c;  // long en az 32 bit
    long long d;  // long long en az 64 bit 
    // short <= int <= long <= long long 

    unsigned short aa; // unsigned olanlar sadece pozitif değerler için
    unsigned int bb; 
    unsigned long cc;
    unsigned long long dd;

    //cout << sizeof(unsigned long long) << std::endl;  herbirinin ne kadar memory'si olduğunu öğrenmek için sizeof kullanılır.

    cout << USHRT_MAX << std::endl;
}
