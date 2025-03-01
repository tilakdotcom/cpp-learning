#include<iostream>
using namespace std;

void moveZeros(int arr[], int len){
  int index = 0;
  for(int i = 0; i < len; i++){
    if(arr[i] != 0){
      int temp = arr[index];
      arr[index] = arr[i];
      arr[i] = temp;
      index++;
    }
  }
}

void printArray(int arr[], int len){
  for(int i = 0; i < len; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}



int main(){
  int arr[] = {1, 7, 0, 4, 0, 0, 6, 9, 0};
  int len = sizeof(arr) / sizeof(arr[0]);
  moveZeros(arr, len);
  printArray(arr, len);
  return 0;
}