/*
wap to print the following pattern with sum. 
ex:-if input =5 
then output = 
1 1 
2 3 5 
4 5 6 15 
7 8 9 10 34 
11 12 13 14 15 65 
*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int start =1;// starting no. of each row
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=1;j<=i;j++){
            cout<<start<<" ";
            sum+=start;
            start++;
        }
        cout<<sum<<endl;
    }
    return 0;
}