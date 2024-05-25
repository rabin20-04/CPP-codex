#include <iostream>
using namespace std;
void search(int, int[]);
int main()
{
    int num, size, caret[] = {10, 50, 80, 30, 20};

    size = sizeof(caret) / sizeof(int);
    search(size, caret);
    return 0;
}
void search(int size, int caret[])
{
    char input;
    int num;

    do
    {
        bool found = false; // inside do() because it resets bool after searching a number
        // so the new number is false initially
        cout << " Enter the number you are looking for : \n";
        cin >> num;
        for (int i = 0; i < size; i++)
        {
            if (num == caret[i])
            {
                cout << "The number \"" << num << "\" : It is in the box!\n";
                cout << "**************************************************\n\n";
                found = true;
                break;
            }
        }
        if (found != true)
        {
            cout << "The number you are looking is for \"" << num << "\" is missing in the box.\n";
            cout << "************************************************************************************\n\n";
        }
        cout << "Do you want to search more? : y to search or any key to exit! \n ";
        cin >> input;
    } while (input == 'y' || input == 'Y');
}
