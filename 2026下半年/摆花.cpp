//#include<iostream>
//using namespace std;
//
////int main() {
////	int n, m;
////	cin >> n >> m;
////	int dp[105][105] = {0};
////	int cnt[105] = { 0 };
////	for (int i = 0; i <= n; i++) {
////		dp[0][i] = 1;
////	}
////	//花盆数
////	for (int i = 1; i <= m; i++) {
////		//使用到第几个种类
////		for (int j = 1; j <= n; j++) {
////			memset(cnt, 0, sizeof(cnt));
////			//最后使用的种类
////			for (int k = 1; k <= j; k++) {
////				if (cnt[k] < k) {
////					dp[i][j] += dp[i - 1][j];
////					cnt[k]++;
////				}
////			}
////		}
////	}
////	cout << dp[m][n] << endl;
////}
//
//#define MOD 1000007
//int main() {
//	int n, m;
//	int a[105];
//	int dp[105] = { 0 };
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	dp[0] = 1;
//	//用到了前i种花
//	for (int i = 1; i <= n; i++) {
//		//共j的位置
//		for (int j = m; j >= 0; j--) {
//			//第i种花摆k盆
//			for (int k = 1; k <= a[i] && k <= j; k++) {
//				dp[j] = (dp[j] + dp[j - k]) % MOD;
//			}
//		}
//	}
//	cout << dp[m] << endl;
//}