//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<vector>
//using namespace	std;
//
//struct Node {
//	int id;
//	int dist;
//	bool operator>(const Node& other)const {
//		return dist > other.dist;
//	}
//};
//
//struct Edge {
//	int to;
//	int w;
//};
//
//int n, e;
//vector<Edge>g[2005];
//int dist[2005];
//int cnt[2005];
//int vis[2005];
//
//void dijkstra(int x) {
//	for (int i = 1; i <= n; i++) {
//		dist[i] = 1e9;
//		cnt[i] = 0;
//		vis[i] = 0;
//	}
//	priority_queue<Node, vector<Node>, greater<Node>>pq;
//	pq.push({ 1,0 });
//	dist[1] = 0;
//	cnt[1] = 1;
//	while (!pq.empty()) {
//		Node cur = pq.top();
//		pq.pop();
//		if (vis[cur.id])continue;
//		vis[cur.id] = 1;
//		for (const Edge& t : g[cur.id]) {
//			if (cur.dist + t.w < dist[t.to]) {
//				dist[t.to] = cur.dist + t.w;
//				cnt[t.to] = cnt[cur.id];
//				pq.push({ t.to, dist[t.to] });
//			}
//			else if (cur.dist + t.w == dist[t.to]) {
//				cnt[t.to] += cnt[cur.id];
//			}
//		}
//	}
//	if (dist[x] == 1e9) {
//		cout << "No answer" << endl;
//	}
//	else {
//		cout << dist[x] << ' ' << cnt[x] << endl;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n >> e;
//	int u, v, w;
//	for (int i = 0; i < e; i++) {
//		cin >> u >> v >> w;
//		auto it = find_if(g[u].begin(), g[u].end(), [v, w](Edge a) {
//			return (a.to == v) && (a.w == w);
//			});
//		if (it != g[u].end()) {
//			continue;
//		}
//		else {
//			g[u].push_back({ v,w });
//		}
//	}
//	dijkstra(n);
//}