#include<iostream>
#include<iomanip>

 using namespace std;
 
 int main(){

   int a = 34;
    cout<<"Here is the value of a "<<a<<endl;
    a = 45;
    cout<<"The value of a "<<a<<endl;
    a =56;
    cout<<"The value of a "<<a<<endl;
    a = 34;
    cout<<"The value of a "<<a<<endl;
    a = 23;
    cout<<"The value of a "<<a<<endl;
    a = 47;
    cout<<"The value of a  "<<a<<endl;
    a = 89;
    cout<<"The value of a "<<a<<endl;

    cout<<endl;
  
    //Constants C++:************************************

    const int ws = 34;

    cout<<" Here is the value of a is: "<<ws<<endl;

      const float v = 84.76; 

    cout<<" Here is the value of v is: "<<v<<endl;

     const float pi = 3.14;

     cout<<"The value of pi is : "<<pi<<endl;

    /* pi  = 5.67;
     cout<<"The value of pi is : "<<pi<<endl;*/

     // Manipulators in c++.........

     int r = 3, s = 84, m =8345;
     cout<<"The value of r without setw : "<<r<<endl;
     cout<<"The value of s without setw : "<<s<<endl;
     cout<<"The value of m without setw : "<<m<<endl;

     //with setw********  A no. arrange ........
     cout<<"The value of r  with setw  : "<<setw(4)<<r<<endl;
     cout<<"The value of s with setw  : "<<setw(4)<<s<<endl;
     cout<<"The value of m with setw  : "<<setw(4)<<m<<endl;

    //operoter Precedence

    int d = 5, g = 15;
    int j = d*10+20;
     cout<<j<<endl;

    int l =d*g+200;
    
    cout<<l<<endl;

    int x = ((d*40)+g)-47;
    cout<<x<<endl;
     



    return 0;

    //coding by Avinash Verma.......


 }

