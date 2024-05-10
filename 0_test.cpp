
#include <iostream>
using namespace std;
int main()
{
    int a = 1, d = -404;
    float c = 3.05;
    char ch = 'Z';

    // casting

    int e = ch;

    cout << e << endl;
    cout << c << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(d) << endl;

    return 0;
}