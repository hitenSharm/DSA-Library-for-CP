int piarr[100005];
void prefixFunction(string s) {
	int n=s.length();
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
void KMP(string s, string p) {
	prefixFunction(p);
	int prev=0;
	for(int i=0; i<s.length(); i++) {
		int l=prev;
		while(l>0 && (s[i]!=p[l]))  {
			l=piarr[l-1];
		}
		if(s[i]==p[l]) {
			l=l+1; 
		}
		prev=l;
		if(l==p.length()) {
			// occurence starting index
			cout<<i-p.length()+1<<" ";
		}
	}
}
