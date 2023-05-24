#include <iostream>
#include <string>

/*
using std::cin;
using std::cout;
using std::string;
*/

using namespace std;

int main()
{

/*
string greeting;
cin >> greeting;
string left_over;
cin >> left_over;
cout << greeting << std::endl;
cout << left_over << std::endl;
*/

string greeting;
getline(cin, greeting); // To take input
cout << greeting << '\n';

}