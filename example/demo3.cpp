#include <iostream>
using namespace std;

void magic(){
    int a{0};
    static int b = 15;
    a++;
    b++;
    std::cout << "a = " << a << " ";
    std::cout << "b = " << b << "\n ";
    
}


int main(){

    
    for(int i = 0;i < 5;i++){
        magic();
    }





    
    return 0;
}