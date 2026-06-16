#include<iostream>
#include<string>
using namespace std;
class Father{
    public:
    void Work(){
        cout<<"Father Works in the office "<<endl;

    }
};
class Mother{
    public:
    void Cook () {
       cout<<"Mother Cooks Food "<<endl;
    
    }
};
class Child : public Father , public Mother{
    public:
    void Play() {
       cout<<"Child Play Games ";

    }
};
int main(){
 system("cls");
  Child c;
  c.Work();
  c.Cook();
  c.Play();
    
    return 0;
}