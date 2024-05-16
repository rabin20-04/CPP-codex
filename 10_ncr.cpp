#include <iostream>
using namespace std;
int fact(int);
int main()
{

    cout << " Enter a number first n then r for (ncr) " << endl;
    int num, r, factorial;
    cin >> num >> r;
    factorial = fact(num) / (fact(num - r) * fact(r));
    cout << "The factorial of " << num << " is " << factorial << endl;
    return 0;
}
int fact(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return num * fact(num - 1);
}