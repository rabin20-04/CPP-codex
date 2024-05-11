#include <iostream>
using namespace std;
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
    //to be reversed 
    cout <<"to be reversed "<< d << endl;
    while (d != 0)
    {
        b = d % 10;
        c = c * 10 + b;
        d = d / 10;
    }
    //the reversed one 
    cout << c << endl;

    return 0;
}