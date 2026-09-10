//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int n, k;
//vector<int>sticks;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n >> k;
//	int len;
//	for (int i = 0; i < n; i++) {
//		cin >> len;
//		sticks.push_back(len);
//	}
//	sort(sticks.begin(), sticks.end());
//	int r = sticks[n - 1];
//	int l = 1;
//	int m;
//	int ans = 0;
//	while (l <= r) {
//		int cnt = 0;
//		bool isValid = 0;
//		m = l + (r - l) / 2;
//		for (int i = 0; i < n; i++) {
//			cnt += sticks[i] / m;
//			if (cnt >= k) {
//				l = m + 1;
//				ans = m;
//				isValid = 1;
//				break;
//			}
//		}
//		if (!isValid) {
//			r = m - 1;
//		}
//	}
//	cout << ans << endl;
//}