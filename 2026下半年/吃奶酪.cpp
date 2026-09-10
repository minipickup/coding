//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//
//struct Point {
//	double x;
//	double y;
//	int vis = 0;
//};
//
//int n;
//double ans = 1e9;
//vector<Point> cheese;
//
//void dfs(double curx, double cury, int ate, double curd) {
//	if (curd >= ans)return;
//	if (ate == n)ans = curd;
//	for (int i = 0; i < n; i++) {
//		if (cheese[i].vis)continue;
//		cheese[i].vis = 1;
//		double x = cheese[i].x;
//		double y = cheese[i].y;
//		double d = sqrt((curx - x) * (curx - x) + (cury - y) * (cury - y));
//		dfs(x, y, ate + 1, curd + d);
//		cheese[i].vis = 0;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n;
//	double x, y;
//	for (int i = 0; i < n; i++) {
//		cin >> x >> y;
//		cheese.push_back({ x,y });
//	}
//	dfs(0, 0, 0, 0);
//	cout << fixed << setprecision(2) << ans;
//}