#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int  x)
{
  int len = arr.size();
  int temp = 0;
  for (int i = 0; i < len / 2; i++)
  {
    if (x == arr[temp])
    {
      cout << "Found the number at : " << temp << ", value : " << arr[temp] << endl;
      return;
    }
    else if (x > arr[temp])
    {
      temp = (temp + len - 1) / 2;
    }
    else
    {
      temp = (0 + temp) / 2;
    }
  }
  cout << "Number not found in the array." << endl;
}

void bubbleSort(vector<int> &arr)
{
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
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int len = arr.size();
  bubbleSort(arr, 9);
  // printArray(arr, len);
;  return 0;
}