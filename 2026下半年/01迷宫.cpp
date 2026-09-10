//#include<iostream>
//using namespace std;
//
//int n, m;
//int g[1005][1005] = { 0 };
//int vis[1005][1005] = { 0 };
//int cnt;
//
//void dfs(int r, int c) {
//	if (r > n || c > n)return;
//	vis[r][c] = 1;
//	if (r - 1 >= 1 && !vis[r - 1][c] && g[r][c] != g[r - 1][c]) {
//		cnt++;
//		vis[r - 1][c] = 1;
//		dfs(r - 1, c);
//	}
//	if (r + 1 <= n && !vis[r + 1][c] && g[r][c] != g[r + 1][c]) {
//		cnt++;
//		vis[r + 1][c] = 1;
//		dfs(r + 1, c);
//	}
//	if (c - 1 >= 1 && !vis[r][c - 1] && g[r][c] != g[r][c - 1]) {
//		cnt++;
//		vis[r][c - 1] = 1;
//		dfs(r, c - 1);
//	}
//	if (c + 1 <= n && !vis[r][c + 1] && g[r][c] != g[r][c + 1]) {
//		cnt++;
//		vis[r][c + 1] = 1;
//		dfs(r, c + 1);
//	}
//	return;
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i <= n + 1;i++) {
//		vis[0][i] = 1;
//		vis[i][0] = 1;
//	}
//	for (int i = 1; i <= n; i++) {
//		string s;
//		cin >> s;
//		for (int j = 1; j <= n; j++) {
//			g[i][j] = s[j - 1] - '0';
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				vis[i][j] = 0;
//			}
//		}
//		int r, c;
//		cin >> r >> c;
//		cnt = 1;
//		dfs(r, c);
//		cout << cnt << endl;
//	}
//}