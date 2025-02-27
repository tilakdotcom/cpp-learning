#include<iostream>
using namespace std;




int findx(int arr[],int x, int  len){
  for (int i = 0; i < len ; i++)
  {
    if (arr[i] == x){
      return i;
    }
    }
  
    return -1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5}; 
  int len = sizeof(arr)/sizeof(arr[0]);
  swap(arr[0],len);
  cout << findx(arr,4, len) << endl;
  return 0; 
  
}