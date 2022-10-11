// Write a program to define a class employee having data members as emp_id,
// emp_name and salary. Accepet and display data for employees having salary
// greater than 25000.
#include <iostream>
using namespace std;

class employee {
 public:
  int emp_id;
  string emp_name;
  int salary;
  void accept() {
    cout << "Enter the employee id: ";
    cin >> emp_id;
    cout << "Enter the employee name: ";
    cin >> emp_name;
    cout << "Enter the salary of the employee: ";
    cin >> salary;
  };
  void display() {
    cout << "The employee id is: " << emp_id << endl;
    cout << "The employee name is: " << emp_name << endl;
    cout << "The salary of the employee is: " << salary << endl;
  };
};

int main() {
  employee e[3];
  for (int i = 0; i < 3; i++) {
    e[i].accept();
  }
  for (int i = 0; i < 3; i++) {
    if (e[i].salary > 25000) {
      e[i].display();
    }
  }
  
  return 0;
}