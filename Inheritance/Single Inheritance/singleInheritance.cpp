#include <iostream>
using namespace std;

// single inheritance

class A{
  public:
    void funcA() {
      cout << "class A funcA()\n";
    }
};
class B : public A{
  public: 
    void funcB() {
      cout << "class B funcB()";
    }
};


int main(){

  B b1; // creating object of class B
  b1.funcA(); // accessing method of base class using derived class object
  b1.funcB();


  
  return 0;
}