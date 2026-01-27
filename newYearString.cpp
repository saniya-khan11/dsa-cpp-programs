#include<iostream>
#include<string>
int newYear(int t, int s, string &str){
    for(int i=0;i<=t;i++){
        int change =0;
        for(int j=0;j<s-4;j++){
            if(str[j]=='2'&& str[j+1]=='0'&&str[j+2]=='2'&& str[j+3]=='0'&& str[j+4]=='6')  return 0;
            if(str[j]=='2'&& str[j+1]=='0'&&str[j+2]=='2'&& str[j+3]=='0'&& str[j+4]=='5')  change =1;
        }
        return change;
    }
}
