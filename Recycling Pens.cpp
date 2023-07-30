int solve(long long mid,long long n,long long r,long long k,long long c){
	long long remain_pen=n-mid;
	long long total=r+remain_pen*k;
	return mid<=(total)/c;

}
int recyclePens(int n, int r, int k, int c ){
long long left=0;
long long right=n;
long long ans=0;
while(left<=right){
	long long mid=left+(right-left)/2;
	if(solve(mid,n,r,k,c)){
		ans=mid;
		left=mid+1;
	}
	else{
		right=mid-1;
	}
}
	return ans;
	
}
