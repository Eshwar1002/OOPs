// Function: It is Top down function programings imp part.
// Return value function key is the value which we return in the end of the function if it is not void.
// Function prototype: The below mentioned is the format of function prototype.
// type function_name (arguments);
//  #include<iostream>
//  using namespace std;

// int sum(int a, int b); // ---> Acceptable
// // int sum(int a,  b); // ---> not Acceptable
// int sum(int , int); // ---> Acceptable //This is allowed in functions.
// //Here we have defined the arguments and the function using function-prototype.
// //Aplyala warti define karavacha lagate function int main chya adhi nahi tar compiler tya la read nahi karu shakat ani error dete.
// //By defining function above int main() it comes the function comes in the scope of int main.
// int main(){
//     int num1, num2; //num1 and num2 are actual parameters.
//     cout<<"Enter the value of num1: ";
//     cin>>num1;
//     cout<<"Enter the value of num2: ";
//     cin>>num2;
//     cout<<"The sum of num1 and num2 is: "<<sum(num1, num2);
//     return 0;
// }

// int sum(int a, int b){// a and b are formal parameters.
//     //Formal parameters a and b will be taking values from actual parameters num1 and num2.
//     int c= a+b;
//     return c;
// }

// Tut 16:
// Call by value and call by reference.
//   #include<iostream>
//   using namespace std;
//   //THis will not swap a and b.
//   //Call by value
//   void swap(int a, int b){
//      int temp=a;
//      a=b;
//      b=temp;
//   }
//   //Call by reference using pointers.
//   void swapPointer(int* a, int* b){
//      int temp=*a;
//      *a=*b;
//      *b=temp;
//   }
//   //Call by reference using C++ reference variable.
//   void swapReferenceVar(int &a, int &b){ //Here &a and &b are reference variable.
//      int temp= a;
//      a=b;
//      b=a;
//   }
//   //If we want to return anything from above
//   int& swapReferenceVar1(int &a, int &b){ //Here &a and &b are reference variable.
//      int temp= a;
//      a=b;
//      b=a;
//      return a;
//   }
//   int main(){
//      int x=1, y=2;
//      cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//      swap(x,y);
//      cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; //Here value will not swap x and y.
//      //Because it was chaging it locally.

//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     swapPointer(&x,&y);
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     swapReferenceVar(x,y);
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

//     int ref = swapReferenceVar1(x,y);
//     cout<<ref;
//     return 0;
//  }

// Tut 17:
// Inline function
// C++ provides inline functions to reduce the function call overhead.
// When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call.
// This substitution is performed by the C++ compiler at compile time.
//  An inline function may increase efficiency if it is small.
// Don't use inline function when there is:
//  Recurssion
//  Static variable are used
//  loop
//  switch cases
// Compiler will not create a inline function if the function is too big.
//  Syntax:
//  inline return-type function-name(parameters)
//  {
//      // function code
//  }
//  #include<iostream>
//  using namespace std;
//  inline product(int a, int b){
//      return a*b;
//  }
//  int main(){
//      int x=3, y=5;
//      cout<<"Product of a and b is "<<product(x,y)<<endl; //Here when we call inline function whole code of function will come here and it will get compiled here.
//      //Therefore we should use inline function only if it is small.
//      return 0;
//  }

// Default argument:
// All default arguments must be at extrem rigth of all the arguments. Athorwise code will not run.
//  #include<iostream>
//  using namespace std;
//  //Here factor is a default argument and it is used if the value of factor is not defined by the user when he is calling the function,if user enters the value of factor in arguments then the value entered by him will get the preference.
//  float currentMoney (int currency, float factor= 1.04){
//      return currency*factor;
//  }
//  int main(){
//      int x=10000;
//      float y= 1.1;
//      cout<<"THe currency for an aam nagarik is "<< currentMoney(x); //Here default Argument was used.
//      cout<<"THe currency for a VIP is "<< currentMoney(x,y); //Here argumnet entered by me was given preference.
//      return 0;
//  }

// Constant Argument: It is created when we don't want someone to change our arguments.
// This is mainly used for reference variables and pointers.
//  #include<iostream>
//  using namespace std;
//  int constArgument(const int* a){
//      //Here we have used a constant argunments.
//  }
//  int main(){

//     return 0;
// }

// Tut 18:
// Recursion: It is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.
// Recursive fuction: a function which references itself.
// Factorial of a no.
//  #include<iostream>
//  using namespace std;
//  int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1); //As we can see here we are using the same function inside the function.
//     }
//  }
//  int main(){
//     int x=5;
//     cout<<"the factorial of x "<<factorial(x);
//     return 0;
//  }

// Fibonacci Sequence:
//  #include<iostream>
//  using namespace std;
//  int fibo(int n){
//      if(n==0){
//          return 0;
//      }
//      else if(n==1){
//          return 1;
//      }
//      else{
//          return fibo(n-1)+fibo(n-2);
//      }
//  }
//  int main(){
//      int x=10;
//      cout<<"fibo is "<<fibo(x);
//      return 0;
//  }

// It is also bad because it repeat the same function too many times.
