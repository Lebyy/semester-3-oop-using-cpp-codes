#include <iostream>
using namespace std;

class test {
  static int count;
  int object_no;

 public:
  void getobject() { object_no = ++count; }
  void showobject() { cout << "\nObject number = " << object_no; }
  static void showcount() { cout << "\nCount = " << count; }
};

int test::count;

int main() {
  test T1, T2, T3;

  T1.getobject();     
  T2.getobject();  

  test::showcount();
  T3.getobject(); 

  test::showcount();

  T1.showobject(); 
  T2.showobject(); 
  T3.showobject();
  
  return 0;
}