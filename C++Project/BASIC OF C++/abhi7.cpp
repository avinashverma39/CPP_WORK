#include<iostream>
using namespace std;
int c = 445;

int main(){
    int a, b, c;
    
    cout<<"Enter the value of a:"<<endl;
    cin>>a;

    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    c = a + b;
    cout<<"The sum is "<<c<<endl;

    cout<<endl;
    
    cout<<" The value of c is "<<::c;

    cout<<endl;

    cout<<endl;



    //***********Literales Data Types **********/

   float d = 37.7f;
    long double e = 45.9l;
    cout<<"The value of d is  "<<d<<endl<<"The  value of e is  "<<e<<endl;

    cout<<"The size of 37.7f is "<<sizeof(37.7f)<<endl;
    cout<<"The size of 37.7F is "<<sizeof(37.7F)<<endl;
    cout<<"The size of 37.7l is "<<sizeof(37.7l)<<endl;
    cout<<"The size of 37.7L is "<<sizeof(37.7L)<<endl;
    cout<<"The size of 37.7 is "<<sizeof(37.7)<<endl;
    


    cout<<endl;


//***************Referenc Variabeles********************* */

float x  = 455;
float & y = x;
cout<<x<<endl;

cout<<y<<endl;

cout<<endl;

/*******************Typecasting**********************/
int t = 46;

float u = 67.89;

cout<<"The value of a is "<<(float)t <<endl;

cout<<"The value of a is "<<float(t) <<endl;


cout<<"The value of b is "<<(int)u <<endl;

cout<<"The value of b  is "<<int(u)<<endl;

cout<<endl;
cout<<endl;


cout<<"The exprression is   "<<t+u<<endl;
cout<<"The exprression is   "<<t+int(u)<<endl;
cout<<"The exprression is   "<<t+float(u)<<endl;
cout<<"The exprression is   "<<u+int(t)<<endl;

cout<<endl;
cout<<endl;

cout<<"Edited By Avinash Verma";

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

    return 0;
}

//coding by Avinash Verma 