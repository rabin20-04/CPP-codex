#include <iostream>
using namespace std;
int main()
{
    int a[][3] = {{9, 18, 27},
                  {6, 12, 24},
                  {4, 16, 20}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}