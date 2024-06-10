#include <iostream>
using namespace std;

//  enums = a user-defined data type that consists
//                  of paired named-integer constants.
//                 GREAT if you have a set of potential options

enum apple {burger,pizza=9,coffee,momo};
//enum apple {burger,pizza=9,coffee,momo};  burger =1 , coffee = 10 , momo = 11

   //                  Ascii  value 
//enum apple {burger='a',pizza,coffee,momo};  burger 96 then 97 then 98  


int main()
{
    int str;
    string choice;
    cout << "Welcome to the LuXuRy Hotel \n What would you like to order ? " << endl;

    do
    {
        cout << "\nAdd :\n";
        cout << "1: Burger\n2: Pizza\n3: Coffee\n4: Momo\n";
        cout << "I want to order  : ";
        cin >> str;
        if (str < 5 && str > 0)

        {
            switch (str - 1)
            {

            case burger:
                cout << "\n You order have placed \n You will receive Burger within 30 minutes" << endl;
                break;
            case pizza:
                cout << "\n You order have placed \n You will receive Pizza within 30 minutes" << endl;
                break;
            case coffee:
                cout << "\n You order have placed \n You will receive Coffee within 30 minutes" << endl;
                break;
            case momo:
                cout << "\n You order have placed \n You will receive Momo within 30 minutes" << endl;
                break;
            }
        }
        else
        {
            cout << "Enter a valid number mate! " << endl;
        }
        cout << "\nDo you want to order more \n Enter N to quit" << endl;
        cin >> choice;
        cout<<burger<< " "<<  pizza << " "<< coffee<<endl;
    } while (choice != "no" && choice != "n" && choice != "No" && choice != "N");

    return 0;
}