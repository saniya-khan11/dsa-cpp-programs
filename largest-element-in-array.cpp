class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int lar =INT_MIN;
        for (int i=0;i<arr.size();i++){
            if(arr[i]>lar)
                lar = arr[i];
        }
        return lar;
        
    }
};
