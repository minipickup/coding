//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int m, n;
//int g[105][105];
//int vis[105][105] = { 0 };
//int dp[105][105][2][2];
//int ans = 1e9;
//int dr[4] = { -1,1,0,0 };
//int dc[4] = { 0,0,-1,1 };
//
//void dfs(int r, int c, int used, int colour,int cost) {
//	if (cost > ans)return;
//	if (cost >= dp[r][c][used][colour])return;
//	dp[r][c][used][colour] = cost;
//	//当到达终点时,更新最小花费
//	if (r == m && c == m) {
//		ans = min(ans, cost);
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		int newR = r + dr[i];
//		int newC = c + dc[i];
//		//在棋盘内
//		if (newR <= m && newR >= 1 && newC <= m && newC >= 1&&!vis[newR][newC]) {
//			//颜色相同则不花费直接过去
//			if (g[newR][newC] == colour) {
//				vis[newR][newC] = 1;
//				dfs(newR, newC, 0, colour, cost);
//				vis[newR][newC] = 0;
//			}
//			//下一步颜色为空且cd好了,则使用魔法过去
//			else if (g[newR][newC] == -1 && used == 0) {
//				vis[newR][newC] = 1;
//				dfs(newR, newC, 1, colour, cost + 2);
//				vis[newR][newC] = 0;
//				vis[newR][newC] = 1;
//				dfs(newR, newC, 1, !colour, cost + 2 + 1);
//				vis[newR][newC] = 0;
//			}
//			//下一步颜色为空但cd没好,不走这
//			else if (g[newR][newC] == -1 && used == 1) {
//				continue;
//			}
//			//否则颜色不同,花米过去
//			else {
//				vis[newR][newC] = 1;
//				dfs(newR, newC, 0, g[newR][newC], cost + 1);
//				vis[newR][newC] = 0;
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> m >> n;
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= m; j++) {
//			g[i][j] = -1;
//		}
//	}
//	int x, y, c;
//	for (int i = 0; i < n; i++) {
//		cin >> x >> y >> c;
//		g[x][y] = c;
//	}
//	memset(dp, 0x3f, sizeof(dp));
//	vis[1][1] = 1;
//	dfs(1, 1, 0, g[1][1], 0);
//	if (ans == 1e9) {
//		cout << -1 << endl;
//	}
//	else {
//		cout << ans << endl;
//	}
//}