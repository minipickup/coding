//#include<iostream>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//int n;
//int cnt = 0;
//int visCol[15] = { 0 };
//int visM[30];
//int visA[30];
//int a[15];
//
//void dfs(int row) {
//	if (row == n + 1) {
//		cnt++;
//		if (cnt <= 3) {
//			for (int i = 1; i <= n; i++) {
//				cout << a[i] << ' ';
//			}
//			cout << endl;
//		}
//		return;
//	}
//	for (int col = 1; col <= n; col++) {
//		if (visCol[col])continue;
//		if (visM[row - col + n])continue;
//		if (visA[row + col])continue;
//		visCol[col] = 1;
//		visM[row - col + n] = visA[row + col] = 1;
//		a[row] = col;
//
//		dfs(row + 1);
//
//		visCol[col] = 0;
//		visM[row - col + n] = 0;
//		visA[row + col] = 0;
//	}
//	return;
//}
//
//int main() {
//	cin >> n;
//	dfs(1);
//	cout << cnt << endl;
//}