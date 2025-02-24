#include<iostream>
#include<vector>
using namespace std;



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

int main(){
basicVector();
return 0;
}