#include <iostream>
#include <vector>
using namespace std;



int main(){
  int n = 7;
  int arr[n] = {1,2,2,3,1,2,3};

  vector<int> occ;
  int ans{0};
  for (int i = 0; i < n; i++)
  {
    int el = occ[arr[i]]++;
    occ.emplace_back(el);
  }
  for (int i = 0; i < occ.size(); i++)
  {
    cout << occ[i] << " ,";
    // if (occ[i] % 2 != 0)
    // {
    //   ans = arr[i];
    // }
  }

  return 0;
}