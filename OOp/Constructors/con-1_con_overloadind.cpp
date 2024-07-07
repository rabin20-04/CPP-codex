#include <iostream>
using namespace std;

class Values
{
private:
    int num;
    string name;

public:
    Values(int n = 40, string name = "Hanuman") : num(n), name(name) {}
    // Values()
    // {
    //     num = 45;
    //     name="John";
    //     cout << "No argument: " << num << endl;
    // }

    // Values(int cpy) : num(cpy)
    // {
    //     cout << "One  argument: " << num << endl;
    // }
    Values(string get_name, int n) : name(get_name), num(n)
    {
        cout << "Two arguments : \n Hello " << name << " \nDay " << num << endl;
    }
    void display()
    {

        cout << "Default : \n Hello " << name << " \nDay " << num << endl;
    }
};

int main()
{

    Values v1, v2(80,""), v3(" User", 20), v5 = v3, v6(v3); // v1 -- is defalt constructor and remaining are parameterized constructors
    v1.display();
    // mistake dont write like
    //      Values v1()         -------- it will cause conflict as it could be function declaration  with return type Values
    //   ----without parathesis

    return 0;
}