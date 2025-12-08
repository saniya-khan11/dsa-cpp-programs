/*
 Validate a password having total characters bet 8-10,
having no special character
Atleast one uppercase alphabet or one integer.
*/
#include<iostream>
using namespace std;
bool password(const string &s){
    int n= s.size();
    if(n<8 || n>10) return false;
    bool checkUpper = 0;
    bool checkNum =0;
    
    for(char c: s){
        // ASCII character:-
        //A-Z = 65 to 90
        //a-z = 97 to 122
        //0-9 = 48 to 57
        if(!((c>=65 && c<=90) || (c>=97 && c<=122) || (c>=48 && c<=57))) return false;
        if(c>=65 && c<=90) checkUpper = true;
      
        if(c>=48 && c<=57) checkNum =    true;

    }
    return(checkUpper || checkNum);
}
int main(){
    cout<<password("Hello123@");
    return 0;

}