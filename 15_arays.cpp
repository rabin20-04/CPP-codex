#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    // two methods to print entire array
    for (int element : a)
    {
        cout << element << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // cout << " Enter " << a[1, 0] << endl;
    return 0;
}