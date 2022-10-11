// Write a program to define a class product having data members as product_id,
// pname and price. Accept and display data for 3 products using constructor
// overloading.
#include <iostream>
using namespace std;

class product {
 public:
  int product_id;
  string pname;
  int price;
  product() {
    cout << "Enter the product id: ";
    cin >> product_id;
    cout << "Enter the product name: ";
    cin >> pname;
    cout << "Enter the price of the product: ";
    cin >> price;
  };
  product(int product_id, string pname, int price) {
    this->product_id = product_id;
    this->pname = pname;
    this->price = price;
  };
  void display() {
    cout << "The product id is: " << product_id << endl;
    cout << "The product name is: " << pname << endl;
    cout << "The price of the product is: " << price << endl;
  };
};

int main() {
  product p1;
  p1.display();
  product p2(1, "Apple", 100);
  p2.display();
  product p3(2, "Orange", 200);
  p3.display();
  return 0;
}
