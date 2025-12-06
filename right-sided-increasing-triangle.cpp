/* Right triangle:-
1. Decreasing triangle of space.
2. Increasing triangle of star.
*/
#include <iostream>
using namespace std;
int main(){
    int n=5;
    //outer loop for rows.
    for (int i=1;i<=n;i++){
        //inner loop -1 : for decreasing space triangle
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        //inner loop -2 : for increasing star triangle
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //going to the next row/line
        cout<<endl;
    }
    return 0;
}