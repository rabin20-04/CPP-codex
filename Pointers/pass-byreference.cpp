#include <iostream>
using namespace std;

void passbyreference(int &a, int &b);

void passbyvalue(int, int);

void inbuiltfunction(int, int);

int main()
{
    int a, b;
    cout << " Enter two numbers ";
    cin >> a >> b;

    passbyvalue(a, b);
    cout << "passbyvalue gives a = " << a << " and b = " << b << endl;

        inbuiltfunction(a, b);
    cout << "After inbuilt funcion in main function  a = " << a << " and b =" << b << endl;

    passbyreference(a, b);
    cout << " After passbyreference a =  " << a << " and  b = " << b << endl;

    return 0;
}
void passbyreference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void passbyvalue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void inbuiltfunction(int a, int b)
{
    swap(a, b);
    cout << "After inbuilt funcion in inbuilt function  a = " << a << " and b =" << b << endl;
}