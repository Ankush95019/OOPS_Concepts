#include<iostream>


class Car{
    public:
    virtual void gearchange()=0;
    // {
    //     std::cout << "car gear()" << "\n";
    // }
};

class Manual : public Car{
    public:
    void gearchange(){
        std::cout << "Manual gear()" << "\n";
    }
};

class Automatic : public Car{
    public:
    void gearchange(){
        std::cout << "Automatic gear()" << "\n";
    }
};


int main(){

//    Car obj;
//    obj.gearchange();
   Manual obj1;
   obj1.gearchange();
   Automatic obj2;
   obj2.gearchange();


    return 0;
}