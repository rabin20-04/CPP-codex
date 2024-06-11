#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c = 1, n;
    cout << "enter the number of terms";
    cin >> n;
    cout << a << "\n"
         << b << "\n";
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;

        b = c;
        cout << c << "\n";
    }
    return 0;
}