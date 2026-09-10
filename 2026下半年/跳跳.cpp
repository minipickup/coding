//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n;
//int h[305];
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> h[i];
//	}
//	sort(h, h + n);
//	long long ans = 0;
//	int l = 0;
//	int r = n - 1;
//	ans = h[n - 1] * h[n - 1];
//	int toLeft = 1;
//	while (l <= r) {
//		ans += (h[r] - h[l]) * (h[r] - h[l]);
//		if (toLeft) {
//			r--;
//			toLeft = 0;
//		}
//		else {
//			l++;
//			toLeft = 1;
//		}
//	}
//	cout << ans << endl;
//}