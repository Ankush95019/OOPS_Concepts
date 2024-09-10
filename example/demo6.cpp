#include<iostream>

using namespace std;

class Animal{
  int a;
  int b;

  public:
    void display(){
      cout << "Animal class function called" << "\n";
    }
    void setAB(int x,int y){
      a = x;
      this->b = y;
    }
    int getA(){
      return a;
    }
    int getB(){
      return b;
    }

};

class Horse : public Animal{
  public:
    void displayHorse(){
      cout << "Horse class function called" << "\n";
    }
    void sum(){
      cout << "The sum is:" << this->getA()+getB() << "\n";
    }

};

// class Dog: public Animal{
//    public:
//     void display(){
//       cout << "Dog class function called";
//     }

// };

int main(){
  Horse h1;
  h1.setAB(5,8);
  h1.display();
  h1.sum();





  return 0;
}
