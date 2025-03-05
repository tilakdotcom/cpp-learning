#include <iostream>
#include <vector>
using namespace std;

void increasingOrderFromLastInsertionSort(vector<int> &arr)
{
  int len = arr.size();
  for (int i = 0 ; i < len - 1 ; i++)
  {
    for (int j =  len - i - 1   ; j <  len ; j++)
    {
      if (arr[j] < arr[j - 1])
      {
        swap(arr[j], arr[j - 1]);
      } else break ;
    }
  }
}
void decreasingOrderInsertionSort(vector<int> &arr)
{
  int len = arr.size();
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = i +  1 ; j > 0; j--)
    {
      if (arr[j] < arr[j - 1])
      {
        swap(arr[j], arr[j - 1]);
      }else break;
    }
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
  // decreasingOrderInsertionSort(arr);

  // cout << "Sorted array in descending order: \n";
  // printArray(arr, len);
  increasingOrderFromLastInsertionSort(arr);
  printArray(arr, len);
  return 0;
}