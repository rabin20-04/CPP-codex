#include <iostream>
#include <cmath>
using namespace std;
void todecimal(long int);
int main()
{
    long int n, a, b, c = 0, d = 0;
    cout << "enter the number 'n' : ";
    cin >> n;
    while (n > 0)
    {
        a = n % 2;
        d = d * 10 + a;
        n = n / 2;
    }
    // to be reversed
    cout << "to be reversed " << d << endl;
    while (d != 0)
    {
        b = d % 10;
        c = c * 10 + b;
        d = d / 10;
    }
    // the reversed one
    cout << c << endl;
    todecimal(c);

    return 0;
}
void todecimal(long int a)
{
    long int  b=0, d=0, i = 0;
    cout << "enter binary number";
    // cin >> a;

    while (a > 0)
    {
        b = a % 10;
        d = d + b * pow(2, i);
        ++i;
        a = a / 10;
    }
    cout << d << endl;
}