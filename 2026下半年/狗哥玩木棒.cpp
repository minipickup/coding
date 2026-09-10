//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int n, targetL, longest = 0, sum = 0;
//bool fuck = false;
//int sticks[2005];
//bool vis[2005];
//
//void func(int cnt,int curL,int m) {
//	if (fuck)return;
//	if (cnt == 4) {
//		fuck = true;
//		return;
//	}
//	for (int i = 0; i < m; i++) {
//		if (vis[i])continue;
//		int newL = curL + sticks[i];
//		if (newL > targetL)break;
//		vis[i] = 1;
//		if (newL == targetL) {
//			func(cnt + 1, 0, m);
//		}
//		else {
//			func(cnt, newL, m);
//		}
//		vis[i] = 0;
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		sum = 0;
//		longest = 0;
//		fuck = false;
//		int m;
//		cin >> m;
//		for (int j = 0; j < m; j++) {
//			cin >> sticks[j];
//			sum += sticks[j];
//			longest = max(longest, sticks[j]);
//			vis[j] = 0;
//		}
//		targetL = sum / 4;
//		if (sum % 4 != 0 || longest > targetL) {
//			cout << "no" << endl;
//		}
//		else {
//			sort(sticks, sticks + m);
//			func(0, 0, m);
//			if (fuck)cout << "yes" << endl;
//			else cout << "no" << endl;
//		}
//	}
//}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n, targetL, longest, shortest, sum;
bool fuck = false;
int sticks[2005];
bool vis[2005];

void func(int cnt, int curL, int m) {
	if (fuck)return;
	if (cnt == 4) {
		fuck = true;
		return;
	}
	for (int i = 0; i < m; i++) {
		if (vis[i])continue;
		if (curL + shortest > targetL)break;
		int newL = curL + sticks[i];
		if (newL > targetL)break;
		vis[i] = 1;
		if (newL == targetL) {
			func(cnt + 1, 0, m);
		}
		else {
			func(cnt, newL, m);
		}
		vis[i] = 0;
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		sum = 0;
		longest = 0;
		shortest = 1e9;
		fuck = false;
		int m;
		cin >> m;
		for (int j = 0; j < m; j++) {
			cin >> sticks[j];
			sum += sticks[j];
			longest = max(longest, sticks[j]);
			shortest = min(shortest, sticks[j]);
			vis[j] = 0;
		}
		targetL = sum / 4;
		if (sum % 4 != 0 || longest > targetL) {
			cout << "no" << endl;
		}
		else {
			sort(sticks, sticks + m, greater<int>());
			func(0, 0, m);
			if (fuck)cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
}