#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Guess a number between 1-6 " << endl;

    srand(time(NULL));
    while (true)
    {
        cin >> num;
        if (num < 1 || num > 6)
        {
            cout << "Enter between 1 and 6 " << endl;
            continue;
        }
        int digit = (rand() % 6) + 1; //+1 removes 0 and adds 6 to the range
        if (digit == num)
        {
            cout << "Perfect guess! You are genius " << endl;
            break;
        }
        else
            cout << "Ahh ! wrong guess :(" << "\n It was " << digit << "\nLet's try again" << endl;
    }
    return 0;
}