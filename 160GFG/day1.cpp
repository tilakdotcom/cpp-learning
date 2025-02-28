#include<iostream>
#include<vector>
using namespace std;

int getSecondLargest(vector<int> &arr) {
  int mx1 = -1, mx2 =-1;
  for(int i =0; i < arr.size(); i++){
      mx1 =  max(mx1 , arr[i]);
  }
  for(int i =0; i < arr.size(); i++){
      if(arr[i]!= mx1)
      mx2 =  max(mx2 , arr[i]);
  }
  if(mx2 > -1){
      return mx2;
  }
  return -1;
 }
int main(){
  vector<int> arr = {4, 5, 5, 5, 5};
  cout << "Second largest element: " << getSecondLargest(arr) << endl;
  return 0;

}
