#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int n1, n2, result1, result2;
    cout << " Enter two number  " << endl;
    cin >> n1 >> n2;
    result1 = fact(n1);
    result2 = fact(n2);
    cout << "the factorial of " << n1 << "is" << result1 << endl;
    cout << "the factorial of " << n2 << "is" << result2 << endl;
    return 0;
}
int fact(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return (num * fact(num - 1));
}