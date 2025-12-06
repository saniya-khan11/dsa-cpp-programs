class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        int i=0;
        int mini =INT_MAX;
        for(int i=0;(i+m-1)<a.size();i++){
            int diff = a[i+m-1]-a[i];
            if(diff<mini)
                mini=diff;
        }
        return mini;
    }
};