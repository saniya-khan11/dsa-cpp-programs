//  Write a program to reverse each word in line(sentence)
#include<iostream>
#include<stack>
using namespace std;
string reverseWord(string & str){
    stack<char> st;
    string revString = "";
    int n = str.size();
    
    // Loop through the entire input string
    for (int i = 0; i < n; ++i) {
        char current_char = str[i];
        
        // 1. If the current character is NOT a space, push it onto the stack.
        // This is the beginning or middle of a word.
        if (current_char != ' ') {
            st.push(current_char);
        } 
        // 2. If the current character IS a space, it signifies the end of a word.
        // Pop all characters from the stack (reversing the word) and append a space.
        else {
            // Append the reversed word from the stack
            while (!st.empty()) {
                revString += st.top();
                st.pop();
            }
            // Append the space
            revString += ' ';
        }
    }
    
    // 3. After the loop, the stack will contain the characters of the last word.
    // Pop them and append them to the result.
    while (!st.empty()) {
        revString += st.top();
        st.pop();
    }
    
    return revString;
}
int main(){
    string s ="Hello this";
    cout << reverseWord(s);
    return 0;
}