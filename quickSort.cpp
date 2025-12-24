
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
//this partition fxn will have the actual logic of quickSort algorithm because it is 
// placing the elements which is greater than pivot element to left and smaller one to the right
//and then returning the pivot index of the array
int partition(vector<int> &arr ,int st, int end){
    int idx =st-1,pivot =arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }

    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;


}
//quickSort function using recurrsion
void quickSort(vector <int> & arr, int st, int end){
    if(st<end){
        int pivotIndex =partition(arr,st,end);
        quickSort(arr,st,pivotIndex-1);//applying quickSort to left half of pivot element
        quickSort(arr,pivotIndex+1,end);//applying quickSort to right half of pivot element
    }
}
//drivers code
int main(){
    vector<int> arr ={5,2,6,4,1,3};
    quickSort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
return 0;
}