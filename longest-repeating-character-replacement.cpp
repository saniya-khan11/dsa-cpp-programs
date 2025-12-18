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