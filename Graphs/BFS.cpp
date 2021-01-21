bool v[MAXN];
void bfs(int u) {
	queue<ll > q;
	q,push(u);
	v[u]=1;
	while(!q.empty()) {
		ll f=q.front();
		q.pop();
		cout<<f<<" ";
		for(auto i=adj[f].begin(); i!=adj[f].end(); i++) {
			if(!v[*i]) {
				q.push(*i);
				v[*i]=1;
			}
		}
	}
}
