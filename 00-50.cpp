#include<iostream>
using namespace std;

int main()
{
    int num = 10;
    cout<<"00"<<endl;
    for (int i = 1; i < 6; i++) {
        cout<<num<<endl;
        num = num + 10;
    }

    return 0;
}