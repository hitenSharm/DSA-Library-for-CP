/******************************

	Author: LostMartian (Sahil Jitesh Gangurde)

*******************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int piarr[100005];
void prefixFunction(string s, int n) {
	piarr[0]=0;
	for(int i=1; i<n; i++) {
		int l=piarr[i-1];
		while(l>0 && (s[i]!=s[l]))  {
			l=piarr[l-1];
		}
		if(s[i]==s[l]) {
			l=l+1; 
		}
		piarr[i]=l;
	}
}
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s="ababbcbadac";
	prefixFunction(s, s.length());

	for(int i=0; i<s.length(); i++) {
		cout<<piarr[i]<<" ";
	}

	return 0;
}

