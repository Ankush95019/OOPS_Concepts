#include <iostream>
using namespace std;

// hierarchical inheritance : single base class inherited by multiple derived classes


class A
{
  public:
    void funcA() {
      cout << "class A funcA()\n";
    }
  
};
class B : public A
{
  public:
    void funcB() {
      cout << "class B funcB()\n";
    }
  
};
class C : public A
{
  public:
    void funcC() {
      cout << "class C funcC()\n";
    }
  
};



int main(){

  C c1;
  c1.funcA();
  // c1.funcB(); error not inherited
  c1.funcC();


  
  return 0;
}