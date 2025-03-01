#include<iostream>
using namespace std;

void reverseArray(int arr[], int len){
  int start=0;
  int end = len-1;
  for (start; start < end;start++)
  {
    int temp = arr[start];
    arr[start]= arr[end];
    arr[end] = temp;
    end--;
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
  reverseArray(arr, len);
  printArray(arr, len);
  return 0;
}