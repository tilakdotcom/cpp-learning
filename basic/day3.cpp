#include <iostream>
using namespace std;

int main()
{
  //butterfly
  //top nutter fly
  int n =4;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < i+1; j++){
      cout<< "* ";
    }
    //for space
    for (int j = 0; j < 2 * (n - i -1) ; j++)
    {
      cout<< "  ";
    }
     for (int j = i+1; j > 0; j--){
      cout<< "* ";
    }
    
    cout<<endl;
  }
   //bootom nutter fly
  for (int i = 0; i < n; i++){
    for (int k = (n - i); k > 0; k--){
      cout<< "* ";
    }

     //for space
    for (int j = 0; j < 2 * (i) ; j++)
    {
      cout<< "  ";
    }
      for (int j = n - i; j > 0; j--){
      cout<< "* ";
    }
    
    cout<<endl;
  }

  // hollow Diamond
  // int num = 4;
  // // top
  // for (int i = 0; i < num; i++)
  // {
  //   // printhing space
  //   for (int j = num - i; j > 1; j--)
  //   {
  //     cout << " ";
  //   }
  //   cout << "*";
  //   if (i != 0)
  //   {
  //     for (int k = 0; k < 2 * i - 1; k++)
  //     {
  //       cout << " ";
  //     };
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // // bottom
  // for (int i = 0; i < num -1; i++){
  //   //space 
  //   for (int j  = 0; j < i+1; j++){
  //     cout << " ";
  //   };
  //   cout << "*";
  //   if(i != num-1){
  //     //mide space
  //     for (int k = 0; k < 2*(num - i) - 5; k++){
  //       cout<< " ";
  //     }
  //     cout << "*";
  //   };
  //   cout << endl;
  // }

  // pyramid
  //  int num = 5 ;
  //  for (int i = 0; i < num; i++){
  //   //printhing space
  //   for(int j = num - i; j > 1; j--){
  //     cout <<"  ";
  //   }
  //   for(int k = 0; k < i + 1 ; k++){
  //     cout <<k+1 <<" ";
  //   }
  //   for(int l = i; l > 0  ; l--){
  //     cout << l <<" ";
  //   }
  //   cout << endl;
  //  }

  // triangle pattern
  // inverted triangle
  //  int num = 5;
  //  char ch = 'A';
  //  for (int i = 0; i < num; i++){
  //    for (int j = 0 ; j <i ; j++){
  //      cout << "  ";
  //    }
  //    for (int k = 0; k < (num-i); k++){
  //      cout << ch << " ";

  //   }
  //   ch++;
  //   cout << endl;
  //   }

  // inverted triangle
  //  int num = 5;
  //  for (int i = 0; i < num; i++){
  //    for (int j = 0 ; j <i ; j++){
  //      cout << "  ";
  //    }
  //    for (int k = (num-i); k > 0; k--){
  //      cout << i+1 << " ";
  //    }

  //   cout << endl;
  //   }

  // char Floyd's triangle
  //  int num = 5;
  //  char k = 'A';
  //  for (int i = 0; i < num; i++){
  //    for (int j =0; j < i + 1; j++){
  //      cout << k << " ";
  //      k++;
  //    }
  //    cout << endl;
  //  }

  // Floyd's triangle
  //  int num = 5;
  //  int k = 1;
  //  for (int i = 0; i < num; i++){
  //    for (int j =0; j < i + 1; j++){
  //      cout << k << " ";
  //      k++;
  //    }
  //    cout << endl;
  //  }

  // number triangle
  //  int num = 5;
  //  for (int i = 0; i < num; i++){
  //    for (int j = (i+1); j > 0; j--){
  //      cout << j << " ";
  //    }
  //    cout << endl;
  //  }
  // number triangle
  //  int num = 5;
  //  for (int i = 0; i < num; i++){
  //    for (int j = 1; j <=i + 1; j++){
  //      cout << j << " ";
  //    }
  //    cout << endl;
  //  }

  // number triangle
  //  int num = 5;
  //  for (int i = 0; i < num; i++){
  //    for (int j = 0; j <i + 1; j++){
  //      cout << j+1 << " ";
  //    }
  //    cout << endl;
  //  }

  // char triangle
  //  int num = 5;
  //  char k ='A';
  //  for (int i = 0; i < num; i++){
  //    for (int j = 0; j <i + 1; j++){
  //      cout <<k << " ";
  //    }
  //    k++;
  //    cout << endl;
  //  }

  // number triangle
  //  int num = 5;
  //  for (int i = 0; i < num; i++){
  //    for (int j = 0; j <i + 1; j++){
  //      cout << i+1 << " ";
  //    }
  //    cout << endl;
  //  }

  // simple triangle
  //   int num = 6;
  //  for (int i = 0; i < num; i++)
  //  {
  //    for (int j = 0; j <= i; j++)
  //    {
  //      cout<< "* ";
  //    }
  //        cout << endl;
  //  }

  // for char increasing
  // int num = 6;
  // char k = 'A';
  // for (int i = 1; i <= num; i++)
  // {
  //   for (int j = 1; j <= num; j++)
  //   {
  //     cout<< k << " ";
  //     k++;
  //   }

  //   cout << endl;
  // }
  // square loop with out reset

  // int num = 5;
  // int k = 1;
  // for (int i = 1; i <= num; i++)
  // {
  //   for (int j = 1; j <= num; j++)
  //   {
  //     cout<< k << " ";
  //     k++;
  //   }

  //   cout << endl;
  // }

  // char loop
  //  int num = 5;
  //  for (int i = 0; i < num; i++){
  //    char ch = '$';
  //    for(int j =0 ; j < num; j++){
  //      cout<< ch << " ";
  //      ch++;
  //    }
  //    cout << endl;
  //  }

  // square loop
  //  int num = 5;
  //  for (int i = 1; i <= num; i++)
  //  {
  //    for (int j = 1; j <= num; j++)
  //    {
  //      cout<< j << " ";
  //    }

  //   cout << endl;
  // }

  return 0;
}
