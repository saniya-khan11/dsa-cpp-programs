class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result ="";
        //sort the array
        sort(strs.begin(), strs.end());

        //get the first and last strings
        string first = strs[0];
        string last = strs[strs.size()-1];
        for(int i=0;i< first.size();i++){
            if(first[i] != last[i]) break;
            result+= first[i];
        }
        return result;


    }
};