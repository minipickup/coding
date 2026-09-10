//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n, m;
////dp[i],(i,j)的最大值
//long long dp[1005] = { 0 };
//int g[1005][1005] = { 0 };
////up[i],从第j-1行过来,再从上来到(i,j)的最大值
//long long up[1005] = { 0 };
////down[i],从第j-1行过来,再从下来到(i,j)的最大值
//long long down[1005] = { 0 };
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> g[i][j];
//		}
//	}
//	dp[0] = g[0][0];
//	for (int i = 1; i < n; i++) {
//		dp[i] = dp[i - 1] + g[i][0];
//	}
//	for (int j = 1; j < m; j++) {
//		up[0] = dp[0] + g[0][j];
//		for (int i = 1; i < n; i++) {
//			up[i] = max(dp[i], up[i - 1]) + g[i][j];
//		}
//		down[n - 1] = dp[n - 1] + g[n - 1][j];
//		for (int i = n - 2; i >= 0; i--) {
//			down[i] = max(dp[i], down[i + 1]) + g[i][j];
//		}
//		for (int i = 0; i < n; i++) {
//			dp[i] = max(up[i], down[i]);
//		}
//	}
//	cout << dp[n - 1] << endl;
//	//力竭了,抄了AI的
//}