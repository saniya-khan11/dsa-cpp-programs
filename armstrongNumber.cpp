bool isArmstrong(int n){
    int sum=0;
    int temp;//for storing number
    temp =n;
    while(temp!=0){
        int digit = temp%10;
        sum+= (digit*digit*digit);
        temp=temp/10;
    }
    return sum==n;
}
