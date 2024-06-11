#include <iostream>
using namespace std;

// objects = collection of attributes and methods
// attributes means characteristics

// eg book ,phone,copy, pen, table :
// think phone as object and attributes as characteristics of phone
// methods as what can phone do

// method is a fn that belongs to a class

class Student
{
public:
    string name;
    int roll_no;
    string address;
    string section;

    void display_student_info()
    {
        cout << "\nStudent name : " << name << endl;
        cout << "Student roll_no : " << roll_no << endl;
        cout << "Student address : " << address << endl;
        cout << "Student section : " << section << endl;
    }
};

int main()
{
    Student std_1, std_2;
    std_1.name = "Steve";
    std_1.roll_no = 40;
    std_1.address = "Earth";
    std_1.section = "AB";

    std_1.display_student_info();

    cout << "\n Enter your Name : ";
    cin >> std_2.name;
    cout << "Enter your Roll : ";
    cin >> std_2.roll_no;
    cout << "Enter your Section : ";
    cin >> std_2.section;
    cout << "Enter your Address : ";
    cin >> std_2.address;

    std_2.display_student_info();

    return 0;
}