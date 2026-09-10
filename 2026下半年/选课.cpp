//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int n, m;//n个节点,选m个
//int ans = 0;
//vector<int>g[305];//图
//int sz[305];//子树下的节点个数
//vector<int>score(1, 0);//子树根节点对应的学分
//int dp[305][305];//树i中选j个的最大学分
//
//int dfs(int u) {
//	//初始化,自身1个节点
//	for (int i = 1; i <= n; i++)dp[u][i] = -1e9;
//	sz[u] = 1;
//	dp[u][0] = 0;
//	dp[u][1] = score[u];
//	//叶子
//	if (g[u].empty())return 1;
//
//	for (int v : g[u]) {
//		int childSz = dfs(v);
//		int temp[305];
//		for (int i = 1; i <= m; i++)temp[i] = -1e9;
//		for (int i = 1; i <= min(m, sz[u]); i++) {
//			if (dp[u][i] == -1e9)continue;
//			for (int j = 0; i + j <= min(m, sz[u] + childSz); j++) {
//				if (dp[v][j] == -1e9)continue;
//				temp[i + j] = max(temp[i + j], dp[u][i] + dp[v][j]);
//			}
//		}
//		for (int i = 1; i <= min(m, sz[u] + childSz); i++) {
//			dp[u][i] = temp[i];
//		}
//		sz[u] += childSz;
//	}
//	return sz[u];
//}
//
//int main() {
//	cin >> n >> m;
//	int k, s;
//	for (int i = 1; i <= n; i++) {
//		cin >> k >> s;
//		g[k].push_back(i);
//		score.push_back(s);
//	}
//	dfs(0);
//	cout << dp[0][m] << endl;
//}