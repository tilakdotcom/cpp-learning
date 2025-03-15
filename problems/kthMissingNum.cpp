#include <iostream>
#include <vector>

using namespace std;

int insertionPosition(vector<int> &arr, int k)
{
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] <= k) k++; 
    else break;
}
return k;
}

int main()
{
  vector<int> arr = {1, 4, 5, 6, 8, 9, 11, 13};
  int x = 3;
  cout << x << " th missing num is : " << insertionPosition(arr, x) << endl;
  return 0;
}