#include <iostream>
using namespace std;

// objects = collection of attributes and Methods
// attributes means characteristics

// eg book ,phone,copy, pen, table :
// think phone as object and attributes as characteristics of phone
// Methods as what can phone do

// Method is a fn that belongs to a class

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

    // Method 1
    //  Student(string taken_name, int taken_roll_no, string taken_address,
    //          string taken_section) : name(taken_name), roll_no(taken_roll_no),
    //                                  address(taken_address), section(taken_section){};

    // Method -2  Student(string name, int roll_no, string address, string section)

    // {
    //     // this->name = name;
    //     // this->roll_no = roll_no;
    //     // this->address = address;
    //     // this->section = section;

    // Method -3
    Student(string nam, int roll_number, string addressss, string yoursection)
    // if we use differet attribute than parameter name no need to use this->

    {
        name = nam;
        roll_no = roll_number;
        address = addressss;
        section = yoursection;
    };
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