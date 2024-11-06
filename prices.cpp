#include <iostream>
using namespace std;
int main()
{
    float price, x;

    cout << "Enter Price: ";
    cin >> price;

    if (price >= 1000)
    {
        x = price - (price * 0.25);
        cout << x;
    }
    else if (price >= 500 && price < 1000)
    {
        x = price - (price * 0.15);
        cout << x;
    }

    else if (price >= 100 && price < 500)
    {
        x = price - (price * 0.05);
        cout << x;
    }
    else
    {
        cout << price;
    }
}