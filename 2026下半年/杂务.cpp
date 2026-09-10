//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int>dp(n + 1);
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		int id, time;
//		cin >> id >> time;
//		int pre;
//		dp[id] = time;
//		while (cin >> pre && pre) {
//			dp[id] = max(dp[id], dp[pre] + time);
//		}
//		ans = max(ans, dp[id]);
//	}
//	cout << ans << endl;
//}