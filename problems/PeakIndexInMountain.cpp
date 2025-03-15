#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int change(vector<int> &arr)
{
  int start = 0, end = arr.size() - 1, mid = 0;

  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
      return mid;
    else if (arr[mid] > arr[mid + 1])
      start = mid + 1;
    else
      end = mid - 1;
  }

  return -1;
}

int main()
{
  vector<int> vec = {1, 2, 3, 4, 5, 4, 3, 2, 1};
  int num = 3;
  cout << change(vec);
  (vec, num);
}

// broute force
/*
 for(int i = 0; i < arr.size(); i++){
    if(arr[i] > Peak)
      Peak = arr[i];
  }
*/