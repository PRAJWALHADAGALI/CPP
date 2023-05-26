#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a > b && a > c)
    {
        if (b > c)
            cout << endl
                 << a << " is greater than " << b << " and " << b << " is greater than " << c;
        else
            cout << endl
                 << a << " is greater than " << c << " and " << c << " is greater than " << b;
    }
    else if (b > a && b > c)
    {
        if (a > c)
            cout << endl
                 << b << " is greater than " << a << " and " << a << " is greater than " << c;
        else
            cout << endl
                 << b << " is greater than " << c << " and " << c << " is greater than " << a;
    }
    else
    {
        if (a > b)
            cout << endl
                 << c << " is greater than " << a << " and " << a << " is greater than " << b;
        else
            cout << endl
                 << c << " is greater than " << b << " and " << b << " is greater than " << a;
    }
}