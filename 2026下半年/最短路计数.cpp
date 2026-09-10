//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<vector>
//using namespace std;
//
//int n, m;
//int dist[1000005];
//int cnt[1000005];
//vector<int> g[1000005];
//
//void bfs() {
//	queue<int>q;
//	for (int i = 1; i <= n; i++) {
//		dist[i] = 1e9;
//	}
//	dist[1] = 0;
//	cnt[1] = 1;
//	q.push(1);
//	while (!q.empty()) {
//		int cur = q.front();
//		q.pop();
//		for (int to : g[cur]) {
//			if (dist[cur] + 1 < dist[to]) {
//				dist[to] = dist[cur] + 1;
//				cnt[to] = cnt[cur];
//				q.push(to);
//			}
//			else if (dist[cur] + 1 == dist[to]) {
//				cnt[to] = (cnt[to] + cnt[cur]) % 100003;
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n >> m;
//	int u, v;
//	for (int i = 0; i < m; i++) {
//		cin >> u >> v;
//		g[u].push_back(v);
//		g[v].push_back(u);
//	}
//	bfs();
//	for (int i = 1; i <= n; i++) {
//		cout << cnt[i] << endl;
//	}
//}