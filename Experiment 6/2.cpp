#include <iostream>
using namespace std;

class staff {
  char name[20];
  float basic_salary, DA, HRA, GS;

 public:
  void accept();
  void calculate();
  void display();
};

void staff::accept() {
  cout << "\nEnter the data for staff: ";
  cout << "\nName: ";
  cin >> name;
  cout << "\nBasic salary: ";
  cin >> basic_salary;
}

void staff::calculate() {
  DA = (0.745 * basic_salary);
  HRA = (0.30 * basic_salary);
  GS = basic_salary + DA + HRA;
}

void staff::display() {
  cout << "\nStaff data is: ";
  cout << "\nName = " << name;
  cout << "\nBasic salary = " << basic_salary;
  cout << "\nDA = " << DA;
  cout << "\nHRA = " << HRA;
  cout << "\nGross Salary = " << GS;
}

int main() {
  staff s;

  s.accept();
  cout << endl;

  s.calculate();
  cout << endl;

  s.display();
  cout << endl;

  return 0;
}