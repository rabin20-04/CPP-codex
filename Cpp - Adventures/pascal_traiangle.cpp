#include <iostream>
using namespace std;
int fact(int);
int main()
{

    /*
     1
     1 1
     1 2 1
     1 3 3 1
     1 4 6 4 1
    */

    int num;
    cout << " Enter the no. of rows" << endl;
    cin >> num;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}
int fact(int num)
{
    if (num == 0 || num == 1)
        return 1;
    else
        return (num * fact(num - 1));
}