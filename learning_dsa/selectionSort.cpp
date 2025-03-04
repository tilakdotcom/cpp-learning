#include <iostream>
#include <climits> // for INT_MIN
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int len)
{

  for (int i = 0; i < len - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < len; j++)
    {
      if (arr[j] <= arr[min])
      {
        min = j;
      }
    }
    swap(arr[i], arr[min]);
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
  vector<int> arr = {64, 25, 12, 22, 11, 3};
  int len = arr.size();
  selectionSort(arr, len);
  cout << "Sorted array: " << endl;  // prints the sorted array
  printArray(arr, len);
  return 0;
}