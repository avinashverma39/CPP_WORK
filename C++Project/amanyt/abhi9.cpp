#include<iostream>

using namespace std;
int main(){

    //cout<<"This is tutorial 9 ";

    int age;




    //selection control structer: if else ladder;;;;;;

   cout<<"Tell me Your Age"<<endl;
    cin>>age;
     /*if((age<18)  && (age>0)){

        cout<<"You cannot com to my party."<<endl;
     }

     else if(age<1){
   
        cout<<"You are not yet Born"<<endl;
     }
        else if(age==18){

            cout<<"You are a kid you will get a kid pass to the party."<<endl;
     }
else{
    cout<<"You can come to my party"<<endl;
}*/

//selection control structer;; Switch Case:statement

switch (age)
{
case 18:
    
    cout<<"You are 18"<<endl;     
  break;
    case 22:
    
    cout<<"You are 22"<<endl;

    break;

    cout<<"You are 2"<<endl;
    break;

default:

cout<<"No spical cases"<<endl;
    break;
}

cout<<"Your age is done";

return 0;

}


