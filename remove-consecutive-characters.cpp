class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        
        
        string result;
        for(int i=0;i<s.size();i++){
            if(i!= s.size()-1 && s[i]==s[i+1])
                continue;
            else{
                result+=s[i];
            }
        }
        return result;
    }
    
};