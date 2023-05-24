#include <iostream>
#include <string>

using namespace std;

//using std::string;
//using std::cout;


int main()
{
    
    
    string greeting = "Hello";
    //std::cout << greeting+ " There" << std::endl;
    string complate_greeting = greeting + " There ";
    complate_greeting += "!";
    //std::cout << complate_greeting << std::endl;
   cout << complate_greeting << '\n';
    cout << complate_greeting.length() << std::endl;

}
