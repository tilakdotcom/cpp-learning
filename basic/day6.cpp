#include <iostream>
using namespace std;





int addElementToArray(){
  int num;
  cout << "Enter a number : ";
  cin >> num;
  return num;
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
  cout << "The array is : " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << "arr[" << i << "] : " << arr[i] << endl;
  }
  
  
}


int main(){
  AddAndPrintArray();
  return 0;
}




void printArray(){
  int marks[5] = {19, 10, 8, 17, 9};
  int size = sizeof(marks) / sizeof(marks[0]);
  for (int i = 0; i < size; i++)
  {
    cout << "marks[" << i << "] : " << marks[i] << endl;
   }
}