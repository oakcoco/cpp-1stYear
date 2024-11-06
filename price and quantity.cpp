#include <iostream>
using namespace std;
int main()
{
    float price, quantity, finalprice, xd;
    cout << "Enter Price: ";
    cin >> price;
    cout << "Enter Quantity: ";
    cin >> quantity;

    finalprice = price * quantity;

    if (finalprice >= 2000)
    {
        xd = finalprice - (finalprice * 0.15);
        cout << "Final Price:" << xd;
    }
    else if ((quantity >= 10) && finalprice <= 2000)
    {
        xd = finalprice - (finalprice * 0.05);
        cout << "Final Price:" << xd;
    }
    else
    {
        cout << "Final Price:" << finalprice;
    }
}
