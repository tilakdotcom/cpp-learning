#include <iostream>
#include <vector>
using namespace std;

void increasingOrderFromLastBubbleSort(vector<int> &arr)
{
  int len = arr.size();
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = len - 1 - i; j > 0; j--)
    {
      if (arr[j] <= arr[j - 1])
      {
        swap(arr[j], arr[j - 1]);
      }
    }
    // cout<< i << " " ;  
  }
}
void decreasingOrderBubbleSort(vector<int> &arr)
{
  int len = arr.size();
  for (int i = 0; i < len - 1 ; i++)
  {
    bool swapped = false;
    for (int j = 0; j < len - i - 1; j++)
    {
      if (arr[j] <= arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (!swapped)
      break;
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
  vector<int> arr = {4, 2, 1, 5, 6, 3};
  int len = arr.size();
  // decreasingOrderBubbleSort(arr);

  // cout << "Sorted array in descending order: \n";
  // printArray(arr, len);
  increasingOrderFromLastBubbleSort(arr);
  printArray(arr, len);
  return 0;
}