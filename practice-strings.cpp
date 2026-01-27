#include<iostream>
using namespace std;
#include<string>
#include<vector>
//i/p ->"abcabcd"
//Length of Longest substring without repeating characters
//o/p -> 4
int lengthLongSubstring(string & s){
    vector <int > last(256,-1);
    int left =0;
    int maxLen =0;
    for(int right=0;right<s.size();right++){
        if(last[s[i]] >= left){
            left = last[s[i]] +1;
        }
        last[s[i]] =i;
        maxLen = max(maxLen, right-left +1);//tracking the length of longest substring without repeating characters
    }
    return maxLen;
}
//Longest repeating character replacement
int characterReplacement(string s, int k){
    int left =0;
    int maxFreq =0;
    int maxLen =0;
    vector<int> freq(26,0);
    for(int right =0;right<s.size();right++){
        //updating the freq of element in the array
        freq[s[right]-'A']++;
        maxFreq= max(maxFreq, freq[s[right]-'A']);//updating max frequency       

        //if replacement needed > k -->> shrink window
        while((right -left+1)- maxFreq >k){
            freq[s[right]-'A']--;
            left++;
        }
        maxLen = max(maxLen, right-left +1);

    }
    return maxLen;

}

