//#include<iostream>
//#include<algorithm>
//#include<iomanip>
//using namespace std;
//
//int n;
//int vis[10] = { 0 };
//int a[10];
//
//void dfs(int cnt) {
//	if (cnt == n) {
//		for (int i = 1; i <= n; i++) {
//			cout << setw(5) << a[i];
//		}
//		cout << endl;
//	}
//	for (int next = 1; next <= n; next++) {
//		if (vis[next])continue;
//		vis[next] = 1;
//		a[cnt + 1] = next;
//		dfs(cnt + 1);
//		vis[next] = 0;
//	}
//}
//
//int main() {
//	cin >> n;
//	dfs(0);
//}