//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//#define MAXN 5005
//#define INF 1e9
//
//struct Edge {
//	int to;
//	int w;
//};
//
//vector<Edge>g[MAXN];
//int inq[MAXN] = { 0 };
//int dist[MAXN];
//int cnt[MAXN] = { 0 };
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		dist[i] = INF;
//		g[0].push_back({ i,0 });
//	}
//	dist[0] = 0;
//	for (int i = 0; i < m; i++) {
//		int s, a, b, c;
//		cin >> s;
//		if (s == 3) {
//			cin >> a >> b;
//			g[a].push_back({ b,0 });
//			g[b].push_back({ a,0 });
//		}
//		else {
//			cin >> a >> b >> c;
//			if (s == 1) {
//				g[a].push_back({ b,-c });
//			}
//			if (s == 2) {
//				g[b].push_back({ a,c });
//			}
//		}
//	}
//	queue<int>q;
//	q.push(0);
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//		inq[u] = 0;
//		for (Edge v : g[u]) {
//			int newMin = dist[v.to];
//			newMin = min(newMin, dist[u] + v.w);
//			if (newMin < dist[v.to]) {
//				dist[v.to] = newMin;
//				if (!inq[v.to]) {
//					q.push(v.to);
//					inq[v.to] = 1;
//					cnt[v.to]++;
//					if (cnt[v.to] > n) {
//						cout << "No" << endl;
//						return 0;
//					}
//				}
//			}
//		}
//	}
//	cout << "Yes" << endl;
//}