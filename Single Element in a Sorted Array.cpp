int singleNonDuplicate(vector<int>& arr)
{
	int n=arr.size();
	if(arr[0]!=arr[1]){
		return arr[0];
	}
	if(arr[n-1]!=arr[n-2]){
		return arr[n-1];
	}
   int left=1;
   int right=arr.size()-2;
   while(left<=right){
	   int mid=left+(right-left)/2;
	   if(mid%2==0){
		   if(arr[mid]==arr[mid+1]){
			   left=mid+1;
		   }
		   else{
			   right=mid-1;
		   }
	   }
	   else{
		   if(arr[mid]==arr[mid-1]){
			   left=mid+1;
		   }
		   else{
			   right=mid-1;
		   }
	   }
   }
   return arr[left];
}
