//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//const int INF = 1e9;
//
//int n, m;
//int g[1005][1005] = { 0 };
//int dp[1005][1005] = { 0 };
//int vis[1005][1005] = { 0 };
//int dx[3] = { 0,1,-1 };
//int dy[3] = { 1,0,0 };
//
//void func(int x,int y,int val) {
//	if (val+g[x][y] <= dp[x][y]) {
//		return;
//	}
//	else {
//		dp[x][y] = val + g[x][y];
//	}
//	if (x == n - 1 && y == m - 1)return;
//	if (x == n - 1 && y == m - 1)dp[x][y] = max(dp[x][y], val + g[x][y]);
//	for (int i = 0; i < 3; i++) {
//		if (vis[x + dx[i]][y + dy[i]])continue;
//		if (x + dx[i] >= n || y + dy[i] >= m)continue;
//		if (x + dx[i] < 0 || y + dy[i] < 0)continue;
//		vis[x + dx[i]][y + dy[i]] = 1;
//		func(x + dx[i], y + dy[i], val + g[x][y]);
//		vis[x + dx[i]][y + dy[i]] = 0;
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> g[i][j];
//			dp[i][j] = -INF;
//		}
//	}
//	func(0, 0, 0);
//	cout << dp[n - 1][m - 1] << endl;
//	//不对,totally不对
//}