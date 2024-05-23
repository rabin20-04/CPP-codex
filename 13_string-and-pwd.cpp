#include <iostream>
using namespace std;
int main()
{
    int l = 0;
    string name, passd;
    cout << "hello" << endl;
    cout << "Enter your name  " << endl;
    // cin >> name; // takes character before space  apple ball => apple
    getline(cin, name); // counts all character separated by space apple ball => apple ball
    // cout << name.length() << endl;
    cout << "\nHello " << name << " \n\nLet's create your password" << endl;
    cout << "Enter your password" << endl;
    while (l < 8 || l > 16)
    {
        getline(cin, passd);
        l = passd.length();

        if (passd.empty())
        {
            cout << "You didn't enterd the password :Enter a passord" << endl;
        }
        else if (l < 8)
        {
            cout << "You have Entered " << l << " characters " << " : You must enter at least 8 characters" << endl;
        }
        else if (l > 16)
        {
            cout << "You have Entered " << l << " characters " << " : Enter within 8 to 16 characters" << endl;
        }
        else
            cout << "Welcome " << name << endl;
    }
    return 0;
}