//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//const int INF = 1e9;
//
//int n, m;
//int g[1005][1005] = { 0 };
////坐标,从哪个方向来
////0代表从左来,1代表从上来,2代表从下来
//int dp[1005][1005][3] = { 0 };
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> g[i][j];
//			for (int k = 0; k < 3; k++) {
//				dp[i][j][k] = -INF;
//			}
//		}
//	}
//	dp[0][0][0] = dp[0][0][1] = dp[0][0][2] = g[0][0];
//	for (int y = 0; y < m; y++) {
//		for (int x = 0; x < n; x++) {
//			for (int z = 0; z < 3; z++) {
//				if (x == 0 && y == 0)break;
//				//如果是从上来的,不能继承<从下方来的上一步>
//				if (z == 1 && x != 0) {
//					dp[x][y][z] = max({
//					dp[x][y][z],
//					//从左边来
//					(y - 1 >= 0 ? dp[x][y - 1][0] + g[x][y] : -INF),
//					//从上方来
//					(x - 1 >= 0 ? dp[x - 1][y][1] + g[x][y] : -INF)
//						});
//				}
//				//如果是从下来的,不能继承<从上方来的上一步>
//				else if (z == 2 && x != n - 1) {
//					dp[x][y][z] = max({
//					dp[x][y][z],
//					//从左边来
//					(y - 1 >= 0 ? dp[x][y - 1][0] + g[x][y] : -INF),
//					//从下方来
//					(x + 1 < n ? dp[x + 1][y][2] + g[x][y] : -INF)
//						});
//				}
//				//如果是从左来的,怎么样都行
//				else if (y != 0) {
//					dp[x][y][z] = max({
//						dp[x][y][z],
//						//从左边来
//						(y - 1 >= 0 ? dp[x][y - 1][0] + g[x][y] : -INF),
//						//从上方来
//						(x - 1 >= 0 ? dp[x - 1][y][1] + g[x][y] : -INF),
//						//从下方来
//						(x + 1 < n ? dp[x + 1][y][2] + g[x][y] : -INF)
//						});
//				}
//			}
//		}
//	}
//	int ans = -INF;
//	//不能从下边来,i不等于2
//	for (int i = 0; i < 2; i++) {
//		ans = max(ans, dp[n - 1][m - 1][i]);
//	}
//	cout << ans << endl;
//}