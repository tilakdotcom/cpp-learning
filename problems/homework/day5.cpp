#include <iostream>
using namespace std;



int   reverseNumber(){
  int num ;
  cout << "Enter a number: ";
  cin >> num;
  int rev = 0;
  for (;num > 0; num /= 10){
    rev = rev * 10 + num % 10;
  }
  return rev; 
}
// Driver code
int main()
{
  cout << "Reversed number is: " << reverseNumber() << endl;

  return 0;


}

bool isPowerOfTwo(int n)
{
  // if ( n == 0 || n == 1 ){
  //   cout<< "Number is not a power of two" << endl;
  //   return false;
  // };
  // for (; n != 1; n/2)
  // {
  //   /* code */
  //   if(n % 2 != 0){
  //     cout<< "Number is not a power of two" << endl;
  //     return false;
  //   }
  // }
  
  // return true;
  
  return (n != 0) && ((n & (n - 1)) == 0);
  
}


void first()
{
  cout << "6 & 10 : " << (6 & 10) << endl;
  cout << "6 | 10 : " << (6 | 10) << endl;
  cout << "6 XOR 10 : " << (6 ^ 10) << endl;
}
void second()
{
  cout << "10 << 2 : " << (10 << 2) << endl;
  cout << "10 >> 1 : " << (10 >> 1) << endl;
}
