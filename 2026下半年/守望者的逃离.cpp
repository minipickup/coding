//#include<iostream>
//#include<algorithm>
//using namespace std;
//int m, s, t;
//int dp[5][1005] = {0};
//int main() {
//	cin >> m >> s >> t;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j <= m + 20; j++) {
//			dp[i][j] = -1e9;
//		}
//	}
//	int ans = 0;
//	dp[0][m] = 0;
//	for (int i = 1; i <= t; i++) {
//		int cur = i % 5;
//		int prev1 = (i - 1) % 5;
//		int prev2 = (i - 2) % 5;
//		int prev3 = (i - 3) % 5;
//		int prev4 = (i - 4) % 5;
//
//		for (int j = 0; j <= m + 20; j++) {
//			dp[cur][j] = -1e9;
//		}
//
//		for (int j = 0; j <= m + 20; j++) {
//			if (dp[prev1][j] != -1e9) {
//				dp[cur][j] = max(dp[cur][j], dp[prev1][j] + 17);
//			}
//			if (j + 10 <= m + 20 && dp[prev1][j + 10] != -1e9) {
//				dp[cur][j] = max(dp[cur][j], dp[prev1][j + 10] + 60);
//			}
//			if (j + 10 - 4 <= m + 20 && i >= 2 && dp[prev2][j + 10 - 4] != -1e9) {
//				dp[cur][j] = max(dp[cur][j], dp[prev2][j + 10 - 4] + 60);
//			}
//			if (j + 10 - 8 <= m + 20 && i >= 3 && dp[prev3][j + 10 - 8] != -1e9) {
//				dp[cur][j] = max(dp[cur][j], dp[prev3][j + 10 - 8] + 60);
//			}
//			if (j + 10 - 12 <= m + 20 && j + 10 - 12 >= 0 && i >= 4 && dp[prev4][j + 10 - 12] != -1e9) {
//				dp[cur][j] = max(dp[cur][j], dp[prev4][j + 10 - 12] + 60);
//			}
//			ans = max(ans, dp[cur][j]);
//			if (ans >= s) {
//				cout << "Yes" << endl << i << endl;
//				return 0;
//			}
//		}
//	}
//	cout << "No" << endl << ans << endl;
//}