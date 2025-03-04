#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
  int len = arr.size();
  for (int i = 0; i < len ; i++)
  {
    for (int j = 0; j < len - i; j++)
    {
      if (arr[j] >=  arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  
}

void printArray(vector<int> arr, int len)
{
  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> arr = {64, 25, 12, 22, 11, 3};
  int len = arr.size();
  bubbleSort(arr);
  printArray(arr, len);
  return 0;
}