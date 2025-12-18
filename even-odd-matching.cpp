/*
 Write a program to accept a line from user and find
 a.)no of odd words present
 b.)no of even words present
 c.)no of word representing the set(is,of,on and the)
*/
#include<iostream>
#include <sstream>
using namespace std;
string toLower(string s) {
    for (char &c : s)
        c = tolower(c);
    return s;
}

int main(){
    set<string> wordSet ={ "is","of","on","the"};
    cout<<"Enter your string:";
    string input;
    getlne(cin,input);
    stringstream ss(input);
    string word;
    int countEven=0;
    int countOdd =0;
    int countSetWord=0;
     while (ss >> word) {
        string lowerWord = toLower(word);
        if(lowerWOrd.size()%2 == 0) countEven++;
        else countOdd++;
        if(wordSet.find(word))
            countSetWord++;
     }
     cout<<"Even words :"<<countEven<<endl;
     cout<<"Odd words :"<<countOdd<<endl;
     cout<<"Set words :"<<countSetWord<<endl;
return 0;
}