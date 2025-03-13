#include <iostream>
#include <vector>

using namespace std;

int squareRoot(int x)
{
  if (x == 0 || x == 1) return x;
  int start = 1, end = x, mid = start, ans = 0 ;

  while (start <= end)
  {
    mid = start + (end - start) / 2;

    if (mid== x/mid)
      return mid;
    else if (mid > x/mid)
      end = mid - 1;
    else{
      ans = mid; 
      start = mid + 1;  
    
    }
  }

  return ans;
}

int main()
{
  int x = 3452;
  cout << "Square root of " << x << " is: " << squareRoot(x) << endl;
  return 0;
}