#include <iostream>
using namespace std;

class B;

class A
{
private:
    char passA[20];

public:
    void getdata()
    {
        cout << "\n Enter password of a: ";
        cin >> passA;
    }
    void showdata(B);
    friend class B;
};

class B
{
private:
    char passB[20];

public:
    void getdata()
    {
        cout << "\n Enter password of b: ";
        cin >> passB;
    }
    void showdata(A a)
    {
        cout << "\n A's password is: " << a.passA << endl;
    }
    friend class A;
};
void A::showdata(B b)
{
    cout << "\n-------------------------------------" << endl;
    cout << " B's password: " << b.passB << endl;
}

int main()
{

    A a;
    B b;
    a.getdata();
    b.getdata();
    a.showdata(b);
    b.showdata(a);

    return 0;
}