// WELCOME TO QUIZ --------------->
#include <iostream>
#include <string>
using namespace std;

int main()
{
    system("cls");
    cout << "========= Welcome To Quiz Game ==========" << endl;

    int score = 0; 
    char answer;

    cout << "\nQ.1 What is the Captail of India ? " << endl;
    cout << "A) Lucknow " << endl;
    cout << "B) Delhi " << endl;
    cout << "C) Mumbai " << endl;
    cout << "D) Punjab " << endl;
    cout << endl;
    cout << "Choice The Option (A,B,C,D) : ";
    cin >> answer;
    cout << endl;
    if (toupper(answer) == 'B')
    {
        score++;

        cout << "Correct Ans";
    }
    else
    {
        cout << "Incorrect Ans";
        cout << "\nThe Correct Answer is B. Delhi";
    }
    cout << endl;

    cout << "\nQ.2 Which planet is known as the Red Planet? ";
    cout << "\nA) Earth";
    cout << "\nB) Mars";
    cout << "\nC) Jupiter";
    cout << "\nD) Venus";
    cout << endl;
    cout << "\nChoice The Option (A,B,C,D) : ";
    cin >> answer;
    cout << endl;
    if (toupper(answer) == 'B')
    {
        score++;
        cout << "Correct Ans";
    }
    else
    {
        cout << "Incorrect Ans";
        cout << "\nThe Correct Answer is B. Mars";
    }
    cout << endl;

    cout << "\nQ.3 Which of the following is a loop structure in C++?\n";
    cout << "A) for\nB) repeat\nC) iterate\nD) loop\n";

    cout << "Choice The Option (A,B,C,D) : ";
    cin >> answer;
    cout << endl;
    if (toupper(answer) == 'A')
    {
        cout << "Correct Ans";
        score++;
    }
    else
    {
        cout << "\nIncorrect Ans";
        cout << "\nThe Correct Answer is A. for";
    }
    cout << endl;
    cout << "\nQ.4 What is the output of: cout << 2 + 3 * 4?\n";
    cout << "A) 20\nB) 14\nC) 24\nD) 18\n";
    cout << "Choice The Option : ";
    cin >> answer;
    cout << endl;
    if (toupper(answer) == 'B')
    {
        score++;
        cout << "Correct Ans";
    }
    else
    {
        cout << "\nIncorrect Ans";
        cout << "\nThe Correct Answer is B. 14";
    }
    cout << endl;

    cout << "\nQ.5 Which keyword is used to define a class in C++?\n";
    cout << "A) object\nB) struct\nC) class\nD) define\n";
    cout << "Choice The Option (A,B,C,D) : ";
    cin >> answer;
    cout << endl;
    if (toupper(answer) == 'C')
    {
        score++;
        cout << "Correct Ans";
    }
    else
    {
        cout << "\nIncorrect Ans";
        cout << "\nThe Correct Answer is C. class";
    }

    cout << endl;
    cout << "Q.6 What is the correct extension of C++ files?\n";
    cout << "A) .cp\nB) .cpp\nC) .c+\nD) .cpl\n";
    cout << "Choice The Option (A,B,C,D) : ";
    cin >> answer;
    cout << endl;
    if (toupper(answer) == 'B')
    {
        score++;
        cout << "Correct Ans";
    }
    else
    {
        cout << "\nIncorrect Ans";
        cout << "\nThe Correct Answer is B. .cpp";
    }
    cout << endl;
    cout << "Q.7 Who developed C++?\n";
    cout << "A) Dennis Ritchie\nB) James Gosling\nC) Bjarne Stroustrup\nD) Guido van Rossum\n";
    cout << "Choice The Option (A,B,C,D) : ";
    cin >> answer;
    cout << endl;
    if (toupper(answer) == 'C')
    {
        score++;
        cout << "Correct Ans";
    }
    else
    {
        cout << "\nIncorrect Ans";
        cout << "\nThe Correct Answer is C. Bjarne Stroustrup";
    }
    cout << endl;
    cout << "\nQ.8 Which symbol is used to access members of a class using object?\n";
    cout << "A) . (dot)\nB) -> (arrow)\nC) :: (scope resolution)\nD) #\n";
    cout << "Choice The Option (A,B,C,D) : ";
    cin >> answer;
    cout << endl;
    if (toupper(answer) == 'A')
    {
        score++;
        cout << "Correct Ans";
    }
    else
    {
        cout << "\nIncorrect Ans";
        cout << "\nThe Correct Answer is A. . (dot)";
    }
    cout << endl;
    cout << "\nQ.9 What is the size of int in most compilers?\n";
    cout << "A) 2 bytes\nB) 4 bytes\nC) 8 bytes\nD) Depends on compiler\n";
    cout << "Choice The Option (A,B,C,D) : ";
    cin >> answer;
    if (toupper(answer) == 'B')
    {
        score++;
        cout << "Correct Ans";
    }
    else
    {
        cout << "\nIncorrect Ans";
        cout << "\nThe Correct Answer is B. 4 bytes";
    }

    cout << endl;
    cout << "\nQ.10 Which of the following is not a loop?\n";
    cout << "A) for\nB) while\nC) do-while\nD) repeat-until\n";
    cout << "Choice The Option (A,B,C,D) : ";
    cin >> answer;
    if (toupper(answer) == 'D')
    {
        score++;
        cout << "Correct Ans";
    }
    else
    {
        cout << "\nIncorrect Ans";
        cout << "\nThe Correct Answer is D. repeat-until";
    }
    cout << endl;
    cout << endl;
    cout << "============ Quiz Completed ================\n";

    cout << "\nYour Total Score is: " << score << endl;

    if (score == 10)
    {
        cout << "Excellent \n";
    }
    else if (score < 10 && score >= 5)
    {
        cout << "Good Job! \n";
    }
    else if (score < 5 && score >= 0)
    {
        cout << "Not Bad Keep Learning Better Luck Next Time!!\n";
    }

    return 0;
}