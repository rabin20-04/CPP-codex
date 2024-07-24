#include <iostream>
using namespace std;

class apple
{

private:
    int a;
    string name;

private:
    void get_data()
    {
        cout << "Enter value: " << endl;
        cin >> a;
    }
};
// c1=a1+b1
// reference is a1 and under we are passing b1 as argument and
// storing in c2

int main()
{

    apple a1, b1, c1;
    // c1 = a1 + b1;

    return 0;
}