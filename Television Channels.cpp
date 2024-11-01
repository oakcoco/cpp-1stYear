/*
Write a program that will accept channel. Print the corresponding TV station*/

#include <iostream>
using namespace std;
int main()
{
    int channel;
    cout << "Enter channel [1-5]: ";
    cin >> channel;
    switch (channel)
    {
    case 1:
        cout << "DepED-TV";
        break;
    case 2:
        cout << "ABS-CBN";
        break;
    case 3:
        cout << "DZBB-TV";
        break;
    case 4:
        cout << "GMA7";
        break;
    case 5:
        cout << "TV-5";
        break;
    default:
        cout << "Invalid";
    }
}
