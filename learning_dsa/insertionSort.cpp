#include <iostream>
#include <vector>
using namespace std;

void  insertionSort(vector<int> &arr)
{
  int len = arr.size();
  for (int i = 0; i < len; i++)
  {    
    for (int j = i; j > 0; j--)
    {
      if (arr[j] < arr[j - 1])
      {
        swap(arr[j], arr[j - 1]);
      }else break;
    }
    cout << endl;
  }
}
void printArray(vector<int> arr)

{
  int len = arr.size();
  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> arr = {6, 2, 1, 5, 4, 3};
   insertionSort(arr);
  printArray(arr);
  return 0;
}