#include <iostream>
using namespace std;

int main()
{
    char Alphabet;
    cout << "Enter a Alphabet : " << endl;
    cin >> Alphabet;

    Alphabet = tolower(Alphabet);

    if (Alphabet == 'a' || Alphabet == 'e' || Alphabet == 'i' || Alphabet == 'o' || Alphabet == 'u')
    {

        cout << Alphabet << " Is  a Vowel ";
    }
    else if (Alphabet >= 'a' && Alphabet <= 'z')
    {
        cout << Alphabet << " is a consonent." << endl;
    }
    else
    {
        cout << "Invalid Inpout Please Enter An Alphabet Charecter ";
    }

    return 0;
}