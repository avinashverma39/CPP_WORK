#include <iostream>
#include <string>
using namespace std;

int main()
{

    string name = "avinash", str = "aman";

    cout << name.length();
    cout << name.empty() << endl;
    cout << name.front() << endl;
    cout << name.back() << endl;
    cout << name.append(name) << endl;
    cout << name.insert(1, ",") << endl;
    cout << name.erase(1, 2) << endl;
    cout << name.replace(1, 2, "hi") << endl;
    cout << name.substr(4, 3) << endl;
    cout << name.find("s") << endl;
    cout << name.compare("avinash") << endl;
    name.clear();
    cout << name;     
    cout << name.empty();
    name.push_back('#');
    cout << name << endl;
    name.pop_back();
    cout << name << endl;
    name.resize(4);
    cout << name << endl;
    cout << name.capacity();
    name.shrink_to_fit();
    cout << name.capacity();
    cout << name << endl;
    name.swap(str);
    cout << name;
  
    return 0;
}