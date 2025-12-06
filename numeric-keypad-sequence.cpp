string printSequence(string S) {
    // code here.
    string arr[]={"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666",
                "7","77","777","7777","8","88","888","9","99","999","9999"};
                
string result ="";
for(int i=0;i<S.size();i++){
    if(S[i]== ' ') result+="0";
    else{
    int p= S[i] - 'A';
    result+=arr[p];
   } 
   
}
return result;
}