// Write a program to declare a class staff having data members as name, basic
// salary, DA, HRA. Calculate the gross salary of the staff. DA is 74.5% of
// basic salary and HRA is 30% of basic salary.
#include <iostream>
using namespace std;

class staff {
 public:
  string name;
  int basicSalary;
  float DA;
  float HRA;
  float grossSalary;
  void accept() {
    cout << "Enter the name of the staff: ";
    cin >> name;
    cout << "Enter the basic salary of the staff: ";
    cin >> basicSalary;
    DA = 0.745 * basicSalary;
    HRA = 0.3 * basicSalary;
    grossSalary = basicSalary + DA + HRA;
  };

  void display() {
    cout << "The name of the staff is: " << name << endl;
    cout << "The basic salary of the staff is: " << basicSalary << endl;
    cout << "The DA of the staff is: " << DA << endl;
    cout << "The HRA of the staff is: " << HRA << endl;
    cout << "The gross salary of the staff is: " << grossSalary << endl;
  };
};

int main() {
  staff s;
  s.accept();
  s.display();
  return 0;
}