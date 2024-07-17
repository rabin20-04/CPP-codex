#include <iostream>
using namespace std;

class Count
{
private:
    const int input_data;

public:
    Count() : input_data(5) {}
    Count(int a) : input_data(a) {}
    void display()
    {
        cout << input_data << endl;
    }
    int returndata()
    {
        return input_data;
    }
};

int main()
{
    Count c1(9), c2;
    int num;
    cout << "Enter a number for c3: ";
    cin >> num;
    Count c3(num);
    c1.display();
    c3.display();
    cout << "From returndata: " << c2.returndata() << endl;
    return 0;
}