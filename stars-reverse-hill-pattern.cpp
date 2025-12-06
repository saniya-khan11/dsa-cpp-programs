/*
Reverse hill patter:
1. increasing triangle of space
2. decreasing triangle of stars ( with one column less to attain peak)
3. decreasing triangle of stars
*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    //outer loop for the rows
    for(int i=1;i<=n;i++){
        //inner loop 1-increasing triangle of space
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //inner loop 2-decreasing triangle of stars ( with one column less to attain peak)
        for (int j=i;j<n;j++){
            cout<<"*";
        }
        //inner loop 3-decreasing triangle of stars
        for(int j=i;j<=n;j++){
            cout<<"*";
        }    
        cout<<endl;
    }
    return  0;
}