//  here to define fn outside the class iam writing 
//returntype classname :: fndefine
#include <iostream>
using namespace std;

class std_info {
private:
  int num;
  string name;

public:
  // void getname();
  void getname();
  void display();
};
int main() {
  std_info st1;
  st1.getname();
  st1.display();

  return 0;
}
void std_info::getname() {
  cout << "Enter your name  " << endl;
  cin >> name;
  cout << "Enter your age  " << endl;
  cin >> num;
}
void std_info::display() {
  cout << "Welcome" << name << endl;
  cout << "your age is" << num << endl;
}