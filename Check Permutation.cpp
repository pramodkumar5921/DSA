bool isPermutation(char input1[], char input2[]) {
    int arr1[256]={0};
    int n=strlen(input1);
    // int arr2[256]={0};
    for(int i=0;i<n;i++){
        arr1[input1[i]]++;
    }
    for(int i=0;i<n;i++){
        arr1[input2[i]]--;
    }
    for(int i=0;i<256;i++){
      if(arr1[i]!=0){
          return false;
      }
    }
    return true;
}
