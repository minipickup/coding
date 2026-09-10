//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int n;
//long long price[5005];
//int dp[5005] = { 0 };
//int cnt[5005] = { 0 };
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> price[i];
//	}
//	for (int i = 1; i <= n; i++) {
//		dp[i] = 1;
//	}
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j < i; j++) {
//			if (price[j] > price[i]) {
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//		ans = max(ans, dp[i]);
//
//		//这段计数去重好难懂啊
//		for (int j = 1; j < i; j++) {
//			if (dp[i] == dp[j] && price[i] == price[j]) {
//				cnt[j] = 0;
//			}
//			else if (dp[i] == dp[j] + 1 && price[i] < price[j]) {
//				cnt[i] += cnt[j];
//			}
//		}
//		if (!cnt[i])cnt[i] = 1;
//		//这段计数去重好难懂啊
//
//	}
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		if (dp[i] == ans)sum += cnt[i];
//	}
//	cout << ans << ' ' << sum << endl;
//}