/*
Hill pattern of stars:
1. decreasing triangle of space
2. increasing triangle of star
3. increasing triangle of star
*/
#include<iostream>
using namespace std;
int main(){
    //outer loop for the row
    int n=5;
    for(int i=1;i<=n;i++){
        //inner loop 1- decreasing triangle of space
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        //inner loop 2- increasing triangle of star
        /*
        The following inner loop will not give us peak for hill thats
        why we will decrease its one column by putting ternminating condition 
        in for loop as j<i instead j<=i
        for(int j=1;j<=i;j++){
            cout<<"*";
        }*/
       for(int j=1;j<i;j++){
            cout<<"*";
        }
        //inner loop 3- increasing triangle of star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //moving to next row
        cout<<endl;
    }
    return 0;
}