#include <iostream>
using namespace std;

// void fact(int n) {
//     int ans {1};
//     for(int i = 1;i <= n;i++) {
//         ans = ans * i;
//     }
//     std::cout << ans;
// }

void fibo(int n){
    int n1= 0, n2 = 1, n3 {0};
    for(int i = 1;i <= n;i++) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        std::cout << n3 << "\n";
    }
}


int main(){
    
    fibo(5);



    return 0;
}   