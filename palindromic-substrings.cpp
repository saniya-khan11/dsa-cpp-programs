#include<iostream>
#incude<vector>
#nclude<string>
using namespace std;

int countPalindromes(string s,int left, int right){
    int count =0;
    while(left>=0 && right<s.length() && s[left]==s[right]){
        count++;
        left--;
        right++;        
    }
    return count;
}
int countSubstrings(string s){
    int count =0;
    for(int i=0;i<s.size();i++){
        //counting for odd length palindrome centered around i
        count+= countPalindrome(s,i,i);
        //counting for even length palindrome centered between i, i+1
        count+= countPalindrome(s,i,i+1);
        
    }
    return count;
}