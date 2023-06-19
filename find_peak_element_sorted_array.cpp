int findlargestelement(int arr[],int n){
    int i=0,j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(mid-1>=0 and mid+1<=n and  arr[mid+1]<arr[mid] and arr[mid-1]<arr[mid]){
            return mid;
        }
        else if(mid==0 and mid+1<=n and arr[mid+1]<arr[mid]){
            return mid;
        }
        else if(mid==n-1 and mid-1>=0 and arr[mid-1]<arr[mid]){
            return mid;
        }
        else if(arr[mid]>=arr[i]){
            i=mid+1;
        }
        else {
            j=mid-1;
        }
    }
    return -1;
}
