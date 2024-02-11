#include <iostream>
using namespace std;

// multilevel inheritance --> when derived class becomes the base class of new class

class A{
  public:
    void funcA(){
      cout << "class A funcA()\n";
    }
};
class B : public A{ // multilevel inheritance
  public:
    void funcB(){
      cout << "class B funcB()\n";
    }
};
class C : public B{ // multileve inheritance
  public:
    void funcC(){
      cout << "class C funcC()\n";
    }
};


int main(){

  C c1;
  c1.funcA();
  c1.funcB();
  c1.funcC();
  
  

  
  return 0;
}