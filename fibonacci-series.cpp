#include<iostream>
using namespace std;
int main(){
    int n=10;
    int a=0,b=1;
    cout<<a<<","<<b;
    int next;
    for(int i=2;i<n;i++){
        next =a +b;
        a=b;
        b=next;
        cout<<","<<next;
    }
    return 0;
}