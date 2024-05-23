
#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    // two methods to print entire array

    // 1

    for (int element : a)
    {
        cout << element << " ";
    }
    cout << endl;

    // 2

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // 3
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        cout << a[i] << " ";
    }
    // Ithis will print unnecessary message as the size size of array will be equal to 20 in this case
    //           a[] = {1, 2, 3, 4, 5}
    for (int i = 0; i < sizeof(a); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}