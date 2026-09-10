//#include<iostream>
//#include<algorithm>
//#include<queue>
//using namespace std;
//
//int n, m, s, t;
//int inq[2505] = { 0 };
//int dist[2505];
//
//struct Edge {
//	int to;
//	int w;
//};
//
//vector<Edge>g[2505];
//
//void spfa() {
//	queue<int>q;
//	q.push(s);
//	inq[s] = 1;
//	dist[s] = 0;
//	while (!q.empty()) {
//		int cur = q.front();
//		q.pop();
//		inq[cur] = 0;
//		for (Edge e : g[cur]) {
//			int newMin = dist[cur] + e.w;
//			if (newMin < dist[e.to]) {
//				dist[e.to] = newMin;
//				if (!inq[e.to]) {
//					q.push(e.to);
//					inq[e.to] = 1;
//				}
//			}
//		}
//	}
//	cout << dist[t] << endl;
//}
//
//struct Node {
//	int id;
//	int dist;
//	bool operator>(const Node& other)const {
//		return dist > other.dist;
//	}
//}nodes[2505];
//
//void dijkstra() {
//	priority_queue<Node, vector<Node>, greater<Node>>pq;
//	for (int i = 1; i <= n; i++) {
//		nodes[i].id = i;
//		nodes[i].dist = 1e9;
//	}
//	nodes[s].dist = 0;
//	pq.push(nodes[s]);
//	while (!pq.empty()) {
//		Node cur = pq.top();
//		pq.pop();
//		if (cur.id == t) {
//			cout << cur.dist << endl;
//			return;
//		}
//		if (cur.dist != nodes[cur.id].dist)continue;
//		for (Edge e : g[cur.id]) {
//			int newMin = cur.dist + e.w;
//			if (newMin < nodes[e.to].dist) {
//				nodes[e.to].dist = newMin;
//				pq.push({e.to, newMin});
//			}
//		}
//	}
//	cout << -1 << endl;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n >> m >> s >> t;
//	int u, v, w;
//	for (int i = 0; i < m; i++) {
//		cin >> u >> v >> w;
//		g[u].push_back({ v, w });
//		g[v].push_back({ u, w });
//	}
//	for (int i = 1; i <= n; i++) {
//		dist[i] = 1e9;
//	}
//	//spfa();
//	dijkstra();
//}