#include <iostream>
using namespace std;

class Vehicle{
  private:
    string car_brand;
  public:
    void setVehicle(string carBrand){
      car_brand = carBrand;
    }
    void displayVehicle(){
      cout << car_brand;
    }
};

class Car : public Vehicle {
  private:
    string car_name;
  public:
    void setCar(string carName){
      car_name = carName;
    }
    void displayCar(){
      cout << car_name;
    }
};


int main(){

  Car c1;
  c1.setVehicle("Maruti");
  c1.setCar(" DZire");
  c1.displayVehicle();
  c1.displayCar();


  
  return 0;
}