#include<iostream>
#include<vector>
using namespace std;


void print(){
  vector<int> arr = {1,2,3,4,5};
  for(int st = 0; st < arr.size(); st++){
    for (int end = st ; end < arr.size(); end++)
    {
      for (int i = st; i <= end ; i++)
      {
        cout << arr[i];
      }
      
    cout<< " ";
    }
    cout << endl;
  }
};



int main(){
  print();
  return 0;
 
}