//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//
//struct Point {
//	double x;
//	double y;
//	int vis = 0;
//};
//
//int n;
//double ans = 1e9;
//double dp[1 << 15][15];
//double dist[16][16];
//vector<Point> cheese;
//
//void func() {
//	for (int mask = 0; mask < (1 << n); mask++) {
//		for (int i = 0; i < n; i++) {
//			if (!(mask & (1 << i)))continue;
//			if (dp[mask][i] == 1e9)continue;
//			for (int j = 0; j < n; j++) {
//				if (mask & (1 << j))continue;
//				int newMask = mask | (1 << j);
//				dp[newMask][j] = min(dp[newMask][j], dp[mask][i] + dist[i][j]);
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		ans = min(ans, dp[(1 << n) - 1][i]);
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n;
//	double x, y;
//	for (int i = 0; i < n; i++) {
//		cin >> x >> y;
//		cheese.push_back({ x,y });
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			dist[i][j] = sqrt((cheese[i].x - cheese[j].x) * (cheese[i].x - cheese[j].x)
//				+ (cheese[i].y - cheese[j].y) * (cheese[i].y - cheese[j].y));
//			dist[j][i] = dist[i][j];
//		}
//		dist[n][i] = sqrt(cheese[i].x * cheese[i].x + cheese[i].y * cheese[i].y);
//		dist[i][n] = dist[n][i];
//	}
//	for (int i = 0; i < (1 << n); i++) {
//		for (int j = 0; j < n; j++) {
//			dp[i][j] = 1e9;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		dp[1 << i][i] = dist[n][i];
//	}
//	func();
//	cout << fixed << setprecision(2) << ans << endl;
//}