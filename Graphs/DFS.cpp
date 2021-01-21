void dfs(ll u) {
	visited[u]=1;
	for(ll i:adj[u]) {
		if(!visited[u]) {
			dfs(i);
		}
	}
}
bf
