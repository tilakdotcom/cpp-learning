#include <iostream>

using namespace std;

int digitSum(int n){
  int sum = 0;
  for (int i = 0; i < n; i%10)
  {
    sum += n % 10;
    n = n / 10;
  }
  cout << sum << endl;
  
  return sum;
}
int fabonacci(int n){
  if (n <= 1)
    return n;
  else
    return (fabonacci(n-1) + fabonacci(n-2));
}

int fact(int n ){

  int f =1;
  if(n == 0 || n == 1)
    return 1;
  else
    for (
      int i = 0; i < n; i++)
    {
      f *= i+1;
    }

    cout<<"f is "<< f << endl;
    return f;
    
}
int main() {
int num;
// int rum;
cout << "Enter a number: ";
cin >> num;

int sum = fabonacci(num);

cout << "Sum of Fibonacci Series till "<< num <<" is: " << sum << endl;













// int n = fact(num);
// int r = fact(num - rum);
// int c = fact(rum);

// int sum = n / (c * r);


// cout <<"the NCR is : "<<sum << endl;








// cout <<"the sum of Digits is : "<<sum << endl;


// cout << " please enter two values"<< endl;
// cin >> a >> b;
// cout<< " min value is : "<< min(a,b) << endl;//argument

  //ductiuon call/ invoke
  // printHello();
  // printHello();
  // int result = num();
  // cout << "The result is: " << result << endl;
  // int sumResult = sum(5, 10);
  // cout << "The sum is: " << sumResult << endl;
  return 0;
}

// calculate the number of 1 to n 
int sumCalculated(int n){ // pass by value / copy of original value
int sum = 0;
for (int i = 0; i < n; i++)
{
  sum += i+1;
}
return sum;
}

//min of 2
int min(int a, int b) { // parameter

  if(a > b ){
    return b;
  }else{
    return a;
  }

}


void printHello(){
  cout << "Hello, World!" << endl;
}

int num(){
  return 5;
}

int sum(int a, int b){
  return a + b;
}