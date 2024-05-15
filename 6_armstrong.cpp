#include <iostream>
using namespace std;
int main()
{
    int n, d, c=0;
    cout << "Enter a number ";
    cin >> n;
    while (n != 0)
    {
        d = n % 10;
        c = c * 10 + d;
        n = n / 10;
    }
    cout << "Armstrong number is : " << c;
    return 0;
}