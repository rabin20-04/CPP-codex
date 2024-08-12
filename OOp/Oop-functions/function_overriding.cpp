#include <iostream>
using namespace std;

class Base
{
public:
    virtual void printmessage()
    {
        cout << "This is the message from the Base class ";
    }
};
class derived : public Base
{
    void printmessage() override
    {
        cout << "Overriding from derived class";
    }
};

int main()
{

    Base *b1;
    derived d2;
    b1 = &d2;
    b1->printmessage();

    return 0;
}