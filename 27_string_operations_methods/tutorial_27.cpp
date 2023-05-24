#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    //string greeting="What the Hell!";
    //greeting.replace(greeting.find("Hell"),4,"****");
    //cout << greeting << endl;
    //string greeting_2;
    //string greeting="What";S
    string greeting="What is Up?";
    //cout << greeting.substr(5, 2) << endl;
    //cout << greeting.find_first_of("aeiou") << endl;
    //cout << greeting.find_first_of("!") << endl;
    //npos == -1
    //unsigned long x = -1;
    //cout << x << endl;
    //if(greeting.find_first_of("!") == -1) cout << "NOT FOUND" << endl;
    //cin >> greeting_2;
    //if(greeting_2 == greeting) cout << "Equal" << endl;
    //if(greeting == "Hello") cout << "Equals" << endl;
    // compare: https://www.geeksforgeeks.org/stdstringcompare-in-c/
    if(greeting.compare("What is Up?") == 0) cout << "Equals" << endl; // compare() returns an integer value rather than a Boolean value.
    //else cout << "NOT Equal" << endl;

}