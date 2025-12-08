string WordsReversal(string & str){
    //reversing the whole sentence;
    reverse(str.begin(),str.end());
    //now reversing each word in a sentence
    int start =0;//tracking the start of each word in sentence
    int n= str.size();
    for(int i=0;i<=n;i++){
        if(i==n || str[i]==' '){
            //marks the end of a word
            reverse(str.begin()+start,str.begin()+i);
            start = i+1;
        }

        }
        return str;
    }