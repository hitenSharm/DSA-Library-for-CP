/****************************************
	Author: LostMartian (Sahil Jitesh Gangurde)
	"Fix the cause, not the symptom."
****************************************/
#include <bits/stdc++.h>
using namespace std;
template <typename Arg1>
void pn(Arg1&& arg1) { cout << arg1 << "\n"; }
template <typename Arg1, typename... Args>
void pn(Arg1&& arg1, Args&&... args) { cout << arg1 << " "; pn(args...); }
template <typename Arg1>
void ps(Arg1&& arg1) { cout << arg1 << " "; }
template <typename Arg1, typename... Args>
void ps(Arg1&& arg1, Args&&... args) { cout << arg1 << " "; ps(args...); }
template <typename Arg1>
void rn(Arg1&& arg1) { cin >> arg1; }
template <typename Arg1, typename... Args>
void rn(Arg1&& arg1, Args&&... args) { cin >> arg1; rn(args...); }
template <typename T>
inline T _gcd(T a, T b) { while (b != 0)swap(b, a %= b); return a; }
template <typename T>
T ppow(T a, T b) {T res = (T)1; if (b == (T)0) {return (T)1;} while (b > (T)0) {if (b & (T)1) {res *= a;} a *= a; b /= (T)2;} return res;}
#define d(x) cout<<"Value of "#x" = "<<x<<"\n";
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
#define iAmSpeed ios_base::sync_with_stdio(false); cin.tie(NULL);
#define LOCAL freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define ll long long
#define rep(i,m,n) for(ll i=m; i<n; i++)
#define repr(i,m,n) for(ll i=m; i>=n; i--)
#define vll vector<ll >
#define vvl vector<vector<ll > >
#define pi pair<ll, ll >
#define vpi vector<pi >
#define umap unordered_map<ll, ll >
#define pb push_back
#define mk make_pair
#define sz size()
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define test ll t; cin>>t; while(t--)
#define ini(a, x) memset(a, x, sizeof(a))
bool primevis[100000000];
vll primes;
void sieve() {
	ll max = 100000000;
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

int main()
{
	clock_t z = clock();
	//LOCAL;
	iAmSpeed
	ini(primevis, true);
	sieve();
	for(int i=0; i<100000000; i+=100) {
		pn(primes[i]);
	}








	debug("Total Time: %.7f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}
