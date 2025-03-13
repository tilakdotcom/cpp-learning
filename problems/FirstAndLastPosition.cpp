#include <iostream>
#include <vector>

using namespace std;

vector<int> change(vector<int> &arr, int x)
{
  int start = 0, end = arr.size() - 1 , mid = start, firstTime = -1, lastTime = -1;

     // first time
  while (start <= end)
  {
    mid = start + (end - start) / 2;

    if (arr[mid] == x)
    {
      // first time
      firstTime = mid;
      end = mid - 1;
    }
    else if (arr[mid] > x)
      end = mid - 1;
    else
      start = mid + 1;
  }

  //last time
start = 0 ;  end = arr.size() - 1 ;
  while (start <= end)
  {
    mid = start + (end - start) / 2;
    if (arr[mid] == x)
    {
      // last time
      lastTime = mid;
      start = mid + 1;
    }
    else if (arr[mid] > x)
      end = mid - 1;
    else
      start = mid + 1;
  }

  vector<int> a = {firstTime, lastTime};
  
  return a; // if x is not found in the array.
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 7, 7, 9, 10};
  vector<int> result = change(arr, 7);
  cout << "First Time: " << result[0] << ", Last Time: " << result[1] << endl;
  return 0;
}