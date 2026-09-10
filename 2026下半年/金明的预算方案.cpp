//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int n, m;
//struct Item {
//	int v;
//	int w;
//};
//
////处理附属的方法,结构体,多个下标一一对应的数组
//
//int main() {
//	cin >> n >> m;
//	vector<Item>main_item(m + 1);
//	vector<Item>annex1(m + 1);
//	vector<Item>annex2(m + 1);
//	vector<int>annex_cnt(m + 1, 0);
//	vector<int>dp(n + 1, 0);
//	for (int i = 1; i <= m; i++) {
//		int v, p, q;
//		cin >> v >> p >> q;
//		if (q == 0) {
//			main_item[i] = { v,v * p };
//		}
//		else {
//			if (annex_cnt[q] == 0) {
//				annex1[q] = { v,v * p };
//			}
//			else {
//				annex2[q] = { v,v * p };
//			}
//			annex_cnt[q]++;
//		}
//	}
//
//	for (int i = 1; i <= m; i++) {
//		if (main_item[i].v == 0)continue;
//		int v0 = main_item[i].v;
//		int w0 = main_item[i].w;
//		int v1 = annex1[i].v;
//		int w1 = annex1[i].w;
//		int v2 = annex2[i].v;
//		int w2 = annex2[i].w;
//		for (int j = n; j >= 0; j--) {
//			if (j >= v0) {
//				dp[j] = max(dp[j], dp[j - v0] + w0);
//			}
//			if (j >= v0 + v1) {
//				dp[j] = max(dp[j], dp[j - v0 - v1] + w0 + w1);
//			}
//			if (j >= v0 + v2) {
//				dp[j] = max(dp[j], dp[j - v0 - v2] + w0 + w2);
//			}
//			if (j >= v0 + v1 + v2) {
//				dp[j] = max(dp[j], dp[j - v0 - v1 - v2] + w0 + w1 + w2);
//			}
//		}
//	}
//	cout << dp[n] << endl;
//}