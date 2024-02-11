#include <iostream>
using namespace std;


// void odd(int n) {
//     if(n % 2 == 0) {
//         std::cout << n << " ";
//     }
// }



bool isPrime(int n) {
    int cnt = 0;
    // if(n == 0){
    //     std::cout << "0 is not prime";
    // }
    // else if(n == 1){
    //     std::cout << "1 is not prime";
    // }
    // else{
        for(int i = 1;i <= n;i++) {
            if(n%i == 0){
                cnt++;
            }
        }
    // }
    if(cnt == 2){
        return true;
    }
    else{
        return 0;
    }
}


int main(){

    for(int i = 0;i <= 50;i++){
        // odd(i);
        if(isPrime(i)){
            std::cout<< i  << "\n";
        }
    }
    
    return 0;
}