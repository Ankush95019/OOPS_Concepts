#include <iostream>
using namespace std;

class A
{
private:
  int a;
  protected:
  int b;
  public:
  int c;
public:
  A(/* args */){}
  A(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
  }
  ~A(){}
};
class B : public A
{
private:
  /* data */

public:
  B(){}
  B(int a2,int b2,int c2){ 
    a = a2;
    b = b2;
    c = c2;
  }

  ~B(){}

};
class C : public B
{
private:
  /* data */

public:
  C(){}
  C(int a2,int b2,int c2){ 
    a = a2;
    b = b2;
    c = c2;
  }

  ~C(){}

};




int main(){
  
  A obj1(4,5,6);
  obj1.a;
  obj1.b;
  obj1.c;

  B obj2(9,8,7);
  obj2.a;
  obj2.b;
  obj2.c;

  C obj3(9,8,7);
  obj3.a;
  obj3.b;
  obj3.c;
  


  return 0;
}