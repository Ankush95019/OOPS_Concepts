
#include <iostream>
using namespace std;

// hybrid --> combination of two or more inheritance

class A
{
  public:
    void funcA(){
      cout << "class A funcA()\n";
    } 
};
class B : public A
{
  public:
    void funcB(){
      cout << "class B funcB()\n";
    } 
};
class C
{
  public:
    void funcC(){
      cout << "class C funcC()\n";
    } 
};
class D : public B, public C
{
  public:
    void funcD(){
      cout << "class D funcD()\n";
    } 
};




int main(){

  D d1;
  d1.funcA();
  d1.funcB();
  d1.funcC();
  d1.funcD();
  
  return 0;
}