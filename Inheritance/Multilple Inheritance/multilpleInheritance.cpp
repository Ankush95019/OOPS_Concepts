#include <iostream>
using namespace std;

// multiple inheritance --> single child class inherits from multiple classes

class A{
  public:
    A(){
      cout << "A() is called\n";
    }
    void funcA(){
      cout << "class A funcA()\n";
    }
    ~A()
    {
      cout << "~A() is called\n";
    }
};

class B{
  public:
    B()
    {
      cout << "B() is called\n";
    }
    void funcB() {
      cout << "class B funcB()\n";
    }
    ~B()
    {
      cout << "~B() is called\n";
    }
};

class C : public A , public B{ // multiple inheritance
  public:
    C()
    {
      cout << "C() is called\n";
    }
    void funcC() {
      cout << "class C funcC()\n";
    }
    ~C()
    {
      cout << "~C() is called\n";
    }
};



int main(){

  C c1;
  c1.funcA();
  c1.funcB();
  c1.funcC();


  
  return 0;
}