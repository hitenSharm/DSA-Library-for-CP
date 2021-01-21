#include <bits/stdc++.h>
using namespace std;
long long F[1000006];
template <typename T>
class binomialCoefficient {
public:
	long long P = 1000000007;
	T power(T a, T n) {
		T res = 1;
		while (n) {
			if (n & 1) {
				res = (res * 1LL * a) % P;
			}
			n /= 2;
			a = (a * 1LL * a) % P;
		}
		return res;
	}
	void factorial() {
		for (T i = 2; i <= 1000001; i++) {
			F[i] = (F[i - 1] * 1LL * i) % P;
		}
	}
	T coefficient(T n, T k) {
		if (k > n) {
			return -1;
		}
		T res = F[n];
		res = (res * 1LL * power(F[k], P-2)) % P;
		res = (res * 1LL * power(F[n-k], P-2)) % P;
		return res;
	}
};
int main() {
	// In main()
	F[0] = F[1] = 1;
	binomialCoefficient<long long> nCr;
	nCr.factorial();
	int q;
	cin>>q;
	while(q--) {
		int n, k;
		cin>>n>>k;
		cout<<nCr.coefficient(n, k)<<"\n";
	}
	return 0;
}
