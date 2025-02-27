#include<iostream>
#include<vector>
using namespace std;



void printBitwise(){
  int num = 10;
  for (int i = 31; i >= 0; i--) {
    cout << ((num >> i) & 1) << " ";
  }
  cout << endl;
};


int main(){
  // print();
  printBitwise();
  return 0;
 
}


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
