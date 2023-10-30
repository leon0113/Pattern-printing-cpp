#include<iostream>
using namespace std;

int main(void)
{
    char text[3];
    text[0] = 'H';
    text[1] = 'i';
    text[2] = '!';
    int len = 3;
    for(int i = 0; i < len; i++){
        printf("%i ", text[i]);  // 72 105 33
    }
}