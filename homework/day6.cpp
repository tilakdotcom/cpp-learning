#include <iostream>
#include <climits>
using namespace std;

int main(){
  int arr[] = {1, 2, 3, 4, 5, 6, 7,6,3,6,2, 8, 9};
  int arr2[] = {1, 2, 3, 4, 5  };
  int n = sizeof(arr) / sizeof(arr[0]);
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  // smallAndLargeIndex(arr, n);
  // sumAndProduct(arr, n);
  // smallAndLargeIndexSwap(arr, n);
  // printUniqueValues(arr, n);
  return 0;
}


void printUniqueValues(int arr[], int n){
  
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arr[i] == arr[j] && i != j){
        break;
      }
      if (j == n-1){
        cout << arr[i] << " ";
      }
    }
  }
  
}


void smallAndLargeIndexSwap(int arr[], int n){
  int small = INT_MAX;
  int large = INT_MIN;
  int smallIndex;
  int largeIndex;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > large){
      large = arr[i];
      largeIndex = i;
    }
    if (arr[i] < small){
      small = arr[i];
      smallIndex = i;
    }
  }
  

  cout << "The smallest number is : " << small << " at index " << smallIndex << endl;
  cout << "The largest number is : " << large << " at index " << largeIndex << endl;
  int  swapIndex = arr[smallIndex];
  arr[smallIndex] = arr[largeIndex];
  arr[largeIndex] = swapIndex;
  cout << "The array after swapping the smallest and largest number is : " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << "arr[" << i << "] : " << arr[i] << endl;
  }
  
}


void sumAndProduct(int arr[], int n){
  int sum = 0;
  int product = 1;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    product *= arr[i];
  }
  
  cout << "The sum of the array is : " << sum << endl;
  cout << "The product of the array is : " << product << endl;
}



void smallAndLargeIndex(int arr[], int n){
  int small = INT_MAX;
  int large = INT_MIN;
  int smallIndex;
  int largeIndex;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > large){
      large = arr[i];
      largeIndex = i;
    }
    if (arr[i] < small){
      small = arr[i];
      smallIndex = i;
    }
  }

  cout << "The smallest number is : " << small << " at index " << smallIndex << endl;
  cout << "The largest number is : " << large << " at index " << largeIndex << endl;
  
}