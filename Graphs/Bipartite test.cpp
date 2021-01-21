bool visited[2002];
vector<ll > adj[2002];
ll col[2002];
void addedge(ll u, ll v) {
	adj[u].pb(v);
	adj[v].pb(u);
}
bool dfs(ll u, ll c) {
	visited[u] = 1;
	col[u] = c;
	for (ll i : adj[u]) {
		if (!visited[i]) {
			if (dfs(i, c ^ 1) == 0) {
				return 0;
			}
		}
		else {
			if (col[u] == col[i]) {
				return 0;
			}
		}
	}
	return 1;
}
