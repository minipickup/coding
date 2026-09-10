//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int n, a, b;
//int pace[205];
//vector<int> g[205];
//
//int main() {
//	queue<int>q;
//	cin >> n >> a >> b;
//	for (int i = 1; i <= n; i++) {
//		pace[i] = 1e9;
//	}
//	for (int i = 1; i <= n; i++) {
//		int d;
//		cin >> d;
//		if (i - d >= 1) {
//			g[i].push_back(i - d);
//		}
//		if (i + d <= n) {
//			g[i].push_back(i + d);
//		}
//	}
//	q.push(a);
//	pace[a] = 0;
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//		for (int v : g[u]) {			
//			int newMin = min(pace[v], pace[u] + 1);
//			if (newMin < pace[v]) {
//				pace[v] = newMin;
//				q.push(v);
//			}
//		}
//	}
//	if (pace[b] != 1e9) {
//		cout << pace[b] << endl;
//	}
//	else {
//		cout << -1 << endl;
//	}
//}