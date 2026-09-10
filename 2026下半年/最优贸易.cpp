//#include<iostream>
//#include<queue>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//#define INF 1e9
//#define MAXN 100005
//
//int n, m;
//vector<vector<int>>g(MAXN), rg(MAXN);
//vector<int>maxPrice(MAXN);
//vector<int>minPrice(MAXN);
//vector<int>price(MAXN);
//
//void forward() {
//	for (int i = 1; i <= n; i++) {
//		minPrice[i] = INF;
//	}
//	queue<int> q;
//	q.push(1);
//	minPrice[1] = price[1];
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//		for (int v : g[u]) {
//			int newMin = min(minPrice[u], price[v]);
//			if (newMin < minPrice[v]) {
//				minPrice[v] = newMin;
//				q.push(v);
//			}
//		}
//	}
//}
//
//void backward() {
//	for (int i = 1; i <= n; i++) {
//		maxPrice[i] = -INF;
//	}
//	queue<int> q;
//	q.push(n);
//	maxPrice[n] = price[n];
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//		for (int v : rg[u]) {
//			int newMax = max(maxPrice[u], price[v]);
//			if (newMax > maxPrice[v]) {
//				maxPrice[v] = newMax;
//				q.push(v);
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n >> m;	
//	for (int i = 1; i <= n; i++) {
//		cin >> price[i];
//	}
//	for (int i = 0; i < m; i++) {
//		int x, y, z;
//		cin >> x >> y >> z;
//		g[x].push_back(y);
//		rg[y].push_back(x);
//		if (z == 2) {
//			g[y].push_back(x);
//			rg[x].push_back(y);
//		}
//	}
//
//	forward();
//	backward();
//
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		if (minPrice[i] != INF && maxPrice[i] != -INF) {
//			ans = max(ans, maxPrice[i] - minPrice[i]);
//		}
//	}
//	cout << ans << endl;
//}