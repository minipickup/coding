//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<vector>
//using namespace std;
//
//struct Edge {
//	int to;
//	int w;
//};
//
//struct Node {
//	int id;
//	int dist;
//	bool operator>(const Node& other)const {
//		return dist > other.dist;
//	}
//};
//
//int n, m, s;
//int dist[100005];
//int vis[100005];
//vector<Edge>g[100005];
//
//void dijkstra() {
//	priority_queue<Node, vector<Node>, greater<Node>>pq;
//	pq.push({ s,0 });
//	for (int i = 1; i <= n; i++) {
//		dist[i] = 1e9;
//	}
//	dist[s] = 0;
//	while (!pq.empty()) {
//		Node cur = pq.top();
//		pq.pop();
//		if (vis[cur.id])continue;
//		vis[cur.id] = 1;
//		for (Edge e : g[cur.id]) {
//			if (!vis[e.to] && cur.dist + e.w < dist[e.to]) {
//				dist[e.to] = cur.dist + e.w;
//				pq.push({ e.to,dist[e.to] });
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		cout << dist[i] << ' ';
//	}
//}
//
//int main() {
//	cin >> n >> m >> s;
//	int u, v, w;
//	for (int i = 0; i < m; i++) {
//		cin >> u >> v >> w;
//		g[u].push_back({ v,w });
//	}
//	dijkstra();
//}