#include <iostream>
#include <vector>

using namespace std;

int insertionPosition(vector<int> &arr, int x)
{
  int start = 0, end = arr.size() - 1, mid = start, ans = arr.size();

  // first time
  while (start <= end)
  {
    mid = start + (end - start) / 2;

    if (arr[mid] == x)
      return mid;
    else if (arr[mid] > x){
      ans = mid;
      end = mid - 1;
    }
    else
      start = mid + 1;  
  }

  return ans; // if x is not found in the array.
}
int my(vector<int> &arr, int x)
{
  int start = 0, end = arr.size() - 1, mid = start, ans = arr.size();

  // first time
  while (start <= end)
  {
    mid = start + (end - start) / 2;

    if (arr[mid] == x)
      return mid;
    else if (arr[mid] > x)
      end = mid - 1;
    else
      start = mid + 1;   

    if(start > end){
      if(arr[mid] < x)
      return mid + 1;
      else 
      return mid;  
    }

  }

  return ans; // if x is not found in the array.
}

int main()
{
  vector<int> arr = {1, 4, 6, 8, 10, 14, 16, 18};
  int x = 421;
  // int index = insertionPosition(arr, x);
  int index = my(arr, x);
  if (index != -1)
    cout <<x << " is at index " << index << endl;
  else
    cout << x << " is not present in array";

  return 0;
}