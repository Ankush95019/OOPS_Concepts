#include <iostream>
using namespace std;


class Car
{
private:
  int car_id;
  std::string car_type;
public:
  
  void setMembers(int carId,std::string carType) {
    car_id = carId;
    car_type = carType;
  }

  void display(){
    std::cout << car_id << ", " << car_type;
  }




};
class Automatic : public Car
{
public:

  // void setM(int carId2,std::string carType2){
  //   setMembers(carId2,carType2);
  // }

  // void display(){
    
  // }
  
  
};

int main(){

  // Car c1;
  // c1.setMembers(111,"Automatic");
  // c1.display();

  Automatic a1;
  // a1.setM(22,"Auto");
  a1.setMembers(33,"manual");
  a1.display();
  


  
  return 0;
}