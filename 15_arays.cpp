
#include <iostream>
using namespace std;
void student();
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    // Methods to print entire array

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
    // this will print unnecessary message as the size size of array will be equal to 20 in this case
    //     the array we made was a[] = {1, 2, 3, 4, 5}
    for (int i = 0; i < sizeof(a); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    // next method

    string ch[] = {"apple", "app", "ball"};
    for (string cha : ch)
    {
        cout << cha << endl;
    }
    cout
        << "Enter your name" << endl;
    return 0;
}
