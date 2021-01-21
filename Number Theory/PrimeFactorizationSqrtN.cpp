#include <bits/stdc++.h>
using namespace std;
template <typename T>
void primeFactor(T n) {
	for(T i=2; i*i<=n; i++) {
		if(n%i==0) {
			T cnt = 0;
			while(n%i==0) {
				cnt++;
				n/=i;
			}
			cout<<i<<"^"<<cnt<<"\n";
		}
	}
	if(n>1) {
		cout<<n<<"^"<<1<<"\n";
	}
}
int main() {
	// primeFactor(23727);
	return 0;
}
