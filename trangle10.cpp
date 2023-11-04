#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    for(int row = 1; row <= 5; row++){
        for(int col = 1; col<= 5-row; col++){
            cout<<"  ";
        }
        for(int col = row; col >= 1; col--){
            cout<<col<<" " ;
        }
        cout<<endl;
    }
}