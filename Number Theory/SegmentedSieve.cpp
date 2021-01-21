vector<bool > primevis(1000009,1);
vector<long long > primes;
void sieve() {
	long long max = 1000005;
	primevis[0]=0, primevis[1]=0;
	for(int i=2; i*i<=max; i++) {
		if (primevis[i] == 1) {
			for (int j = i * i; j <= max; j += i) {
				primevis[j] = 0;
			}
		}
	}
	for(int i=0; i<max; i++) {
		if (primevis[i]) {
			primes.pb(i);
		}
	}
}
void print(int l, int r) {
	if(l==1) l++;
	int mx=r-l+1;
	vector<int > v(mx, 1);
	for(auto p:primes) {
		if(p*p<=r) {
			int i=(l/p)*p;
			if(i<l)
				i+=p;
			for(;i<=r; i+=p) {
				if(i!=p) {
					v[i-l]=0;
				}
			}
		}
	}
	for(int i=0; i<mx; i++) {
		if(v[i])
			cout<<l+i<<"\n";
	}
} 
