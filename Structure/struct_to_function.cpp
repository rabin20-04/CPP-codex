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

void display_info(information s2);                // Display by copying
void display_info_with_original(information &s3); // Plays with the original values

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
    cout << &s1.employee_name << endl;
    display_info(s1);
    display_info_with_original(s1);
    return 0;
}
// here the new function is making copy of the struct

void display_info(information s2)
{
    cout << endl
         << "\n Copy\n Employee detail" << "\n Employee name : " << s2.employee_name << "\n Id : "
         << s2.id << "\n Position : " << s2.position << "\n Salary : " << s2.salary << endl;
    cout << &s2.employee_name;
}

// woking with the original struct rather than copying

void display_info_with_original(information &s3)
{
    cout << endl
         << "\n Original\n Employee detail" << "\n Employee name : " << s3.employee_name << "\n Id : "
         << s3.id << "\n Position : " << s3.position << "\n Salary : " << s3.salary << endl;
    cout << &s3.employee_name << endl;
}