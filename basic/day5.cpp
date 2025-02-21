#include<iostream>
using namespace std;




int main(){
  cout<<"sizeof int "<<sizeof(int)<< endl;
  cout<<"sizeof long"<< sizeof(long)<< endl;
  cout<<"sizeof float "<<sizeof(float)<< endl;
  cout<<"sizeof double "<<sizeof(double)<< endl;
  cout<<"sizeof char "<<sizeof(char)<< endl;
  cout<<"sizeof bool "<<sizeof(bool)<< endl;
  cout<<"sizeof long int "<< (sizeof(long int)) << endl;
  cout<<"sizeof short int "<< (sizeof(short int)) << endl;
  cout<<"sizeof long long "<< (sizeof(long long)) << endl;
  unsigned long long int x = -10;
  cout<<"unsigned int x "<< x<< endl;
  cout<<"sizeof unsigned int "<< sizeof(unsigned int)<< endl;
  cout<<"sizeof float* "<< sizeof(float*)<< endl;
  cout<<"sizeof double* "<< sizeof(double*)<< endl;
  cout<<"sizeof char* "<< sizeof(char*)<< endl;
  return 0;  // End of main function
}
   
int scopeBasic(){
  int x = 20;
  if(x> 0){
    int y = 30;
    cout<< "local scope: " << y << endl;
  }
  cout<< "global scope: " << x << endl;
  return 0;  // End of main function
}

int basic (){
  int a = 4, b = 8;
  cout<< "AND is : "<< (a & b)<<endl;
  cout<< "OR is : "<< (a | b)<<endl;
  cout<< "XOR (bitwise) is : "<< (a ^ b)<<endl;
  // cout<< "NOT of a is : "<< (~a)<<endl;
  // cout<< "NOT of b is : "<< (~b)<<endl;
  cout<< "Left Shift by 2 is : "<< (a << 2)<<endl;
  cout<< "Right Shift by 2 is : "<< (a >> 2)<<endl;
  return 0;  // End of main function
}