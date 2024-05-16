#include <iostream>
using namespace std;
void fibo(int, int, int);
int main()
{

    cout << " Enter the total no. of terms " << endl;
    int num, a = 0, b = 1;
    cin >> num;
    cout << a << endl
         << b << endl;
    fibo(a, b, num);
    return 0;
}
void fibo(int a, int b, int num)
{
    int i = 0, c = 1;
    while (i < num - 2)
    {

        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
        i++;
    }
}