//#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<queue>
//using namespace std;
//
//struct State {
//	int r;
//	int c;
//	int used;
//	int colour;
//	int cost;
//	bool operator>(const State& other) const {
//		return cost > other.cost;
//	}
//};
//
//int m, n;
//int g[105][105];
//int dist[105][105][2][2];
//int dr[4] = { -1,1,0,0 };
//int dc[4] = { 0,0,-1,1 };
//
//int dijkstra() {
//	memset(dist, 0x3f, sizeof(dist));
//	priority_queue<State, vector<State>, greater<State>>pq;
//	pq.push({ 1,1,0,g[1][1],0 });
//	dist[1][1][0][g[1][1]] = 0;
//	while (!pq.empty()) {
//		State cur = pq.top();
//		pq.pop();
//		int r = cur.r;
//		int c = cur.c;
//		int used = cur.used;
//		int colour = cur.colour;
//		int cost = cur.cost;
//		if (r == m && c == m) {
//			return cost;
//		}
//		if (cost != dist[r][c][used][colour])continue;
//		for (int i = 0; i < 4; i++) {
//			int newR = r + dr[i];
//			int newC = c + dc[i];
//			if (newR > m || newR<1 || newC>m || newC < 1)continue;
//			if (g[newR][newC] == colour) {
//				int newMin = cost;
//				if (newMin < dist[newR][newC][0][colour]) {
//					dist[newR][newC][0][colour] = newMin;
//					pq.push({ newR,newC,0,colour,newMin });
//				}
//			}
//			else if (g[newR][newC] == -1 && used == 0) {
//				int newMin = cost + 2;
//				if (newMin < dist[newR][newC][1][colour]) {
//					dist[newR][newC][1][colour] = newMin;
//					pq.push({ newR,newC,1,colour,newMin });
//				}
//				newMin = cost + 3;
//				if (newMin < dist[newR][newC][1][!colour]) {
//					dist[newR][newC][1][!colour] = newMin;
//					pq.push({ newR,newC,1,!colour,newMin });
//				}
//			}
//			else if (g[newR][newC] == -1 && used == 1) {
//				continue;
//			}
//			else {
//				int newMin = cost + 1;
//				if (newMin < dist[newR][newC][0][g[newR][newC]]) {
//					dist[newR][newC][0][g[newR][newC]] = newMin;
//					pq.push({ newR,newC,0,g[newR][newC],newMin });
//				}
//			}
//		}
//	}
//	return -1;
//}
//int main() {
//	cin >> m >> n;
//	for (int i = 1; i <= m; i++) {
//		for (int j = 1; j <= m; j++) {
//			g[i][j] = -1;
//		}
//	}
//	int x, y, c;
//	for (int i = 0; i < n; i++) {
//		cin >> x >> y >> c;
//		g[x][y] = c;
//	}
//	cout << dijkstra() << endl;
//}