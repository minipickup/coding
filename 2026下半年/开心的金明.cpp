//#include<iostream>
//#include<algorithm>
//using namespace std;
//int dp[30005] = { 0 };
//int m;
//int v[25] = { 0 };
//int w[25] = { 0 };
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> v[i] >> w[i];
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = n; j >= v[i]; j--) {
//			dp[j] = max(dp[j], dp[j - v[i]] + v[i]*w[i]);
//		}
//	}
//	cout << dp[n] << endl;
//}