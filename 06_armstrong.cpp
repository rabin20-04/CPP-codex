#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, d, c = 0, num;
    cout << "Enter a number " << endl;
    cin >> n;
    num = n;
    while (n > 0)
    {
        d = pow(n % 10, 3);
        c += d;
        n = n / 10;
    }
    if (c == num)
        cout << " is armstrong" << endl;
    else
        cout << " not armstrong" << endl;
    return 0;
}