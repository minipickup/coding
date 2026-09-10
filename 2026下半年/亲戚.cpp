//#include<iostream>
//#include<vector>
//using namespace std;
//
//class unionFind {
//private:
//	vector<int>parent;
//	vector<int>Rank;
//
//public:
//	unionFind(int n) {
//		parent.resize(n + 1);
//		Rank.resize(n + 1,0);
//		for (int i = 1; i <= n; i++) {
//			parent[i] = i;
//		}
//	}
//
//	int find(int x) {
//		if (parent[x] != x) {
//			parent[x] = find(parent[x]);
//		}
//		return parent[x];
//	}
//
//	void unite(int x, int y) {
//		int xParent = find(x);
//		int yParent = find(y);
//		if (xParent == yParent)return;
//		int RankX = Rank[xParent];
//		int RankY = Rank[yParent];
//		if (RankX > RankY) {
//			parent[yParent] = xParent;
//		}
//		else if (RankX < RankY) {
//			parent[xParent] = yParent;
//		}
//		else {
//			parent[yParent] = xParent;
//			Rank[xParent]++;
//		}
//	}
//
//	bool isConnected(int x, int y) {
//		return find(x) == find(y);
//	}
//};
//
//int main() {
//	int n, m, p;
//	cin >> n >> m >> p;
//	unionFind u(n);
//	int x, y;
//	for (int i = 0; i < m; i++) {
//		cin>> x >> y;
//		u.unite(x, y);
//	}
//	for (int i = 0; i < p; i++) {
//		cin >> x >> y;
//		if (u.isConnected(x, y)) {
//			cout << "Yes" << endl;
//		}
//		else {
//			cout << "No" << endl;
//		}
//	}
//}