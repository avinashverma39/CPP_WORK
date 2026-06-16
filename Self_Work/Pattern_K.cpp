#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    cout<<"Enter The Number : ";
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        cout<<"* ";
        for ( int col = 0; col < n; col++)
        {
           if (col== n/2-row ||  row == n/2+col)
           {
             cout<<"* ";
          
           }else
           {
            cout<<"  ";
           }
           
           
        }
        cout<<endl;
        
    }
    
    return 0;
}