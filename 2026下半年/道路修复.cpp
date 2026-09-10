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
//struct town {
//	int c;
//	vector<int>a;
//};
//
//int n, m, k;
//int ans = 1e9;
//vector<Edge>g;
//vector<town>towns;
//int parent[10015];
//int Rank[10015] = { 0 };
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
//int kruskal(vector<Edge>& newG, int baseCost, int townCnt) {
//	int cnt = 0;
//	int sum = baseCost;
//	sort(newG.begin(), newG.end(), [](const Edge& a, const Edge& b) {
//		return a.w < b.w;
//		});
//	for (int i = 0; i < n + k; i++) {
//		parent[i] = i;
//		Rank[i] = 0;
//	}
//	for (const Edge& e : newG) {
//		if (unionSet(e.u, e.v)) {
//			cnt++;
//			sum += e.w;
//		}
//		if (cnt == n + townCnt - 1)break;
//	}
//	if (cnt == n + townCnt - 1) {
//		return sum;
//	}
//	else {
//		return -1;
//	}
//}
//
//int main() {
//	cin >> n >> m >> k;
//	int u, v, w;
//	for (int i = 0; i < m; i++) {
//		cin >> u >> v >> w;
//		g.push_back({ u - 1,v - 1,w });
//	}
//	int c;
//	for (int i = 0; i < k; i++) {
//		cin >> c;
//		towns.push_back({c});
//		for (int j = 0; j < n; j++) {
//			cin >> w;
//			towns[i].a.push_back(w);
//		}
//	}
//	for (int mask = 0; mask < (1 << k); mask++) {
//		vector<Edge>newG = g;
//		int baseCost = 0;
//		int townCnt = 0;
//		for (int i = 0; i < k; i++) {
//			int isInclude = (mask >> i) & 1;
//			if (isInclude) {
//				townCnt++;
//				baseCost += towns[i].c;
//				for (int j = 0; j < n; j++) {
//					newG.push_back({ i + n,j ,towns[i].a[j] });
//				}
//			}
//		}
//		ans = min(ans, kruskal(newG,baseCost, townCnt));
//	}
//	cout << ans << endl;
//}