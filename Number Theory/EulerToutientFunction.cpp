#include <bits/stdc++.h>
using namespace std;
// sqrtN
template <typename T>
T ETF(T n) {
	T res = n;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			res /= i;
			res *= (i - 1);
			while (n % i == 0)  {
				n /= i;
			}
		}
	}
	if (n > 1) {
		res /= n;
		res *= (n - 1);
	}
	return res;
}
// Nlog(logN)
int phi[1000005];
void ETFSieve(int mx) { // Nlog(logN)
	for(int i=1; i<=mx; i++) {
		phi[i]=i;
	}
	for(int i=2; i<=mx; i++) {
		if(phi[i]==i) {
			for(int j=i; j<=mx; j+=i) {
				phi[j]/=i;
				phi[j]*=(i-1);
			}
		}
	}
}

int main() {
	cout << ETF(500) << "\n";
	ETFSieve(1000);
	cout<<phi[100]<<"\n";
}
