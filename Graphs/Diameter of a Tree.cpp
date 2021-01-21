ll dist[maxn];
bool dfs(ll u, ll distance) {
	visited[u]=1;
	dist[u]=distance;
	for(ll i:adj[u]) {
		if(!visited[i]) {
			dfs(i, distance+1);
		}
	}
}
ll diameterofaTree() {
	dfs(1, 0);
	ll maxdist=-1, U, V;
	for(ll i=1; i<=nodes; i++) {
		if(dist[i]>maxdist) {
			maxdist=dist[i];
			U=i;
		}
	}
	memset(dist, 0, sizeof(dist));
	memset(visited, 0, sizeof(visited));
	dfs(U, 0);
	maxdist=-1;
	for(ll i=1; i<=nodes; i++) {
		if(dist[i]>maxdist) {
			maxdist=dist[i];
		}
	}
	return maxdist;
}
