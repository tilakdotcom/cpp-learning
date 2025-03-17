#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int change(vector<int> &arr)
{
  int start = 0, end = arr.size() - 1, mid = 0 , small = arr[0];

  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if(arr[mid] >= arr[0])
      start = mid + 1;
    else{
      small = arr[mid];
      end = mid - 1;
    }
  }

  return small;
}

int main()
{
  vector<int> vec = {2,1};
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