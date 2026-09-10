//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//struct Edge {
//	int to;
//	int w;
//};
//
//int n, m;
//vector<Edge>g[3005];
//int dp[3005][3005];
//int sz[3005];
//int pay[3005];
//
//void dfs(int u) {
//	for (int i = 0; i <= m; i++)dp[u][i] = -1e9;
//	dp[u][0] = 0;
//	sz[u] = 0;
//	if (g[u].empty()) {
//		dp[u][1] = pay[u];
//		sz[u] = 1;
//		return;
//	}
//	for (Edge e : g[u]) {
//		int cost = e.w;
//		int v = e.to;
//		dfs(v);
//		int temp[3005];
//		for (int i = 0; i <= m; i++)temp[i] = -1e9;
//		for (int i = 0; i <= sz[u]; i++) {
//			for (int j = 1; j <= sz[v] && (i + j) <= min(m, sz[u] + sz[v]); j++) {
//				temp[i + j] = max(temp[i + j], dp[u][i] + dp[v][j] - cost);
//			}
//			//当不从v中选时
//			temp[i] = max(temp[i],dp[u][i]);
//		}
//		for (int i = 0; i <= min(m, sz[u] + sz[v]); i++)dp[u][i] = temp[i];
//		sz[u] += sz[v];
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	int k, a, c;
//	for (int i = 1; i <= n - m; i++) {
//		cin >> k;
//		for (int j = 0; j < k; j++) {
//			cin >> a >> c;
//			g[i].push_back({ a,c });
//		}
//	}
//	for (int i = n - m + 1; i <= n; i++) {
//		cin >> pay[i];
//	}
//	dfs(1);
//	for (int i = m; i >= 0; i--) {
//		if (dp[1][i] >= 0) {
//			cout << i << endl;
//			return 0;
//		}
//	}
//}