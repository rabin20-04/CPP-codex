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
    Student(string taken_name, int taken_roll_no, string taken_address,
            string taken_section) : name(taken_name), roll_no(taken_roll_no),
                                    address(taken_address), section(taken_section){};

    // method -2  Student(string name, int roll_no, string address, string section)

    // {
    //     // this->name = name;
    //     // this->roll_no = roll_no;
    //     // this->address = address;
    //     // this->section = section;
};

int main()
{

    Student std_2(" ", 0, " ", " "), std_3("Abdul", 92, "Argentina", "ZX");

    cout << "\n Enter your Name : ";
    cin >> std_2.name;
    cout << "Enter your Roll : ";
    cin >> std_2.roll_no;
    cout << "Enter your Section : ";
    cin >> std_2.section;
    cout << "Enter your Address : ";
    cin >> std_2.address;

    std_2.display_student_info();
    std_3.display_student_info();

    return 0;
}