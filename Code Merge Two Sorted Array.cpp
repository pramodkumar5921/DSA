void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int k=0;
    int i=0,j=0;
    while(i<size1 and j<size2){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            i++;k++;
        }
        else{
            ans[k]=arr2[j];
            j++;k++;
        }
    }
    while(i<size1){
        ans[k]=arr1[i];
        k++;i++;
    }
    while(j<size2){
        ans[k]=arr2[j];
        k++;j++;
    }
    return;

}
