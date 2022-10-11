// Write a program to find the transpose of a 2x2 matrix.
#include <iostream>
using namespace std;

int main() {
  int arr[2][2];
  cout << "Enter the elements of the matrix: ";
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> arr[i][j];
    }
  }
  cout << "The transpose of the matrix is: " << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
  return 0;
}