#include <iostream>
using namespace std;

int main()
{
  char key;
  cout << "Enter the Charecter :";
  cin >> key;
  if ((key >= 'a' && key <= 'z') || key >= 'A' && key <= 'Z')

  {
    if (key == 'a' || key == 'e' || key == 'i' || key == 'o' || key == 'u' || key == 'a' || key == 'e' || key == 'i' || key == 'o' || key == 'u')

    {
      cout << "It is a Vowel" << endl;
    }
    else
    {
      cout << "It is a consonent" << endl;
    }
  }
  else if (key >= '0' && key <= '9')
  {
    cout << "It is a Digit";
  }
  else
  {
    cout << "It is a spical charecter " << endl;
  }

  return 0;
}