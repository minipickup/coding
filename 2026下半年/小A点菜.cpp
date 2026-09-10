//#include<iostream>
//#include<algorithm>
//using namespace std;
//int n, m;
//int w[105];
//int dp[10005];
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> w[i];
//	}
//	dp[0] = 1;
//	for (int i = 0; i < n; i++) {
//		for (int j = m; j >= w[i]; j--) {
//			dp[j] += dp[j - w[i]];
//		}
//	}
//	cout << dp[m] << endl;
//}