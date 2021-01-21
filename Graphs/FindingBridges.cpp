ll in[maxn], low[maxn], timer;
// Bridge condition - low[child] > in[node]
void dfs(ll u, ll par) {
	visited[u] = 1;
	in[u] = low[u] = timer;
	timer++;
	for (ll child : adj[u]) {
		if (child == par) {
			continue;
		}
		if (visited[child]) {
			low[u] = min(in[child], low[u]);
		}
		else {
			dfs(child, u);
			if (low[child] > in[u]) {
				cout << u << " - " << child << " is a bridge\n";
			}
			low[u] = min(low[child], low[u]);
		}
	}
}
