#include <iostream>
using namespace std;

class a
{
protected:
    int aa;
    int dd;

public:
    void geta(int num)
    {
        aa = (num);
    }
    void afun()
    {
        dd = 22;
    }
};

class bb : public a
{
public:
    void displaydata()
    {
        cout << "aa= " << aa << endl
             << "dd= " << dd << endl;
    }
};
int main()
{

    bb b1;
    b1.geta(96);
    b1.afun();
    b1.displaydata();

    return 0;
}