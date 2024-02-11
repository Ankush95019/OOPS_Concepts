#include <iostream>
using namespace std;

// virtual function

class A
{
  public:

  virtual void funcA() { // using virtual we can access the overridden method at run time
    cout << "funcA() of A\n";
  }
  
};
class B : public A
{
  public:

  void funcA() {
    cout << "funcB() of B\n";
  }
  
};

int main(){

  A *ptr = new B; // creates a pointer of base class and dynamic object of derived class
  ptr->funcA();

  delete ptr;



  // A a;
  // a.funcA();

  // B b;
  // b.funcA();

  

  return 0;
}