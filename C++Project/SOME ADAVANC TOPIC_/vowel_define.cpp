#include <iostream>
using namespace std;
int main()
{
    char alphabet;
    cout << "Enter a Character :  ";
    cin >> alphabet;

    alphabet = tolower(alphabet);
   //A cout << alphabet;

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        cout << alphabet << "Is a vowel" << endl;
    }
    else if (alphabet >= 'a' && alphabet <= ' z')
    {
        cout << alphabet << " Is a consonent " << endl;
    } else{
        cout<< "Invalid  input. please enter an alphabet charactor"<<endl;
    }

    return 0;
}