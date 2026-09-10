//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	int t[105] = { 0 };
//	for (int i = 1; i <= n; i++) {
//		cin >> t[i];
//	}
//	//int dp[105][105] = {0};
//	//for (int i = 2; i <= n; i++) {
//	//	dp[i][1] = 1e9;
//	//}
//	//int last = t[1];
//	////前i个人
//	//for (int i = 2; i <= n; i++) {
//	//	//第j个人为中心
//	//	for (int j = 1; j <= i; j++) {
//	//		dp[i][j] = dp[i - 1][j];
//	//		if (t[i] <= last) {
//	//			dp[i][j]++;
//	//			continue;
//	//		}
//	//		last = t[i];
//	//	}
//	//}
//	int l[105] = { 0 };//以i为结尾的最长上升子序列
//	int r[105] = { 0 };//以i为开头的最长下降子序列
//	for (int i = 1; i <= n; i++) {
//		l[i] = 1;
//		for (int j = 1; j < i; j++) {
//			if (t[j] < t[i]) {
//				l[i] = max(l[i], l[j] + 1);
//			}
//		}
//	}
//	for (int i = n; i >= 1; i--) {
//		r[i] = 1;
//		for (int j = n; j > i; j--) {
//			if (t[j] < t[i]) {
//				r[i] = max(r[i], r[j] + 1);
//			}
//		}
//	}
//	int res = 0;
//	for (int i = 1; i <= n; i++) {
//		res = max(res, l[i] + r[i] - 1);
//	}
//	cout << n-res << endl;
//}