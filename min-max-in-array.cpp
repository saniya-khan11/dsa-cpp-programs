class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int mini , maxi, i=0;
        if(arr.size()%2==1){ //array is odd
            mini = maxi =arr[i];
            i++;
        }
        else{// array is even
            if(arr[i]<arr[i+1]){
                mini=arr[i];
                maxi = arr[i+1];
            }
            else{
                mini=arr[i+1];
                maxi = arr[i];
            }
            i+=2;
        }
        //compairing elements pair wise
        while(i<=arr.size()-1){
            if(arr[i]<arr[i+1]){
                
                if (arr[i]<mini)
                    mini = arr[i];
                
                if (arr[i+1]>maxi)
                    maxi =arr[i+1];
                
            }
            else{ //arr[i]>arr[i+1]
                if(arr[i+1]<mini)
                    mini = arr[i+1];
                if(arr[i]>maxi)
                    maxi = arr[i];
            }
            i+=2;
        }
        return {mini, maxi};
    }
};