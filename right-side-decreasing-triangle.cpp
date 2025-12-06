/*
For right side decreasing triangle:
1. increasing triangle of space.
2. decreasing triangle of star*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    //outer loop for rows
    for(int i=1; i<=n;i++){
        //inner loop 1- increasing triangle of space
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //inner loop 2- decreasing triangle of stars
        for(int j= i;j<=n;j++){
            cout<<"*";
        }
        //moving to next row
        cout<<endl;
    }
    return 0;

}