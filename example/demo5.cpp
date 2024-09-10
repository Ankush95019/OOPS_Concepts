#include<iostream>

using namespace std;


class Sum{
  private:
    int x;
    int y;
    string name;
  
  public:
    void setValues(int a,int b){
      this->x = a;
      this->y = b;
    }
    void setName(string nm){
      this->name = nm;
    }

    int getSum(){
      int c = this->x + this->y;
      // cout << "The sum is: " << c << "\n";
      return c;
    }
    string getName(){
      return this->name;
    }


};

int main(){

  Sum s1;
  s1.setName("Ankush");
  s1.setValues(5,8);
  s1.getSum();
  cout << "The sum is: " << s1.getSum() << "\n";
  cout << "Name is: " << s1.getName() << "\n";


}