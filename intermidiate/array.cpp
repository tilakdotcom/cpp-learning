#include<iostream>
using namespace std;


void resverseArray(int arr[], int len){
  int start = 0;
  int end = len - 1;
  while(start < end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void printArray(int arr[], int len){
  for (int i = 0; i <len; i++)
  {
    cout << arr[i] << " ";
  }
  
}

int main() {
  int arr[] = {1, 2, 3, 4, 5}; 
  int len = sizeof(arr)/sizeof(arr[0]);
  
  cout << "Original array: ";
  printArray(arr, len);

  resverseArray(arr, len);
  
  cout << "\nReversed array: ";
  printArray(arr, len);

  return 0; 
  
}

int findx(int arr[],int x, int  len){
  for (int i = 0; i < len ; i++)
  {
    if (arr[i] == x){
      return i;
    }
    }
  
    return -1;
}