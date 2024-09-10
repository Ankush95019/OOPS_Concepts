#include <iostream>
using namespace std;

// method overriding --> 


class Car
{
  public:
   virtual void gearChange() = 0;
  //  void gearChange(){
  //     cout << "car class gearChange()\n";
  //   }
};
class Automatic : public Car
{
  public:
    void gearChange(){
      cout << "Automatic class gearChange()\n";
    }
};
class Manual : public Car
{
  public:
    void gearChange(){
      cout << "Manual class gearChange()\n";
    }
};

int main(){
  
  Car* ptr = new Automatic; // not possible to access overidden function due to without virtual keyword
  ptr->gearChange();

  // Automatic a;
  // a.gearChange();
  // Manual m;
  // m.gearChange();

  
  return 0;
}