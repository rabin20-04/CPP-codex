#include <iostream>
#include <vector>
#include <string>

using namespace std;
void display(vector<int> &a);
int main()
{
    vector<int> count;
    int count_number;

    cout << "How may element do want to add: ";
    int promptnum;
    cin >> promptnum;
    cout << "Enter " << promptnum << " elements to add in vector:  \n";

    for (int i = 0; i < promptnum; i++)
    {
        cout << "Element " << i + 1 << " : ";
        cin >> count_number;
        count.push_back(count_number);
    }
    display(count);

    return 0;
}

void display(vector<int> &a)
{
    cout << "\nThe elements you  entered are:\n ";
    for (int i = 0; i < a.size(); i++)
        cout << "Element " << i + 1 << " : " << a[i] << endl;
}
