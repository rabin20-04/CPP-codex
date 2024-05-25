#include <iostream>
using namespace std;
void search(int, string[]);
int main()
{
    int num, size;
    string caret[] = {"pizza", "burger", "pasta", "noodle", "chowmin"};

    size = sizeof(caret) / sizeof(string);
    search(size, caret);
    return 0;
}
void search(int size, string caret[])
{
    char input;
    string item;

    do
    {
        bool found = false; // inside do() because it resets bool after searching a number
        // so the new number is false initially
        cout << " Enter the Food you want to order : \n";
        cin>>item;
        getline(cin, item);
 
        for (int i = 0; i < size; i++)
        {
            if (item == caret[i])
            {
                cout << "We have  \"" << item << "\" in our menu!\n";
                cout << "**************************************************\n\n";
                found = true;
                break;
            }
        }
        if (found != true)
        {
            cout << "Sorry  \"" << item << "\" is not in our menu.\n";
            cout << "************************************************************************************\n\n";
        }
        cout << "Do you want to look for other foods? : y to search or any key to exit! \n ";
        cin >> input;
    } while (input == 'y' || input == 'Y');
}
