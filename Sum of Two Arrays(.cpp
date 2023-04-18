void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int i=size1-1;
    int j=size2-1;
    int carry=0;
    int n=max(size1,size2);
    while(i>=0 and j>=0){
        int sum=input1[i]+input2[j]+carry;
        carry=sum/10;
        if(sum>9){
            sum=sum%10;
        }
        output[n]=sum;
        i--;j--;n--;
    }
    while(i>=0){
        int sum=input1[i]+carry;
        carry=sum/10;
        if(sum>9){
            sum=sum%10;
        }
        output[n]=sum;
        n--,i--;
    }
    while(j>=0){
        int sum=input2[j]+carry;
        carry=sum/10;
        if(sum>9){
            sum=sum%10;
        }
        output[n]=sum;
        n--,i--;
    }
    if(carry>0){
        output[0]=carry;
    }
}
