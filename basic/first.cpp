#include <iostream> 
using namespace std;


int main(){
  //  int a = 5;
  //  int b = 10;
  //  int sum = a + b;
  //  float PI = 3.14f;
  //  double d = 2.71828;
  //  string name = "John";
  //  bool isTrue = true; // true -> 1 & false -> 0
  //  cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
  //  //add size of sum 
  //  cout << "Size of sum: " << sizeof(sum) << " bytes" << endl;
  //  //add size of int
  //  cout << "Size of int: " << sizeof(int) << " bytes" << endl;
  //  //add size of double
  //  cout << "Size of double: " << sizeof(double) << " bytes" << endl;
  //  //add size of float
  //  cout << "Size of float: " << sizeof(float) << " bytes" << endl;
  //  //add size of char
  //  cout << "Size of char: " << sizeof(char) << " bytes" << endl;
  //  //add size of string
  //  cout << "Size of string: " << sizeof(string) << " bytes" << endl;
  //  //add size of bool
  //  cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;

   // type conversaion
   
  //  char grade = '-';
  //  int gradeInt = (int)grade;
  //  cout << "grandes : "<< gradeInt << endl;
  // int age;
  // cout << "Enter your age: ";
  // cin >> age;
  // cout << "Your age is: " << age << endl;
  //  return 0;

  //arithmetics 
  int num1 = 10;
  int num2 = 5;
  int sum = num1 + num2;
  int sub = num1 - num2;
  int mul = num1 * num2;
  int div = num1 / num2;
  int mod = num1 % num2;
  cout << "Sum: " << sum << endl;
  cout << "Sub: " << sub << endl;
  cout << "Mul: " << mul << endl;
  cout << "Div: " << div << endl;
  cout << "Mod: " << mod << endl;

  //relational 
  int num3 = 10;
  int num4 = 5;
  bool isEqual = num3 == num4;
  bool isNotEqual = num3!= num4;
  bool isGreater = num3 > num4;
  bool isLess = num3 < num4;
  bool isGreaterEqual = num3 >= num4;
  bool isLessEqual = num3 <= num4;
  cout << "Is equal: " << isEqual << endl;
  cout << "Is not equal: " << isNotEqual << endl;
  cout << "Is greater: " << isGreater << endl;
  cout << "Is less: " << isLess << endl;
  cout << "Is greater or equal: " << isGreaterEqual << endl;
  cout << "Is less or equal: " << isLessEqual << endl;

  //logical
  bool isTrue1 = true;
  bool isTrue2 = false;
  bool andResult = isTrue1 && isTrue2;
  bool orResult = isTrue1 || isTrue2;
  bool notResult =!isTrue1;
  cout << "And: " << andResult << endl;
  cout << "Or: " << orResult << endl;
  cout << "Not: " << notResult << endl;
  
  //assignment
  int a, b;
  cout << "please Enter values of a :";
  cin >> a;
  cout << "please Enter values of b:";
  cin >> b;
  
  cout << "the Sum is : " << (a + b) << endl; 
  //unary oprator
  int num5 = 5;
  int increment = ++num5;//update && work
  int increment = num5++;//work && update
  int decrement = --num5;
  cout << "Increment: " << increment << endl;
  cout << "Decrement: " << decrement << endl;
}

// int main(){
  
//   cout << "Welcome bhai \n cpp me" << endl;
//   cout << "Welcome bhai cpp me";  
// }
