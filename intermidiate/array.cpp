#include<iostream>
#include <climits>   // for INT_MIN
#include <vector>
using namespace std;

void printArray(int arr[], int len){
  cout << "size of arr :" <<  sizeof(arr) << endl;
  for (int i = 0; i <len; i++)
  {
    cout << arr[i] << " ";
  }
  cout<< endl;
}


void rotateArrayByOne(int arr[], int len){
  int temp = arr[len-1];
  //yt bhaiya
  for (int i = len-2; i >= 0; i--)
  {
    arr[i + 1] = arr[i];
  }
  // arr[0] = temp;
}




int main() {
  int arr[] = {1, 2, 3, 4, 5}; 
  int len = sizeof(arr)/sizeof(arr[0]);
  // secondMax(arr, len);
  // fintMissing(arr, len, 6);
  // fabonacci(1);
  printArray(arr, len);
  rotateArrayByOne(arr, len);
  cout << "after " << endl;
  printArray(arr, len);
  return 0; 
  
}




void fabonacci(int N){
  int a = 0, b = 1;
  if(N < 0){
    cout << "Input should be non-negative";
    return;
  }else if(N == 0 ){
    cout << "0" << endl;
    return;
  }else if (N == 1)
  {  
    cout << "0 1" << endl;
    return;
  }
  cout << "0 1 ";
  
  for (int i = 0; i < N - 1; i++)
  {
    int c = a + b ;
    cout << c << " ";
    a = b;
    b = c;
  }
  
}


void fintMissing(int arr[], int len, int N){
  int sum = 0;
  for (int i = 0; i < len; i++)
  {
    sum += arr[i];
  }

  int expectedSum = (N * (N + 1)) / 2;
  int missingNumber = expectedSum - sum;
  cout<< "the messing num is : " << missingNumber<< endl;
}

void secondMax(int arr[], int len){
  int max1 = INT_MIN, max2 = INT_MIN;
  for (int i = 0; i < len; i++)
  {
    if(arr[i] > max1 ){
      max2 = max1;
      max1 = arr[i];
    }
  }
  cout << "First maximum element is " << max1 << endl;
  cout << "Second maximum element is " << max2 << endl;
  
}
void resverseArray(int arr[], int len){
  int start = 0;
  int end = len - 1;
  while(start < end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
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