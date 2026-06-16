#include<iostream>
#include<string>
using namespace std;
class Number{
    int value;
    public:
    Number(int v){
        value = v;
    }
    Number operator+ (Number obj){
        return Number(value + obj.value);
    } 
    void display(){
        cout<<value;
    }
};
int main(){
 system("cls");
 Number n1(10);

 Number n2(20);

 Number sum = n1+n2;
   
 sum.display();
    
    return 0;
}