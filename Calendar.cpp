/*
Write a program that will accept month, day, and year. Print the Date.*/

#include <iostream>
using namespace std;
int main()
{
    int month, day, year;
    cout << "Enter Month 1-12:";
    cin >> month;
    cout << "Enter Day 1-31:";
    cin >> day;
    cout << "Enter Year(yyyy):";
    cin >> year;

    // Febuary 28
    if (month == 2 && day <= 28)
    {
    }
    // Leap year & Leap day.
    else if ((month == 2) && (0 == year % 4) && (day <= 29))
    {
    }
    // Months with days up to 30 are 4,6,9,and 11.
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)
    {
    }
    // Months with days up to 31 are 1,3,5,7,and 12.
    else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 10 || month == 12) && (day <= 31))
    {
    }
    else
    {
        cout << "Invalid date.";
        return 0;
    }
    switch (month)
    {
    case 1:
        cout << "January";
        break;
    case 2:
        cout << "February";
        break;
    case 3:
        cout << "March ";
        break;
    case 4:
        cout << "April ";
        break;
    case 5:
        cout << "May ";
        break;
    case 6:
        cout << "June ";
        break;
    case 7:
        cout << "July ";
        break;
    case 8:
        cout << "August ";
        break;
    case 9:
        cout << "September ";
        break;
    case 10:
        cout << "October ";
        break;
    case 11:
        cout << "November ";
        break;
    case 12:
        cout << "December ";
        break;
    default:
        cout << "Invalid date.";
        return 0;
    }
    cout << " " << day << ", " << year;
}
