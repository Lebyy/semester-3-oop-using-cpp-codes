// Write a program to find the smallest and second smallest element in an array.
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int smallest, secondSmallest;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      smallest = arr[i];
    } else if (arr[i] < smallest) {
      secondSmallest = smallest;
      smallest = arr[i];
    } else if (i == 1) {
      secondSmallest = arr[i];
    } else if (arr[i] < secondSmallest) {
      secondSmallest = arr[i];
    }
  }
  cout << "The smallest element in the array is: " << smallest << endl;
  cout << "The second smallest element in the array is: " << secondSmallest
       << endl;
  return 0;
}