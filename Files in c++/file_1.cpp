
// To get and display data of employees

#include <iostream>
#include <fstream>
using namespace std;
class Employee
{
private:
    string name;
    string address;
    int phonenumber;

public:
    void inputdata();
    void showdata();
    void writedata();
    void displaydata();
};
void Employee::inputdata()
{
    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your address: " << endl;
    cin >> address;
    cout << "Enter your phone number: " << endl;
    cin >> phonenumber;
}
void Employee ::writedata()
{
    ofstream outfile("employees.txt", ios::app);
    if (outfile.is_open())
    {

        // mistake outfile << name << address << phonenumber;
        //  either outfile << name << "" << address << "" << phonenumber;
        // or
        outfile << name;
        outfile << address;
        outfile << phonenumber;
    }
    else
    {
        cout << "Can't open file ";
    }
    outfile.close();
}
void Employee ::displaydata()
{
    ifstream infile("employees.txt");
    if (infile.is_open())
    {
        while (infile >> name >> address >> phonenumber)
        {
            showdata();
        }
    }
    else
    {
        cout << "Can't open file! ";
    }
    infile.close();
}
void Employee::showdata()
{
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phonenumber << endl;
}

int main()
{
    Employee emp[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the details of employee! : " << endl;
        emp[i].inputdata();
        emp[i].writedata();
    }

    cout << "Displaying data : " << endl;
    emp[0].displaydata();

    return 0;
}
