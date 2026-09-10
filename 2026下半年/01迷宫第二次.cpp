//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//int n, m;
//int vis[1005][1005] = { 0 };
//int ans[1000005] = { 0 };
//int cnt = 0;
//
//struct Point {
//	int r;
//	int c;
//	int v;
//}g[1005][1005];
//
//void bfs(int x, int y, int id) {
//	queue<Point>q;
//	q.push(g[x][y]);
//	vis[x][y] = id;
//	cnt++;
//	while (!q.empty()) {
//		Point u = q.front();
//		q.pop();
//		if (u.r - 1 >= 1 && !vis[u.r - 1][u.c] && u.v != g[u.r - 1][u.c].v) {
//			q.push(g[u.r - 1][u.c]);
//			vis[u.r - 1][u.c] = id;
//			cnt++;
//		}
//		if (u.r + 1 <= n && !vis[u.r + 1][u.c] && u.v != g[u.r + 1][u.c].v) {
//			q.push(g[u.r + 1][u.c]);
//			vis[u.r + 1][u.c] = id;
//			cnt++;
//		}
//		if (u.c - 1 >= 1 && !vis[u.r][u.c - 1] && u.v != g[u.r][u.c - 1].v) {
//			q.push(g[u.r][u.c - 1]);
//			vis[u.r][u.c - 1] = id;
//			cnt++;
//		}
//		if (u.c + 1 <= n && !vis[u.r][u.c + 1] && u.v != g[u.r][u.c + 1].v) {
//			q.push(g[u.r][u.c + 1]);
//			vis[u.r][u.c + 1] = id;
//			cnt++;
//		}
//	}
//	ans[id] = cnt;
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		string s;
//		cin >> s;
//		for (int j = 1; j <= n; j++) {
//			g[i][j].r = i;
//			g[i][j].c = j;
//			g[i][j].v = s[j - 1] - '0';
//		}
//	}
//	int id = 1;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (!vis[i][j]) {
//				cnt = 0;
//				bfs(i, j, id);
//				id++;
//			}
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		int x, y;
//		cin >> x >> y;
//		cout << ans[vis[x][y]] << endl;
//	}
//}