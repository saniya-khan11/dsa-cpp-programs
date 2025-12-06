#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
void printDuplicate(string s){
    unordered_map <char,int> freq;

    //counting for each character
    for (char c :s){
        freq[c]++;
    }
    for(auto it : freq){
        if(it.second>1){
            cout<<"['"<<it.first<<"',"<<it.second<<"],";
        }
    }

}
int main(){
    string str ="abbacdeffghi";
    printDuplicate(str);
    return 0;
}