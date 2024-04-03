// Control Structures:
//  1) Sequence Structure (Simple code)
//  2) Selection Structure (if-else or switch cases)
//  3) Loop Structure (loops like while,do,for)

// Switch Cases
// #include<iostream>
// using namespace std;

// int main(){
//     int x;
//     cout<<"ENter the value between 1-4"<<endl;
//     cin>>x;
//     switch(x){
//         case 1:
//          cout<<"THis is case1";
//          break;

//         case 2:
//         cout<<"this is case 2"<<endl;
//         break;

//         case 3:
//         cout<<"this is case 3"<<endl;
//         break;

//         case 4:
//         cout<<"this is case 4"<<endl;
//         break;

//         default:
//         cout<<"this is defalt"<<endl;
//         break;

//     }
//     return 0;
// }

// Constant in C++
// int main(){
//     const int a=2; //Here we have created a constant interger using "const" keyword
//     return 0;
//     }

// Manipulators in C++
// endl is a manipulator.
// setw is a manipulator from iomanip header file.
// It formats the output perfectly.
// #include<iomanip>
// #include<iostream>
// using namespace std;
// int main(){
//     int a=2, b=22, c=222, d=4324;
//     cout<<"Print this no. : "<<setw(4)<<a<<endl;
//     cout<<"Print this no. : "<<setw(4)<<b<<endl;
//     cout<<"Print this no. : "<<setw(4)<<c<<endl;
//     cout<<"Print this no. : "<<setw(4)<<d<<endl;
//     return 0;}

// Operator Precedence

// Loops in C++

// For Loop
// for (int i = 0; i < 10; i++)
// {
//     /* code */
// }

// While loop
//  while(condition)
//  {
//      code
//  }

// do While loop
//  do{
//      code
//  }while(condition);

// About boilerplate in video 11 and 10 on youtube.
// break and continue
// break stops executing the iteration or repetation or helps to exit the loop.

// continue stops the iteration for the given statement and we continue by leaving that iteration.
//  #include<iostream>
//  using namespace std;
//  int main(){
//       for(int i=0;i<20;i++){
//          if(i==10){
//              break; //as we can see loop will stop at when i=10.
//          }
//          if(i==2){
//              continue; //HERE 2 will not get printed because we have used continue here loop will stop iteration for the movement of 2 and will continue again.
//              //ye kahata hai ke i=2 ke bad jo bhi hai uspe continue karo.
//          }
//          cout<<i<<endl;
//       }
//      return 0;
//  }

// Pointers: Data type which holds the address of other data types.
//  & ---> Address of operator
//  * ---> Dereference operator
//  //To create a pointer variable --->{ int* } is used.
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int a=3;
//      int* b= &a;
//      //Pointer to pointer
//      cout<<"The address of a is "<<b<<endl; //Here b is having the address of a.
//      cout<<"The value of a is "<<*b<<endl; // Here *b which is dereferece operator gives the value of a.
//      int** c=&b; //This is pointer to pointer it means c is a pointer variable which stores the address of b pointer.
//      cout<<"The address of b is "<<c<<endl;
//      cout<<"The value of b is "<<*c<<endl;
//      cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
//      return 0;
//  }

// Array: We can store same data type in continuos memory locations.
//  WE can create array like { int marks[10]} The value inside the square braces tell us the size of the array.
// Pointers in array:
// We can get address of the first element of array directly by just entering the variable.
// Using & before variable to get the address is wrong.
// Pointer Arithmetic
// Address new = address current + i * (sizeof(data type))
//  ex: (p+i) = p + i * (sizeof(data type))
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int marks[5] ={ 12,23,34,45,56}; //Below we can see that we have not used the & symbol because the marks variable directly points towards the address of the 1st element in the array.
//      int* p= marks; //Here p pointer is pointing at the 1st value of the array marks which is at 0th position.
//      cout<<"The value of marks 0 is "<< *p<<endl;
//      cout<<"The value of marks 1 is "<< *(p+1)<<endl;
//      cout<<"The value of marks 2 is "<< *(p+2)<<endl;
//      cout<<"The value of marks 3 is "<< *(p+3)<<endl; //As we can see here we can increment the array pointer and we can get the values of the array using pointer only.
//      return 0;
//  }

// Structure: It is a user defined data type.
// We create a structure to store different types of datatypes together.
// #include<iostream>
// using namespace std;
// struct employee{
//     //data
//     int Id;
//     char yourchoi;
//     float salary;
// }; //This is how a structure is created.

// int main(){
//     struct employee eshwar; //This is how a structure is used.
//     struct employee rohan;
//     eshwar.Id = 10;
//     eshwar.yourchoi='E';
//     eshwar.salary= 24000;
//     cout<<"the salary of eshwar is "<<eshwar.salary<<endl;
//     return 0;
// }

// One way to create a structure is ny using typedef infront of the struct ---> This helps us to give a shortform to the long (struct employee) as (ep).
//  #include<iostream>
//  using namespace std;
//  typedef struct employee{
//      //data
//      int Id;
//      char yourchoi;
//      float salary;
//  }ep; //Now we call (struct employee) as (ep)

// int main(){
//     ep eshwar; //This is how a structure is used.
//     ep rohan;
//     eshwar.Id = 10;
//     eshwar.yourchoi='E';
//     eshwar.salary= 24000;
//     cout<<"the salary of eshwar is "<<eshwar.salary<<endl;
//     return 0;
// }

// Union is good for memory management
// In union we use shared memory in between all the variables created.
// A union is a user-defined type in which all members share the same memory location.
//  This definition means that at any given time, a union can contain no more than one object from its list of members.
//  It also means that no matter how many members a union has, it always uses only enough memory to store the largest member.
//  #include<iostream>
//  using namespace std;
//  union money
//  {
//      /* data */
//      int dollar;
//      float rupees;
//      char pounds;

// };

// int main(){
//     union money bank;
//     bank.dollar=80;
//     cout<<bank.dollar<<endl; //bank holds an int
//     bank.rupees=1;
//     cout<<bank.rupees<<endl;//bank holds a float now.
//     bank.pounds='e';
//     cout<<bank.pounds<<endl;//bank holds a char now.
//     return 0;
// }

// Enum data type:
// Enum in C++ is a data type that contains fixed set of constants.
// C++ Enums can be thought of as classes that have fixed set of constants.
//  #include<iostream>
//  using namespace std;
//  enum week{monday,tuesday,wed,thru,fri,sat,sun};// Here it will allocate index to each set and then we can not change those set of values and we can not even add anything to set even if object is created.
//  int main(){
//      week day;
//      day=fri;
//      cout<<"Day: "<< day+1; //Here as we can see fri was allocated with 4 and after that we incremented it.
//      return 0;
//  }
