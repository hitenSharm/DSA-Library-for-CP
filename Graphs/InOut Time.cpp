ll in[maxn];
ll out[maxn];
ll timer=1;
bool dfs(ll u) {
	visited[u]=1;
	in[u]=timer++;
	for(ll i:adj[u]) {
		if(!visited[i]) {
			dfs(i);
		}
	}
	out[u]=timer++;
}
