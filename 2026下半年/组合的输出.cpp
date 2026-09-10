//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<iomanip>
//using namespace std;
//
//int n, r;
//int vis[25] = { 0 };
//vector<int>a;
//
//void printArr() {
//	for (int i = 0; i < r; i++) {
//		cout << setw(3) << a[i];
//	}
//	cout << endl;
//}
//
//void func(int cur,int cnt) {
//	if (cnt == r) {
//		printArr();
//		return;
//	}
//	for (int next = cur + 1; next <= n - (r - cnt) + 1; next++) {
//		a.push_back(next);
//		func(next, cnt + 1);
//		a.pop_back();
//	}
//}
//
//int main() {
//	cin >> n >> r;
//	for (int i = 1; i <= n - r + 1; i++) {
//		a.push_back(i);
//		func(i, 1);
//		a.pop_back();
//	}
//}