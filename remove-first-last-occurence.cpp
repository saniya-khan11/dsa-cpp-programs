//Remove the first and last occurence of a character in a string
#include<iostream>
using namespace std;
#include<string>


/*Following code is not correct as it modify and iterate simultaneously 
string removeOcc(string & s, char ch){
    int n= s.size();
    int f_occ, l_occ;
    bool f_check=0, l_check = 0;
    for(int i=0;i<(n-1)/2;i++){
        if(s[i]==ch && f_check !=1){
            f_occ=i;
            s.erase(i,1);
            f_check =1;
        }
        if(s[(n-1)-i]== ch && l_check!=1){
            l_occ = (n-1)-i;
            s.erase((n-1)-i,1);
            l_check=1;
        }
        if(f_check == 1 && l_check == 1) return s;
    }
    return s;
}
*/
//correct code
string removeOcc (string &s , char ch){
    //first loop to capture first occurence
    n= s.size()
    int first_occ =-1, last_occ =-1;
    for(int i=0;i<n ;i++){
        if(s[i]==ch){
            first_occ = i;
            break;
        }
    }
    //if therre is no first occurence then return string unchanged
    if(first_occ == -1) return s;
    //second loop to capture last occurence
    for(int i=n-1;i>=0 ;i--){
        if(s[i]==ch){
            last_occ = i;
            break;
        }
    }
    //if first_occ and last_occ is same
    if(first_occ == last_occ){
        s.erase(first_occ,1);
        
    }
    else{
        //removing last_occ first so that the first_occ index remain unchanged
        s.erase(last_occ,1);
        s.erase(first_occ,1);
        
    }
    return s;
}

int main(){
    string s="hello world";
    cout<<removeOcc(s,'l');
}