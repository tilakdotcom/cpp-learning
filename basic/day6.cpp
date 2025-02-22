#include <iostream>
#include <climits>  
using namespace std;


void twoPointerReverse(int arr[], int n){
  int start = 0;
  int end  = n-1;

  while(start < end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

}
void printSimpleArray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

int main(){
  int arr[] = {1, 2, 3, 4, 5, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  twoPointerReverse(arr, n);
  printSimpleArray(arr, n);
  return 0;
}


void reverseArray(int arr[], int n){
  int newArr[n];
  for (int i = 0; i < n; i++)
  {
    newArr[i] = arr[n - i -1];
  }
  cout<< "new array " <<endl;
  printSimpleArray(newArr,n);
}



int linearSearch(int find){
  int arr[] = {2, 3, 4, 10, 40,43 ,4 , 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == find){
      return i;
    }
  }
  return -1;
}

int addElementToArray(){
  int num;
  cout << "Enter a number : ";
  cin >> num;
  return num;
} 

void findSmallNlargest(){
  int size;
  cout << "Enter the size of the array : ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout <<  "Index " << i << " : ";
    arr[i] = addElementToArray();
  }
  int smallest= INT_MAX;
  int largest = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < smallest){
      smallest = arr[i];
    };
    if (arr[i] > largest){
      largest = arr[i];
    }
  } 

  cout << "The smallest number is : " << smallest << endl;
  cout << "The largest number is : " << largest << endl;

}

void AddAndPrintArray(){
  int size;
  cout << "Enter the size of the array : ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cout <<  "Index " << i << " : ";
    arr[i] = addElementToArray();
  }
  cout << "The array is : " << endl;;
  for (int i = 0; i < size; i++)
  {
    cout << "arr[" << i << "] : " << arr[i] << endl;
  }  
}

void printArray(){
  int marks[5] = {19, 10, 8, 17, 9};
  int size = sizeof(marks) / sizeof(marks[0]);
  for (int i = 0; i < size; i++)
  {
    cout << "marks[" << i << "] : " << marks[i] << endl;
   }
}