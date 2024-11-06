#include <iostream>
using namespace std;
int main()
{
    float price, finalprice;
    char a;
    cout << "Enter Price:";
    cin >> price;
    cout << "Season Codes" << endl;
    cout << "'S' for Summer" << endl;
    cout << "'W' for Winter" << endl;
    cout << "'F' for Fall" << endl;
    cout << "'P' for Spring" << endl;
    cout << "Enter Season Code:";
    cin >> a;

    switch (a)
    {
    case 'S':
    case 's':
        if (price >= 700)
        {
            finalprice = price - (price * 0.25);
            cout << finalprice;
        }
        else
        {
            cout << price;
        }
        break;
    case 'W':
    case 'w':
        if (price >= 500)
        {
            finalprice = price - (price * 0.15);
            cout << finalprice;
        }
        else
        {
            cout << price;
        }
        break;
    case 'F':
    case 'f':
        if (price >= 300)
        {
            finalprice = price - (price * 0.1);
            cout << finalprice;
        }
        else
        {
            cout << price;
        }

        break;
    case 'P':
    case 'p':
        if (price >= 300)
        {
            finalprice = price - (price * 0.1);
            cout << finalprice;
        }
        else
        {
            cout << price;
        }
        break;

    default:
        cout << price;
        break;
    }
}