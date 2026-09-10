//#include<iostream>
//#include<vector>
//using namespace std;
//
//int l, n, m;
//vector<int>a;
//
//bool check(int mid) {
//	int k = 0;
//	int u = 0;
//	int v = 1;
//	while (v < n + 2) {
//		if (a[v] - a[u] < mid) {
//			k++;
//			v++;
//			if (k > m)return false;
//		}
//		else {
//			u = v;
//			v++;
//		}
//	}
//	return true;
//}
//
//int main() {
//	cin >> l >> n >> m;
//	a.push_back(0);
//	int d;
//	for (int i = 0; i < n; i++) {
//		cin >> d;
//		a.push_back(d);
//	}
//	a.push_back(l);
//	int L = 0;
//	int R = l;
//	int mid;
//	int ans = l;
//	while (L<=R) {
//		mid = L + (R - L) / 2;
//		if (check(mid)) {
//			ans = mid;
//			L = mid + 1;
//		}
//		else {
//			R = mid - 1;
//		}
//	}
//	cout << ans << endl;
//}