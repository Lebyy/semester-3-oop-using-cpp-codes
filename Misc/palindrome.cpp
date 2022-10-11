// Write a program to check whether a number is a palindrome or not.
#include <iostream>
using namespace std;

int main() {
  int n, reversedN = 0, remainder, originalN;
  cout << "Enter an integer: ";
  cin >> n;
  originalN = n;
  while (n != 0) {
    remainder = n % 10;
    reversedN = reversedN * 10 + remainder;
    n /= 10;
  }
  if (originalN == reversedN) {
    cout << "The number is a palindrome." << endl;
  } else {
    cout << "The number is not a palindrome." << endl;
  }
  return 0;
}