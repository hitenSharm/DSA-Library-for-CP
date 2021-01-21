int dist[maxn][maxn];
bool vis[maxn][maxn];
ll N, M;
bool isValid(int x, int y) {
	if(x<0 || x>N || y<0 || y>M) {
		return 0;
	}
	if(vis[x][y] == 1) {
		return 0;
	}
	return 1;
}
int dx[]={-1, 0, 1, 0, 1, 1, -1, -1};
int dy[]={0, 1, 0, -1, 1, -1, 1, -1};
void bfs(int X, int Y) {
	queue<pair<int, int>> q;
	q.push({X, Y});
	vis[X][Y]=1;
	dist[X][Y]=0;
	while(!q.empty()) {
		int curX = q.front().first;
		int curY = q.front().second;
		q.pop();
		for(int i=0; i<8; i++) {
			if(isValid(curX+dx[i], curY+dy[i])) {
				int newX = curX+dx[i];
				int newY = curY+dy[i];
				q.push({newX, newY});
				vis[newX][newY] = 1;
				dist[newX][newY] = dist[curX][curY] + 1;
			}
		}
	}
}
