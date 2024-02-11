#include <iostream>
using namespace std;

// operator overloading

class A
{
private:
  int a, b;

public:
  void set(int x, int y)
  {
    a = x;
    b = y;
  }

  A operator+(A const &a1)
  {
    A res;
    res.a = a + a1.a;
    res.b = b + a1.b;
    return res;
  }

  friend std::ostream &operator<<(std::ostream &os, const A &rhs)
  {
    os << "a: " << rhs.a

       << " b: " << rhs.b;

    return os;
  }
};

int main()
{

  A a, b, c;
  a.set(10, 9);
  b.set(5, 9);
  c = a + b;
  cout << c;

  return 0;
}