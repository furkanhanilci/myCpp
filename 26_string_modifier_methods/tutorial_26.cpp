#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string greeting="What the Hell";
    //string greeting="Hello";

    //greeting+=" There";
    //greeting.append(" There!");
    //greeting.insert(3,"         ");
    //cout << greeting.length() << endl;
    //cout << greeting.size() << endl;
    //greeting.erase(3);
    //greeting.erase(greeting.length()-1);
    greeting.pop_back(); // to remove an element from the back of a list container.
    greeting.replace(9,4,"****"); // str1.replace(position,length,str2)
    cout << greeting << endl;

}