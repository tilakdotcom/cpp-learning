#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int change(vector<int> &arr, int x)
{
  int start = 0, end = arr.size() - 1, mid = 0;

  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] == x)
      return mid;
    else if (arr[mid] >= arr[0])
    { // left short
      if (arr[0] <= x && x < arr[mid])
      {
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }
    else
    { // right short
      if (arr[mid] <= x && x <= arr[end])
      {
        start = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    }
  }

  return -1;
}

int main()
{
  vector<int> vec = {3, 4, 5, 6, 7, 8, 9, 1, 2};
  cout << change(vec, 2);
}

// broute force
/*
 for(int i = 0; i < arr.size(); i++){
    if(arr[i] > Peak)
      Peak = arr[i];
  }
*/