#include <iostream>
using namespace std;

struct
{
    string name;
    int roll;
    string address;
    bool enrolled;
} s1;
int main()
{
    s1.address = "New york ";
    cout << "Enter you name  " << endl;
    cin >> s1.name;
    cout << "Enter you roll no.  " << endl;
    cin >> s1.roll;

    string enrollmentStatus;
    cout << "Are you enrolled or not (yes/y or no/n): " << endl;
    cin >> enrollmentStatus;

    if (enrollmentStatus == "yes" || enrollmentStatus == "y" || enrollmentStatus == "Y")
    {
        s1.enrolled = true;
    }
    else if (enrollmentStatus == "no" || enrollmentStatus == "n" || enrollmentStatus == "N")
    {
        s1.enrolled = false;
    }
    else
    {
        cout << "Invalid input for enrollment status." << endl;
        return 1;
    }
    cout << "\nName :" << s1.name << "\n Address : "
         << s1.address << "\n Roll no. : " << s1.roll << "\n Your enrolled status "
         << (s1.enrolled ? "enrolled" : "Not enrolled") << endl;
    return 0;
}