int elementThatAppearsOnce(vector<int> arr) {
	vector<int>freq(32,0);
	for(int i=0;i<32;i++){
		for(int j=0;j<arr.size();j++){
			if(arr[j]&(1<<i)){
				freq[i]++;
			}
		}
	}
	int p=1;
	int ans=0;
	for(int i=0;i<freq.size();i++){
		int mod=freq[i]%3;
		ans+=(mod)*p;
		p=2*p;
	}
	return ans;
}
