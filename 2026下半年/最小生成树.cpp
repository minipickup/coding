//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//struct Edge {
//	int u;
//	int v;
//	int w;
//};
//
//int n, m;
//int cnt = 0;
//int ans = 0;
//vector<Edge>g;
//int parent[100];
//int Rank[100] = { 0 };
//
//int find(int x) {
//	if (parent[x] != x) {
//		parent[x] = find(parent[x]);
//	}
//	return parent[x];
//}
//
//bool unionSet(int a, int b) {
//	int rootA = find(a);
//	int rootB = find(b);
//	if (rootA == rootB) {
//		return false;
//	}
//	
//	if (Rank[rootA] < Rank[rootB]) {
//		parent[rootA] = rootB;
//	}
//	else if (Rank[rootA] > Rank[rootB]) {
//		parent[rootB] = rootA;
//	}
//	else {
//		parent[rootB] = rootA;
//		Rank[rootA]++;
//	}
//	return true;
//}
//
//int main() {
//	cin >> n >> m;
//	int u, v, w;
//	for (int i = 0; i < m; i++) {
//		cin >> u >> v >> w;
//		g.push_back({ u,v,w });
//	}
//	sort(g.begin(), g.end(), [](const Edge& a, const Edge& b) {
//		return a.w < b.w;
//		});
//	for (int i = 0; i < n; i++) {
//		parent[i] = i;
//	}
//	for (Edge& e : g) {
//		if (unionSet(e.u, e.v)) {
//			cnt++;
//			ans += e.w;
//		}
//		if (cnt == n - 1)break;
//	}
//	if (cnt == n - 1) {
//		cout << ans << endl;
//	}
//	else {
//		cout << -1 << endl;
//	}
//}