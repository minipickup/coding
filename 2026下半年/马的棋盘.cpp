//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//
//struct Point {
//	int row;
//	int col;
//	int cnt = (int)1e9;
//	vector<Point*>to;
//};
//Point points[405][405];
//
//int main() {
//	int n, m, x, y;
//	cin >> n >> m >> x >> y;
//	for (int r = 1; r <= n; r++) {
//		for (int c = 1; c <= m; c++) {
//			points[r][c].row = r;
//			points[r][c].col = c;
//			if (r + 2 <= n && c + 1 <= m)points[r][c].to.push_back(&points[r + 2][c + 1]);
//			if (r + 2 <= n && c - 1 >= 1)points[r][c].to.push_back(&points[r + 2][c - 1]);
//			if (r - 2 >= 1 && c + 1 <= m)points[r][c].to.push_back(&points[r - 2][c + 1]);
//			if (r - 2 >= 1 && c - 1 >= 1)points[r][c].to.push_back(&points[r - 2][c - 1]);
//			if (r + 1 <= n && c + 2 <= m)points[r][c].to.push_back(&points[r + 1][c + 2]);
//			if (r + 1 <= n && c - 2 >= 1)points[r][c].to.push_back(&points[r + 1][c - 2]);
//			if (r - 1 >= 1 && c + 2 <= m)points[r][c].to.push_back(&points[r - 1][c + 2]);
//			if (r - 1 >= 1 && c - 2 >= 1)points[r][c].to.push_back(&points[r - 1][c - 2]);
//		}
//	}
//	queue<Point*>q;
//	q.push(&points[x][y]);
//	points[x][y].cnt = 0;
//	while (!q.empty()) {
//		Point* u = q.front();
//		q.pop();
//		for (Point*& v : u->to) {
//			if (v->cnt == 1e9) {
//				v->cnt = u->cnt + 1;
//				q.push(v);
//			}
//		}
//	}
//	for (int r = 1; r <= n; r++) {
//		for (int c = 1; c <= m; c++) {
//			if (points[r][c].cnt == 1e9) {
//				cout << -1 << ' ';
//			}
//			else {
//				cout << points[r][c].cnt << ' ';
//			}
//		}
//		cout << endl;
//	}
//}