#include <iostream>
using namespace std;

// method overloading --> multiple function has same name in a class

class A
{
private:
  int a;
  int b;
  int c;

public:
  void sum(int x, int y)
  {
    a = x;
    b = y;
  }
  void sum(int x, int y, int z)
  {
    a = x;
    b = y;
    c = z;
  }
  void display()
  {
    cout << a + b << endl;
    cout << a + b + c << endl;
  }
};

int main()
{
  A a1;
  a1.sum(2, 3);
  a1.sum(6, 4, 5);
  a1.display();

  return 0;
}