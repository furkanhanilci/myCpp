#include <iostream>

using namespace std;


int main()
{

    // About boolalpha link:
    // https://cplusplus.com/reference/ios/boolalpha/
    
    bool found = true;
    //Search Algorithm -> if found, found = true
    cout << std::boolalpha << found << std::endl;
    if(found) cout << "This is True";

}    