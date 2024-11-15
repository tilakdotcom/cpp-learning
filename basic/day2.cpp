#include <iostream>
using namespace std;

int main()
{ 
  // fatorial
  int num ;
  int factorial = 1;
  cout << "Enter a number: ";
  cin >> num;
  for(int i = 1; i <= num ; i++){
    factorial *= i;
  }

  cout << "Factorial of " << num << " is: " << factorial << endl;

  // switch case
  // int choice;
  // cout << "Enter your choice (1-3): ";
  //nested loop
  // int num ;
  // cout << "Enter a number: ";
  // cin >> num;
 
  // for(int i = 1; i <= num ; i++){
  //   for(int j = 1; j <= i ; j++){
  //     cout << " * ";
  //   }
  //   cout <<endl;
  // }

// // check if the number is prime or not 

// int num ;
// bool prime = true ;

// cout << "Enter a number: ";
// cin >> num;

// for(int i = 2; i*i <= num; i++){
//   if(num <= 1){
//     cout << "Please enter a number" << endl;
//   }
//   if (num % i == 0){
//     prime = false;
//     break;
//   }
// }
// if(prime){
//   cout << num << " is a prime number" << endl;
// }else{
//   cout << num << " is not a prime number" << endl;
// }
// cout<< "num is prime " <<endl;
//do while loop 

// int i = 0;
// do {
//   cout<< " "<<i;
//   i++;
// } while (i <= 10);
//exwersize
// int n ; 
// cout<<" enter your number for sum ";
// cin>> n;
// int sum= 0;
// // int i=1;

// // for odd sum
// for(int i = 0; i <= n ; i++ ){
//   if( i % 2 == 1 ){
//     sum+= i;
//     i++;
//   }
// }

// for sume
// while (i <= n)
// { 
//   if(i == 5){
//     break;
//   }
//   sum += i;
//   i++;
// }
//for sum
// for (int i = 1; i <= n; i++ ){
//   sum += i;
// }
// cout<<"sum  : "<< sum<< endl;

//loop 

//for loop 
// for(int i=0; i <= 10; i++){
//   cout<< " "<<i;
// }

//white loop 
// int count;
// cout<< "enter you n : ";
// cin >> count;
// int i = 0;
// while (i <= count)
// {
//   cout << "bhai print hua "<< i << endl;
//   i++;
// }
// cout << endl;







// // ternary 
// int i = 23;

// cout <<( i >= 34 ? "Error": "bhai true h ") << endl;


//   //char is upper or lower case
// char ch;
// cout << "Enter you char : " << endl;
// cin >> ch;
// //check if char is upper case or lower case
// if((int)ch >=97){
//   cout << "Character is Lower Case" << endl;f
// }else{
//   cout << "Character is Upper Case" << endl;
// }


// //char is upper or lower case
// char ch = 'A';

// //check if char is upper case or lower case
// if(isupper(ch)){
//   cout << "Character is Upper Case" << endl;
// }else{
//   cout << "Character is Lower Case" << endl;
// }




// odd even 
//   int n;
//   // vote machine 
//   cout << "Please enter your number : ";
//   cin >> n;
// if(n % 2 == 1){
//   cout << "You are a odd number" << endl;
// }else{
//   cout << "You are an even number" << endl;
// }


//vote machin
  // if(age >= 18){
  //   cout << "You are eligible to vote" << endl;
  // }else if(age ==0 || age <0){
  //   cout << "bhai peda ho ja pahle" << endl;
  // }else{
  //   cout << "You are not eligible to vote" << endl;
  // }

//if else
  // int a = 5;
  // // condition statements
  // if (a >= 0){
  //   cout << "Positive number" << endl;
  // }else{
  //   cout << "Negative number \n";
  // };
  return 0;
};


