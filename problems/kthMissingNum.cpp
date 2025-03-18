#include <iostream>
#include <vector>

using namespace std;

int insertionPosition(vector<int> &arr, int k)
{
  int start = 0, end = arr.size(), mid = start , ans= k;

  while (start <= end)
  {
    mid = start + (end - start) / 2;
    
    if (arr[mid] -mid -1){
    ans = mid;
    end = mid - 1;
  } else 
    start = mid + 1;
  }
  return ans ;
}

int main()
{
  vector<int> arr = {1, 4, 5, 6, 8, 9, 11, 13};
  int x = 4;
  cout << x << " th missing num is : " << insertionPosition(arr, x) << endl;
  return 0;
}

// another approaches
/*



 for (int i = 0; i < arr.size(); i++) {
    if (arr[i] <= k) k++;
    else break;
}


 int start = 0;
  while (start < arr.size())
  {
    if (arr[start] <= k)
      k++;
    else if (arr[start] >= k)
      break;

    start++;
  }


*/