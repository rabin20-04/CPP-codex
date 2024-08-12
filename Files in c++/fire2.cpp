#include <iostream>
#include <fstream>
using namespace std;
class employee
{

private:
    int num;
    string name;

public:
    void getdatass();
    void displayfiledatass();
    void writedatass();
    void showdatass();
};

void employee::getdatass()
{
    cout << "NAme:" << endl;
    cin >> name;
}
void employee::showdatass()
{
    cout << name << endl;
}
void employee::writedatass()
{
    ofstream outfile("writingfile.txt", ios::app);
    if (outfile.is_open())
    {
        outfile << name ;
    }
    else
    {
        cout << "cant open write";
    }
    outfile.close();
}
void employee::displayfiledatass()
{
    ifstream infile("writingfile.txt");
    if (infile.is_open())
    {
        while (infile >> name)
        {
            showdatass();
        }
    }
    else
    {
        cout << "cant form display";
    }
    infile.close();
}

int main()
{

    employee e1[3];
    for (int i = 0; i < 3; i++)
    {

        e1[i].getdatass();
        e1[i].writedatass();
    }

    cout << "displaying all total last : " << endl;

    e1[0].displayfiledatass();

    return 0;
}