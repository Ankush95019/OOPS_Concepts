#include <iostream>
using namespace std;

class A
{
private:
  int x;
public:
  void set(int x1){
    x = x1;
  }
  void display(){
    cout << x;
  }
};

int main(){

  A a1;
  a1.set(4);
  a1.display();
  
  return 0;
}

