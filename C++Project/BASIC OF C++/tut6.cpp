#include<iostream> //iostream::headra file: System headra file:
//there are two types of headra file:
// 1. System headra file: It comes with the compiler

// 2. User define headra file: It is written by the programmer. milega cpp.reference.com//


//#include  "this.file" ''--> This will produce an error if this.file is not present

//in the (explorer) current directory:


   using namespace std;


      int main() {


          int a=8, b=4;

          std::cout<<"Operators in C++"<<endl;
         std::cout<<"Following are the types of operators in C++" <<endl;
           
          // Arithmetic operators:
          cout<<"The value of a+b is "<<a+b<<endl;
          cout<<"The value of a-b is "<<a-b<<endl;
          cout<<"The value of a*b is "<<a*b<<endl;
          cout<<"The value of a/b is "<<a/b<<endl;
          cout<<"The value of a%b is "<<a%b<<endl;
          cout<<"The value of a++ is "<<a++<<endl;
          cout<<"The value of a-- is "<<a--<<endl;
          cout<<"The value of ++a is "<<++a<<endl;
          cout<<"The value of --a is "<<--a<<endl;
          cout<<endl;
          
           //Assignment operators ---> used to assign value to variables
           // in a =3, b=5;
           //char d= 'D'
           // Comparison operators

         std::cout<<"Following are the comparison operators in C++" <<endl;

         cout<<"The value of a == b is "<<(a==a)<<endl;
         cout<<"The value of a != b is "<<(a!=a)<<endl;
         cout<<"The value of a >= b is "<<(a>=a)<<endl;
         cout<<"The value of a <= b is "<<(a<=a)<<endl;
         cout<<"The value of a < b is "<<(a<a)<<endl;
         cout<<"The value of a > b is "<<(a>a)<<endl;
         cout<<endl;

         // Logical operators

      std::cout<<"Following are the Logical operators in C++" <<endl;

      
       cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
         
       cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;

       cout<<"The value of this logical not operator (!(a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;

       cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<(!(a==b))<<endl;



         return 0;
                       
 }