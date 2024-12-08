#include <iostream>
#include <string>
using namespace std;
int main()
{
    do
    {
        int countAttemps = 5;
        string answer;
        char a;

        // Introduction
        cout << "Hangman Game!" << endl
             << "Every questions corresponds to a single letter in a code. Answer the code correctly to avoid losing."
             << endl
             << "Questions:" << endl;

        // Questions
        cout
            // Question 1
            << endl
            << "1.Is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs."
            << endl
            << endl
            << "A. C++ Language" << " B. C# Language" << " C. C Language"
            << endl
            << "-------------------------------------------------------------------------------------------------------------"
            << endl
            // Question 2
            << "2.Is a header file library that lets us work with input and output objects."
            << endl
            << endl
            << "A. <string>" << " B. <iostream>" << " C. <std.io>"
            << endl
            << "-------------------------------------------------------------------------------------------------------------"
            << endl
            // Question 3
            << "3.The _____ directive inserts a copy of the header file directly into the . cpp file prior to compilation."
            << endl
            << endl
            << "A. #void" << " B. #fyp" << " C. #include"
            << endl
            << "-------------------------------------------------------------------------------------------------------------"
            << endl
            // Question 4
            << "4.Means that we can use names for objects and variables from the standard library."
            << endl
            << endl
            << "A. using namespace std" << " B. using object std" << " C. using variable std"
            << endl
            << "-------------------------------------------------------------------------------------------------------------"
            << endl
            // Question 5
            << "4.This is called a function. Any code inside its curly brackets {} will be executed."
            << endl
            << endl
            << "A. int main()" << " B. int void()" << " C. int bool()"
            << endl
            << "-------------------------------------------------------------------------------------------------------------"
            << endl;
        // User Input
        cout << "You have " << countAttemps << " attempts to guess the correct combination of the answer." << endl
             << "Answer the question like this: 'aaaaa'" << endl
             << "Enter your Answer/Code:";
        cin >> answer;
        do
        {
            --countAttemps;
            if (answer == "abcaa")
            {
                cout << "You Win!" << endl
                     << "Thank you for Playing!. Feedbacks are appreciated. :)" << endl;
                return 0;
            }
            else if (countAttemps == 4)
            {
                cout << "   _____" << endl;
                cout << "  |     |" << endl;
                cout << "  |     O" << endl;
                cout << "  |" << endl;
                cout << "  |" << endl;
                cout << "  |" << endl;
                cout << "  |" << endl;
                cout << "You have now only "
                     << countAttemps << " Attemp(s)" << endl;
                cout << "Enter your Answer/Code:";
                cin >> answer;
            }
            else if (countAttemps == 3)
            {
                cout << "   _____" << endl;
                cout << "  |     |" << endl;
                cout << "  |     O" << endl;
                cout << "  |     |" << endl;
                cout << "  |" << endl;
                cout << "  |" << endl;
                cout << "  |" << endl;
                cout << "You have now only "
                     << countAttemps << " Attemp(s)" << endl;
                cout << "Enter your Answer/Code:";
                cin >> answer;
            }
            else if (countAttemps == 2)
            {
                cout << "   _____" << endl;
                cout << "  |     |" << endl;
                cout << "  |     O" << endl;
                cout << "  |    /|\\" << endl;
                cout << "  |" << endl;
                cout << "  |" << endl;
                cout << "  |" << endl;
                cout << "You have now only "
                     << countAttemps << " Attemp(s)" << endl;
                cout << "Enter your Answer/Code:";
                cin >> answer;
            }
            else if (countAttemps == 1)
            {
                cout << "   _____" << endl;
                cout << "  |     |" << endl;
                cout << "  |     O" << endl;
                cout << "  |    /|\\" << endl;
                cout << "  |    /" << endl;
                cout << "  |" << endl;
                cout << "  |" << endl;
                cout << "You have now only "
                     << countAttemps << " Attemp(s)" << endl;
                cout << "Enter your Answer/Code:";
                cin >> answer;
            }
        } while (countAttemps >= 0);
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |    /|\\" << endl;
        cout << "  |    / \\" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "You Lose. Would you like to try again? y/n: ";
        cin >> a;
        if (a == 'n')
        {
            return 0;
        }
        else if (a == 'y')
        {
        }
        else
        {
            return 0;
        }
    } while (true);
}
