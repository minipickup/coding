//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//
////好神奇的想法,抄AI的
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int open[105];
//	int close[105];
//	for (int i = 0; i < m; i++) {
//		open[i] = 0;
//		close[i] = (1 << n) - 1;
//		for (int j = 0; j < n; j++) {
//			int effect;
//			cin >> effect;
//			if (effect == 1) {
//				close[i] &= ~(1 << j);
//			}
//			else if(effect==-1){
//				open[i] |= (1 << j);
//			}
//		}
//	}
//	vector<int>step(1 << n, -1);
//	queue<int>q;
//	int start = (1 << n) - 1;
//	step[start] = 0;
//	q.push(start);
//	while (!q.empty()) {
//		int cur = q.front();	
//		q.pop();
//		if (cur == 0) {
//			cout << step[0] << endl;
//			return 0;
//		}
//		for (int i = 0; i < m; i++) {
//			int next = (cur | open[i]) & close[i];
//			if (step[next] == -1) {
//				step[next] = step[cur] + 1;
//				q.push(next);
//			}
//		}
//	}
//
//	cout << -1 << endl;
//}