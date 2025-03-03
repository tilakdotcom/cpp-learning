#include<iostream>
#include<vector>
using namespace std;

void leetCode136(){
  
}



int main(){
// basicVector();
return 0;
}



void staticAndDynamicVector(){
  vector<int> daynamicVec;
  daynamicVec.push_back(1);
  daynamicVec.push_back(2);
  cout << "dynaamic size of vec = " << daynamicVec.size() << endl;

  int staticVec[5] = {1,2,3,4,5};
  cout << "static size of vec = " << sizeof(staticVec)/sizeof(staticVec[0]) << endl;

  cout << "static size of vec = " << daynamicVec.size() << endl;
};


void basicVector(){
 // vector<int> vec;
  // vector<int> vec = {0,1,2,3,4,5,6,7};
  // vector<int> vec(5 ,6);
  vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
  // for(char a : vec){
  //   cout << a << " ";
  // }
  cout << "size of vec = " <<vec.size() << endl;

  vec.push_back('f');
  vec.push_back('g');
  cout << "size of vec after push_back = " << vec.size() << endl;
  vec.pop_back();
  cout << "size of vec after pop_back = " << vec.size() << endl;
  cout << "vec front value = " << vec.front() << endl;
  cout << "vec back value = " << vec.back() << endl;
  cout << "vec value at = " << vec.at(3) << endl;
 

  for(char a : vec){
    cout << a << " "; 
  }
  cout  << "size of vec = " << vec.size() << endl;
  cout << "capacity of vec = " << vec.capacity() << endl;

}