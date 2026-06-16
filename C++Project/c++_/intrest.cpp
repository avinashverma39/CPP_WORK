#include <iostream>
using namespace std;
int main(){
float principal , rate , time , intrest;
cout<<"enter the value of Intrest , rate ,time : ";
cin>>principal>> rate >> time;

intrest = (principal*rate*time ) /100;
cout<<endl;

cout<<"The simple intrest is "<<intrest;

    return 0;
}