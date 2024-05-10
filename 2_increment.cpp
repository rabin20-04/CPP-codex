#include <iostream>
using namespace std;
int main()
{
    int a = 1, d = 4;
    int e = a++ + d + a;

    // 1+4+2
    cout << e << endl;
    cout << a << endl;

    return 0;
}