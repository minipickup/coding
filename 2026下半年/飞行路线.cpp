//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
//#define MAXN 20005
//
//struct Edge {
//	int to;
//	int w;
//};
//
//int minCost[MAXN][15];
//int inq[MAXN] = { 0 };
//
//vector<Edge>g[MAXN];
//
//int main() {
//	int n, m, k, s, t;
//	cin >> n >> m >> k >> s >> t;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= k; j++) {
//			minCost[i][j] = 1e9;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		int x, y, z;
//		cin >> x >> y >> z;
//		g[x].push_back({ y,z });
//		g[y].push_back({ x,z });
//	}
//	queue<int>q;
//	q.push(s);
//	inq[s] = 1;
//	minCost[s][0] = 0;
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//		inq[u] = 0;
//		for (Edge v : g[u]) {
//			int update = 0;
//			for (int i = 0; i <= k; i++) {
//				int newMin = minCost[v.to][i];
//				newMin = min(newMin, minCost[u][i] + v.w);
//				if (i > 0)newMin = min(newMin, minCost[u][i - 1]);
//				if (newMin < minCost[v.to][i]) {
//					minCost[v.to][i] = newMin;
//					update = 1;
//				}
//			}
//			if (update && !inq[v.to]) {
//				q.push(v.to);
//				inq[v.to] = 1;
//			}
//		}
//	}
//	cout << minCost[t][k] << endl;
//}