#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool isPresent(int num,int n)
{
  vector<int> v;
  for (int i = 1; i <= n; i++)
  {
    v.push_back(i);
    // cout << v[i] << " ";
  }
  for (int i = 0; i < v.size(); i++)
  {
    // cout << "num: " << num << "\n";
    cout << "v[i] " << v[i] << "\n";
    if (v[i] != num)
    {
      return 0;
    }
  }
  return 1;
}
int missingNumber(int n, vector<int> &arr)
{
  // code here
  
  int ans{0};
  int len = n -1;
  for (int i = 0; i < len; i++)
  {
    if(isPresent(arr[i],n)){

    }
    else{
      ans = arr[i];
    }
  }
  return ans;
}

int main(){

  int n = 4;
  vector<int> arr = {1,4,3};

  // missingNumber(n,arr);
  cout << " miss: " << missingNumber(n,arr);

  
  return 0;
}