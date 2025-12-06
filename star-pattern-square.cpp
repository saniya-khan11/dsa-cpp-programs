#include<iostream>
using namespace std;
int main(){
    int n=5;
    //outer loop for rows
    for(int i=0;i<n;i++){
        //inner loop for columns
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}