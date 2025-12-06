class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n= arr.size();
        for(int i=0,y=n-1;i<n/2;i++,y--){
            //performing swapping between ith and (n-1)th elements
            arr[i]= arr[i] + arr[y];
            arr[y]= arr[i]- arr[y];
            arr[i]= arr[i]- arr[y];
        }
        
    }
};