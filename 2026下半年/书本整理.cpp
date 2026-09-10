//#include<iostream>
//using namespace std;
//
//int n, k;
//int w[105];
//int fucked[105] = { 0 };
//int dp[105][105];//Ç°i±¾,³éj±¾
//
//int main() {
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) {
//		int len;
//		cin >> len >> w[i];
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j < i; j++) {
//			dp[i][j] = 1e9;
//		}
//	}
//	dp[1][0] = 0;
//	for (int i = 2; i <= n; i++) {
//		for (int j = 0; j <= min(i-1,k); j++) {
//			for (int t = 1; t <= i; t++) {
//				if (fucked[t])continue;
//				int l, r = w[t];
//				int m = w[t];
//				int tt = t;
//				if (j != 0) {
//					do {
//						tt--;
//					} while (tt >= 1 && fucked[tt]);
//					l = w[tt];
//				}
//				else {
//					l = m;
//				}
//				tt = t;
//				if (j != i - 1) {
//					do{
//						tt++;
//					} while (tt <= n && fucked[tt]);
//					r = w[tt];
//				}
//				else {
//					r = m;
//				}
//				int a = dp[i][j-1] - abs(m - l) - abs(r - m) + abs(r - l);
//				if (a < dp[i][j]) {
//					dp[i][j] = a;
//					fucked[t] = 1;
//				}
//			}
//		}
//	}
//	cout << dp[n][k] << endl;
//}