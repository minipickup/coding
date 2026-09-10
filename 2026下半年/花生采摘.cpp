//#include<iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//struct shit {
//	int x;
//	int idx1;
//	int idx2;
//};
//
//bool the_sort(shit a, shit b) {
//	return a.x > b.x;
//}
//
//int m, n, k;
//shit a[1000] = { 0 };
//
//int main() {
//	cin >> m >> n >> k;
//	for (int i = 1; i <= m*n; i++) {
//		cin >> a[i].x;
//		a[i].idx1 = (i - 1) / n + 1;
//		a[i].idx2 = (i - 1) % n + 1;
//	}
//	sort(a + 1, a + m * n + 1, the_sort);
//	int t = k;
//	int n_x = 0, n_y = 0;
//	int cnt = 0;
//	for (int i = 1; i <= m * n;i++) {
//		if (a[i].x == 0)break;
//		int move_time;
//		if (cnt == 0) {
//			move_time = a[i].idx1;
//		}
//		else {
//			move_time = abs(a[i].idx1 - n_x) + abs(a[i].idx2 - n_y);
//		}
//		if (t >= move_time + 1 + a[i].idx1) {
//			t -= move_time + 1;
//			n_x = a[i].idx1;
//			n_y = a[i].idx2;
//			cnt += a[i].x;
//		}
//		else {
//			break;
//		}
//
//	}
//	cout << cnt << endl;
//}