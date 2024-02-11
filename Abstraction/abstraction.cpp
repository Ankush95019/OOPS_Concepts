#include <iostream>
using namespace std;

class A
{
  private:
    int x;
    int y;
  public:
    void set(int x1,int y1){
      x = x1;
      y = y1;
    }
    void sum(){
      cout << x + y;
    }
};

int main(){

  A a1;
  a1.set(2,3);
  a1.sum();

  return 0;
}