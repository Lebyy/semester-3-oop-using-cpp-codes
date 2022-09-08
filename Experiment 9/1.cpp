#include <iostream>
using namespace std;

class Number {
  float x, y;

 public:
  void accept();
  void addition();
  void subtraction();
  void multiplication();
  void division();
};

void Number::accept() {
  cout << "\nEnter x and y: ";
  cin >> x >> y;
};

inline void Number::addition() {
  float z;
  z = x + y;
  cout << "\nAddition = " << z;
};

inline void Number::subtraction() {
  float z;
  z = x - y;
  cout << "\nSubtraction = " << z;
};

inline void Number::multiplication() {
  float z;
  z = x * y;
  cout << "\nMultiplication = " << z;
};

inline void Number::division() {
  float z;
  z = x / y;
  cout << "\nDivision = " << z;
};

int main() {
  Number N;

  N.accept();
  cout << endl;

  N.addition();
  cout << endl;
  N.subtraction();
  cout << endl;
  N.multiplication();
  cout << endl;

  N.division();
  cout << endl;

  return 0;
}
