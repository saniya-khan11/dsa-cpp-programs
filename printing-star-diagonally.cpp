// Print * diagonally...
//1. increasing triangle of space
#include<iostream>
using namespace std;
int main(){
    //outer loop for  rows
    int n=10;
    for(int i=1;i<=n;i++){
        //increasing triangle of space
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        //printing star diagonally
        for(int j=1;j<2;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}