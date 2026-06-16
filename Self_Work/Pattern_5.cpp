#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cout<<"Enetr The Number : ";
    cin>>n;
     for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row<<"  ";
        }
        cout << endl;
       
    }
    return 0;
}