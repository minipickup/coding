//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int n, m;
//int sz[305];
//int score[305];
//vector<int>g[305];
//int dp[305][305];
//
//void dfs(int u) {
//	dp[u][0] = 0;
//	dp[u][1] = score[u];
//	for (int i = 2; i <= m + 1; i++)dp[u][i] = -1e9;
//	sz[u] = 1;
//	for (int v : g[u]) {
//		dfs(v);
//		int temp[305];
//		for (int i = 1; i <= m + 1; i++)temp[i] = -1e9;
//		for (int i = 1; i <= min(m + 1,sz[u]); i++) {
//			for (int j = 0; j <= min(m, sz[v]) && (i + j) <= min(m + 1, sz[u] + sz[v]); j++) {
//				temp[i + j] = max(temp[i + j], dp[u][i] + dp[v][j]);
//			}
//		}
//		sz[u] += sz[v];
//		for (int i = 1; i <= m + 1; i++) {
//			dp[u][i] = temp[i];
//		}
//	}
//} 
//
//int main() {
//	cin >> n >> m;
//	score[0] = 0;
//	int k, s;
//	for (int i = 1; i <= n; i++) {
//		cin >> k >> s;
//		g[k].push_back(i);
//		score[i] = s;
//	}
//	dfs(0);
//	cout << dp[0][m + 1] << endl;
//}