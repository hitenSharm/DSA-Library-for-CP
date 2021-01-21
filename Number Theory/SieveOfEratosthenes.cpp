vector<bool > primevis(1000009,1);
vll primes;
void sieve() {
	ll max = 1000005;
	primevis[0]=0, primevis[1]=0;
	for(ll i=2; i*i<=max; i++) {
		if (primevis[i] == 1) {
			for (ll j = i * i; j <= max; j += i) {
				primevis[j] = 0;
			}
		}
	}
	rep(i, 0, max) {
		if (primevis[i]) {
			primes.pb(i);
		}
	}
}
