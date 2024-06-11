#include <iostream>
using namespace std;
int main()
{
    int a, rem, count = 0;
    // cout << " Enter a number ";
    // cin >> a;
    while (cin >> a)
    {

        while (cin >> rem)
        {
            if (rem == a)
            {
                ++count;
            }
            else
            {
                cout << a << "occured" << count << "times";
                a = rem;
                count = 1;
            }
        }
        cout << a << "occurs" << count << "times";
    }

    return 0;
}