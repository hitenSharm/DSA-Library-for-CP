long long arr[1000001];
void primeFactorisation() {
	long long n=1000000;
	arr[0]=arr[1]=1;
	for(int i=2; i<=n; i++) {
		arr[i]=i;
	}
	for(int i=4; i<=n; i+=2) {
		arr[i]=2;
	}
	for(int i=3; i*i<=n; i++) {
		if(arr[i]==i) {
			for(int j=i*i; j<n; j+=i) {
				if(arr[j]==j) {
					arr[j]=i;
				}
			}
		}
	}
}
void printFactors(int n) {
	while (n != 1) {
		cout<<arr[n]<<" ";
		n /= arr[n];
	}
}
