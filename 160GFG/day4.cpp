#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int> &arr, int d)
{
  vector<int> temp;
  if (d == 0) return;
  int c = 0;
  int n = arr.size();
  d = d % n;
  for (int i = 0; i < d; i++)
  {
    temp.push_back(arr[i]);
  }
  for (int i = d; i < n; i++)
  {
    arr.at(c) = arr[i];
    c++;
  }
  for (int i = 0; i < d; i++)
  {
    arr.at(c) = temp[i];
    c++;
  }
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
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
  int d = 10;
  int n = arr.size();
  rotateArray(arr, d);
  printArray(arr, n );
  return 0;
}