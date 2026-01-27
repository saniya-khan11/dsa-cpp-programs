//this is the simple program for finding minimum and maximum element in an array without taking into consideration less no. of comparisons
class Solution{
    public:
    vector<int> getMinMax(vector<int> &arr){
         if (arr.empty()) return {};   // edge case

        int mini = arr[0], maxi = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < mini) mini = arr[i];
            else if (arr[i] > maxi) maxi = arr[i];
        }
        return { mini, maxi};
    }
};
int main(){
    Solution obj;
    vector<int> arr1 ={2,5,4,6,-1,0,8,10,1};
    vector<int> result = obj.getMinMax(arr1);
    if (result.empty()) {
        cout << "Array is empty" << endl;
    } else {
        cout << "Minimum element: " << result[0] << endl;
        cout << "Maximum element: " << result[1] << endl;
    }

    return 0;
}
