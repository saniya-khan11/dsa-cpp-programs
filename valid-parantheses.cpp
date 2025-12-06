class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i=0;i<s.size();i++){
            //checking for opening brac in string
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                //closing  brac occur in string
                //checking if any opening brac in stack
                if(st.size()==0) return false;// string is invalid
                if((st.top()=='(' && s[i] == ')') ||
                   (st.top()=='{' && s[i] == '}') ||
                   (st.top()=='[' && s[i] == ']')){
                    
                    st.pop();
                   }
                else{
                    return false;//invalid string
                }
            }
        }
        return st.size()==0;//return true if no brac in stack, return false if there is remaining brac
    }
};