ll subsize[maxn];
ll dfs(ll node) {
	visited[node]=1;
	ll current_size=1;
	for(ll i:adj[node]) {
		if(!visited[i]) {
			current_size+=dfs(i);
		}
	}
	subsize[node]=current_size;
	return current_size;
}
