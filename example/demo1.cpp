#include <iostream>
using namespace std;


bool arm(int n){
    int cubedigit {0};
    int temp = n;
    while (n > 0)
    {
        int r = n % 10;
        cubedigit =  cubedigit + r*r*r;
        n /= 10;
    }
    if(temp == cubedigit)
        return true;
    return 0;
}



int main(){

    int n = 152;
    if(arm(n))
    {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }
    
    return 0;
}