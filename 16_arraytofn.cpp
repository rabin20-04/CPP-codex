#include <iostream>
using namespace std;
int getsum(int a[], int); // int a[] not int a;
int main()
{
    int a[] = {20, 30, 50, 60}, total;
    cout << " Enter " << endl;
    int size = sizeof(a) / sizeof(int);
    total = getsum(a, size);
    cout << " Total is " << total << endl;
    return 0;
}
int getsum(int a[], int size)
{
    int result;
    for (int i = 0; i < size; i++)
    // cant use i<sizeof(a) / sizeof(int) because
    // when we pass array to function ,it decays to pointers
    {
        result += a[i];
    }
    return result;
}