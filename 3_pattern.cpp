#include <iostream>
using namespace std;
void next();
void nextt();
int main()
{
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    next();
    cout << endl;
    nextt();

    return 0;

    // *
    // **
    // ***
    // ****
    // *****
}
void next()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    // 1
    // 12
    // 123
    // 1234
    // 12345
}
void nextt()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        { // Using 5 - i in the condition
            cout << j;
        }
        cout << endl;
    }
}