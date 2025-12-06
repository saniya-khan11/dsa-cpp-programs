#include<iostream>
using namespace std;
int main(){
    int n=5;
    //outer loop 1 to n
    for(int i=1;i<=n;i++){
        //inner loop i to n
        for(int j=i;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}