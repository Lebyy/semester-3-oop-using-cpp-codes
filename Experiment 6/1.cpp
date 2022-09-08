#include<iostream>
using namespace std;

class Book {
  char book_name[20];
  char author[20];
  float price;
  public:
    void accept();
  void display(Book); 
};

void Book::accept() {
  cout << "\nEnter the book data: ";
  cout << "\nName: ";
  cin >> book_name;
  cout << "\nAuthor: ";
  cin >> author;
  cout << "\nPrice: ";
  cin >> price;
}

void Book::display(Book b2) {
  if (price > b2.price) {
    cout << "\nName: " << book_name;
    cout << "\nAuthor name: " << author;
    cout << "\nPrice: " << price;
  } else {
    cout << "\nName: " << b2.book_name;
    cout << "\nAuthor name: " << b2.author;
    cout << "\nPrice: " << b2.price;
  }
}

int main() {
  Book b1, b2;

  b1.accept();
  cout << endl;

  b2.accept();
  cout << endl;

  cout << "\nData for the book having maximum price is: " << endl;
  b1.display(b2);

  cout << endl;
  
  return 0;
}
