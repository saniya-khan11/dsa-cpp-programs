/*
wap to count the no. of string. 
ex:-if input string[]={“ravi”,”sonu”,”ravi”,”anand”} 
then output should be ravi=2, sonu=1, anand=1 
*/
#include<iostream>
using namespace std;
#include <unordered_map>
void countString(string  s[], int n){
    //array parameters decay to pointers- so we can't calculate size of array using sizeof() inside function
    unordered_map <string,int> count;
    
    
    for (int i =0;i<n;i++){
        count[s[i]]++;
        }
    for(auto it : count){
        cout<<it.first<<"="<<it.second<<", ";
    }
}
int main(){
    string s[] ={"ravi","sonu","ravi","anand"};
    int n = sizeof(s) / sizeof(s[0]);
    countString(s,n);
    
    return 0;
}