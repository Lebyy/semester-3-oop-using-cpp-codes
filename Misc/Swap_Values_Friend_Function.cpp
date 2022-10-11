// Write a program to swap two values using friend function.
#include <iostream>
using namespace std;

class class2;

class class1 {
 public:
  int value1;
  void indata(int a) { value1 = a; }
  void display() { cout << value1 << endl; }
  friend void exchange(class1 &, class2 &);
};

class class2 {
 public:
  int value2;
  void indata(int a) { value2 = a; }
  void display(void) { cout << value2 << endl; }
  friend void exchange(class1 &, class2 &);
};

void exchange(class1 &x, class2 &y) {
  int temp = x.value1;
  x.value1 = y.value2;
  y.value2 = temp;
}

int main() {
  class1 A;
  class2 B;
  A.indata(34);
  B.indata(67);
  cout << "A = " << A.value1 << endl;
  cout << "B = " << B.value2 << endl;
  exchange(A, B);
  cout << "A = " << A.value1 << endl;
  cout << "B = " << B.value2 << endl;
  return 0;
}