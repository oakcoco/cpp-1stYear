#include <iostream>
using namespace std;
void drawHangman(int countAttemps);
int main()
{
    char y;
    do
    {
        int countAttemps = 3, score = 0;
        string answer;

        char a;

        // Introduction
        cout
            << "Hangman Game!" << endl
            << "Answer the questions correctly to avoid losing."
            << endl
            << "Questions:" << endl;

        // Questions:

        // Question 1
        cout
            << endl
            << "1.Is an object-oriented programming language which gives a clear structure to programs and allows code to be reused, lowering development costs."
            << endl
            << endl
            << "A. C++ Language" << " B. C# Language" << " C. C Language"
            << endl
            << "Answer: ";
        cin >> a;
        if (a == 'a')
        {
            score = score + 5;
            cout << "Score: " << score;
        }
        else
        {
            --countAttemps;
            if (countAttemps == 0)
            {
                cout << "-------------------------------------------------------------------------------------------------------------"
                     << endl;
                drawHangman(countAttemps);
                cout
                    << "You Lose.";
                return 0;
            }
            drawHangman(countAttemps);
            cout << "You have only " << countAttemps << " attempt(s) left."
                 << endl;
        }
        // Question 2
        cout << endl
             << "-------------------------------------------------------------------------------------------------------------"
             << endl
             << "2.Is a header file library that lets us work with input and output objects."
             << endl
             << endl
             << "A. <string>" << " B. <iostream>" << " C. <std.io>"
             << endl
             << "Answer:";
        cin >> a;
        if (a == 'b')
        {
            score = score + 5;
            cout << "Score: " << score;
        }
        else
        {
            --countAttemps;
            if (countAttemps == 0)
            {
                cout << "-------------------------------------------------------------------------------------------------------------"
                     << endl;
                drawHangman(countAttemps);
                cout
                    << "You Lose.";
                return 0;
            }
            drawHangman(countAttemps);
            cout << "You have only " << countAttemps << " attempt(s) left."
                 << endl;
        }
        // Question 3
        cout
            << endl
            << "-------------------------------------------------------------------------------------------------------------"
            << endl
            << "3.The _____ directive inserts a copy of the header file directly into the . cpp file prior to compilation."
            << endl
            << endl
            << "A. #void" << " B. #fyp" << " C. #include"
            << endl
            << "Answer:";
        cin >> a;
        if (a == 'c')
        {
            score = score + 5;
            cout << "Score: " << score;
        }
        else
        {
            --countAttemps;
            if (countAttemps == 0)
            {
                cout << "-------------------------------------------------------------------------------------------------------------"
                     << endl;
                drawHangman(countAttemps);
                cout
                    << "You Lose.";
                return 0;
            }
            drawHangman(countAttemps);
            cout << "You have only " << countAttemps << " attempt(s) left."
                 << endl;
        }
        // Question 4
        cout
            << endl
            << "-------------------------------------------------------------------------------------------------------------"
            << endl
            << "4.Means that we can use names for objects and variables from the standard library."
            << endl
            << endl
            << "A. using namespace std" << " B. using object std" << " C. using variable std"
            << endl
            << "Answer:";
        cin >> a;
        if (a == 'a')
        {
            score = score + 5;
            cout << "Score: " << score;
        }
        else
        {
            --countAttemps;
            if (countAttemps == 0)
            {
                cout << "-------------------------------------------------------------------------------------------------------------"
                     << endl;
                drawHangman(countAttemps);
                cout
                    << "You Lose.";
                return 0;
            }
            drawHangman(countAttemps);
            cout << "You have only " << countAttemps << " attempt(s) left."
                 << endl;
        }
        // Question 5
        cout
            << endl
            << "-------------------------------------------------------------------------------------------------------------"
            << endl
            << "5.This is called a function. Any code inside its curly brackets {} will be executed."
            << endl
            << endl
            << "A. int main()" << " B. int void()" << " C. int bool()"
            << endl
            << "Answer:";
        cin >> a;
        if (a == 'a')
        {
            score = score + 5;
            cout << "Score: " << score;
        }
        else
        {
            --countAttemps;
            if (countAttemps == 0)
            {
                cout << "-------------------------------------------------------------------------------------------------------------"
                     << endl;
                drawHangman(countAttemps);
                cout
                    << "You Lose.";
                return 0;
            }
            drawHangman(countAttemps);
            cout << "You have only " << countAttemps << " attempt(s) left."
                 << endl;
        }

        cout << endl
             << "-------------------------------------------------------------------------------------------------------------"
             << endl
             << "We're halfway there!"
             << endl
             << "Final Phase!"
             << endl
             << "You have only 1 attempt to complete this challange. Goodluck"
             << endl
             << "Questions:"
             << endl;
        // Question 1.1
        cout << "-------------------------------------------------------------------------------------------------------------"
             << endl
             << "1. What relational operator is this  ''<''? "
             << endl
             << endl
             << "A.Less Than" << " B. Greater Than" << " C. Equal"
             << endl
             << "Answer:";
        countAttemps = 1;
        cin >> a;
        if (a == 'a')
        {
            score = score + 15;
            cout << "Score: " << score
                 << endl;
        }
        else
        {
            --countAttemps;
            if (countAttemps == 0)
            {
                cout << "-------------------------------------------------------------------------------------------------------------"
                     << endl;
                drawHangman(countAttemps);
                cout
                    << "You Lose.";
                return 0;
            }
        }
        // Question 1.2
        cout << "-------------------------------------------------------------------------------------------------------------"
             << endl
             << "2. What relational operator is this  ''>''? "
             << endl
             << endl
             << "A.Less Than" << " B. Greater Than" << " C. Equal"
             << endl
             << "Answer:";
        cin >> a;
        if (a == 'b')
        {
            score = score + 15;
            cout << "Score: " << score
                 << endl;
        }
        else
        {
            --countAttemps;
            if (countAttemps == 0)
            {
                cout << "-------------------------------------------------------------------------------------------------------------"
                     << endl;
                drawHangman(countAttemps);
                cout
                    << "You Lose.";
                return 0;
            }
        }
        // Question 1.3
        cout << "-------------------------------------------------------------------------------------------------------------"
             << endl
             << "3. What relational operator is this  ''=''? "
             << endl
             << endl
             << "A.Less Than" << " B. Greater Than" << " C. Equal"
             << endl
             << "Answer:";
        cin >> a;
        if (a == 'c')
        {
            score = score + 15;
            cout << "Score: " << score
                 << endl;
        }
        else
        {
            --countAttemps;
            if (countAttemps == 0)
            {
                cout << "-------------------------------------------------------------------------------------------------------------"
                     << endl;
                drawHangman(countAttemps);
                cout
                    << "You Lose.";
                return 0;
            }
        }
        // Question 1.4
        cout << "-------------------------------------------------------------------------------------------------------------"
             << endl
             << "4. Who developed  C++? "
             << endl
             << endl
             << "A.Bjarne Stroustrup" << " B. Dennis Ritchie" << " C. Anders Hejlsberg"
             << endl
             << "Answer:";
        cin >> a;
        if (a == 'b')
        {
            score = score + 15;
            cout << "Score: " << score
                 << endl;
        }
        else
        {
            --countAttemps;
            if (countAttemps == 0)
            {
                cout << "-------------------------------------------------------------------------------------------------------------"
                     << endl;
                drawHangman(countAttemps);
                cout
                    << "You Lose.";
                return 0;
            }
        }
        // Question 1.5
        cout << "-------------------------------------------------------------------------------------------------------------"
             << endl
             << "5. An artificial language used to write instructions that can be translated into machine language and then executed by a computer.? "
             << endl
             << endl
             << "A.Programming Language" << " B. Computer Language" << " C. Numerical Language"
             << endl
             << "Answer:";
        cin >> a;
        if (a == 'a')
        {
            score = score + 15;
            cout << "Score: " << score
                 << endl;
        }
        else
        {
            --countAttemps;
            if (countAttemps == 0)
            {
                cout << "-------------------------------------------------------------------------------------------------------------"
                     << endl;
                drawHangman(countAttemps);
                cout
                    << "You Lose.";
                return 0;
            }
        }
        cout << "-------------------------------------------------------------------------------------------------------------"
             << endl
             << "Congratulation for completing the quiz game!"
             << endl
             << "Your Score: " << score << "/100"
             << endl
             << endl
             << "Would you like to try it again? y/n: ";
        cin >> y;

    } while (y == 'y');
    cout
        << "Thank you for playing the game. Feedbacks are Appreciated.";
}
void drawHangman(int countAttemps)
{
    if (countAttemps == 3)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (countAttemps == 2)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |     |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (countAttemps == 1)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |    /|\\" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
    else if (countAttemps == 0)
    {
        cout << "   _____" << endl;
        cout << "  |     |" << endl;
        cout << "  |     O" << endl;
        cout << "  |    /|\\" << endl;
        cout << "  |    / \\" << endl;
        cout << "  |" << endl;
        cout << "  |" << endl;
    }
}
