#include <iostream>

using namespace std;
struct
    information
{
    string employee_name;
    int id;
    string position;
    float salary;
} s1;

void display_info(information s2);
int main()
{

    cout << "Enter employee name   " << endl;
    cin >> s1.employee_name;
    cout << "Enter employee id  " << endl;
    cin >> s1.id;
    cout << "Enter employee position   " << endl;
    cin >> s1.position;
    cout << "Enter employee salary   " << endl;
    cin >> s1.salary;
    display_info(s1);
    return 0;
}
void display_info(information s2)
{
    cout << "\n Employee detail" << "\n Employee name : " << s2.employee_name << "\n Id : "
         << s2.id << "\n Position : " << s2.position << "\n Salary : " << s2.salary << endl;
}