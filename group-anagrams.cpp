#include<iostream>
using namespace std;
#include <vector>
#include<string>

vector<vector<string>>  (vector<string> & strs){
    unordered_map <string, vector<string>> mp;
    for(string &s : strs){
        vector<int> freq(26,0);
        for(char ch: s){
            freq[ch-'a']++;
        }
        //building key for each string 
        string key="";
        for(int f :freq){
            key = '#'+ to_String(f);
        }
    
    mp[key].push_back(S);
}


vector <vector<string> result;
for(auto & entry : mp){
    result.push_back(entry.second);
}
return result;
}