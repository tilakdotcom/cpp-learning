#include <iostream>
#include <climits> // for INT_MIN
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr, int len)
{

  for (int i = 0; i < len; i++)
  {
    int min = i;
    for (int j = i; j < len; j++)
    {
      if (arr[j] <= arr[min])
      {
        cout << arr[j] << " ";
        min = j;
      }
    }
    swap(arr[i], arr[min]);
    cout << "min: " << arr[min] << endl;
    cout << endl;
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
  change(arr, len);
  printArray(arr, len);
  return 0;
}