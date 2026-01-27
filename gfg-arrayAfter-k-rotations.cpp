void rotateClockwise(vector<int> &arr, int k){
    int n= arr.size();
    if(n==0)    return ;
    k=k%n;//in case k is greater than n
    int i,j;
    //reverse last k elements
    for(int i =n-k,j=n-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    //reverse first n-k elements

    for(i=0,j=n-k-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

    }

    //reverse entire array
    for(i=0,j=n-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}