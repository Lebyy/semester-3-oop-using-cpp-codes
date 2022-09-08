#include <iostream>
using namespace std;

class example {
  static int count;

 public:
  void setdata() { count++; }
  void putdata() { cout << "\nCount = " << count; }
};

int example::count;

int main() {
  example e1, e2, e3;
  e1.setdata(); 
  e2.setdata(); 
  e3.setdata(); 

  e1.putdata(); 
  e2.putdata(); 
  e3.putdata(); 

  e3.setdata(); 

  e3.putdata();  

  return 0;
}