//#include<iostream>
//using namespace std;
//
//int n, m;
//int a[100005];
//
//int main() {
//	cin >> n >> m;
//	long long r = 0;
//	int maxNum = -1e9;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		r += a[i];
//		maxNum = max(maxNum, a[i]);
//	}
//	long long cur = 0;
//	int cnt = 1;
//	int l = maxNum;
//	int mid;
//	int ans = 0;
//	bool isValid = 1;
//	while (l <= r) {
//		isValid = 1;
//		mid = l + (r - l) / 2;
//		cur = 0;
//		cnt = 1;
//		for (int i = 0; i < n; i++) {
//			if (cur + a[i] <= mid) {
//				cur += a[i];
//			}
//			else {
//				cnt++;
//				cur = a[i];
//				if (cnt > m) {
//					l = mid + 1;
//					isValid = 0;
//					break;
//				}
//			}
//		}
//		if (isValid) {
//			r = mid - 1;
//			ans = mid;
//		}
//	}
//	cout << ans << endl;
//}