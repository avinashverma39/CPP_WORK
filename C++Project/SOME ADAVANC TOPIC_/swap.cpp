#include <iostream>
using namespace std;
int main()
{
  // int a, b, tem;
  int a, b, temp;
  cout << "Enter The Two Value : ";
  cin >> a >> b;

  cout << a << " is A " << endl;
  cout << b << " is B " << endl;

  // swap condition--------------->
  temp = a;
  a = b;
  b = temp;
  cout << "After Swaping " << endl;
  cout << a << " is A " << b << " is B ";

  return 0;
}
