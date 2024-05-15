#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "enter a number  " << endl;
    cin >> n;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count)
        cout << "not prime" << endl;
    else
        cout << "prime" << endl;

    return 0;
}