//#include<iostream>
//#include<algorithm>
//using namespace std;
//int n;
//int beads[210] = { 0 };
//long long dp[210][210] = { 0 };
//long long ans = 0;
//
//////Ê§°ÜÁË
////int main() {
////	cin >> n;
////	for (int i = 0; i < n; i++) {
////		cin >> beads[i];
////	}
////	for (int i = 0; i < n; i++) {
////		long long shit = 0;
////		int k = i;
////		for (int j = 0; j < n-1; j++) {
////			shit += beads[(k + 1) % n]
////				* beads[(k + 2) % n];
////			k++;
////		}
////		ans = max(ans, beads[i] * shit);
////	}
////	cout << ans << endl;
////}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> beads[i];
//		beads[i + n] = beads[i];
//	}
//	for (int len = 2; len <= n; len++) {
//		for (int l = 0; l + len - 1 < 2 * n; l++) {
//			int r = l + len - 1;
//			for (int k = l; k < r; k++) {
//				dp[l][r] = max(
//					dp[l][r],
//					dp[l][k] + dp[k + 1][r] + beads[l] * beads[k + 1] * beads[r + 1]
//				);
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		ans = max(ans, dp[i][i + n - 1]);
//	}
//	cout << ans << endl;
//}