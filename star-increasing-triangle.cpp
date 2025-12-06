#include <iostream>
using namespace std;
int main(){
    int n=5;
    //row no. is indicating everytime how many stars to print viz defined by variable i
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}