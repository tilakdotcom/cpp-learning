#include<iostream>
#include<vector>

using namespace std;


void vertorLeanerSearch(vector<int> & vec, int num){
  for (int val: vec)
  {
    if (val == num)
    {
      cout << "Element found: " << val << endl;
      return;
    }
    
  }
  cout << "Element not found" << endl;
  return;
  
}


int main(){
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vertorLeanerSearch(vec, 5);
  vertorLeanerSearch(vec, 11);
}