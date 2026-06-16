#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";

    str.append(" World");

    // Hello World----------->

    str.insert(5, ",");

    // Hello, World--------->

    str.replace(0, 5, "Hi");

    // Hi, World------------>

    str.erase(2, 1);

    // Hi World------------>

    str.push_back('!');

    // Hi World!----------->

    str.pop_back();

    // Hi World------------>

    cout << str;

    cout << "substring : " << str.substr(3, 5) << endl;

    cout << "Length : " << str.length() << endl;

    cout << "Find 'World' : " << str.find("Hi") << endl;

    return 0;
}