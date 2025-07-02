#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &arr, int  x)
{
  int start = 0 , end =  arr.size(), mid = 0;
  while(start <= end ){
    mid = (start + end) / 2 ;
    if(arr[mid] == x){
      cout<< "Element found at index: " << mid << ", value : "<< x <<endl;
      return mid;
    }
    else if (arr[mid] < x ) 
    start = mid + 1;
    else
    end = mid - 1;
  }

  cout<< "Element not found in the array." <<endl;
  return -1;
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 7, 8, 9};
  int len = arr.size();
  binarySearch(arr, 6);
;  return 0;
}