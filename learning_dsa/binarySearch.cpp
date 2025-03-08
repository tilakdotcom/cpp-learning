#include <iostream>
#include <vector>
using namespace std;

// idea way to find mid
// mid = start + (end - start) / 2

void binarySearch(vector<int> &arr, int  x)
{
  int len = arr.size();
  int mid = 0;
  int  start = 0;
  int end = len - 1;
  while (start <= end)
  {
    mid = (end + start) / 2;
    if (x == arr[mid])
    {
      cout << "Found the number at : " << mid << ", value : " << arr[mid] << endl;
      return;
    }
    else if (x > arr[mid])
    {
      start = mid + 1;  
    }
    else
    {
      end = mid - 1;
    }
  }
  cout << "Number not found in the array." << endl;
}

void binarySearch(vector<int> &arr)
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
  binarySearch(arr, 9);
  // printArray(arr, len);
;  return 0;
}