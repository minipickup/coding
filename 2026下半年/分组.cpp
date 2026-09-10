//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n;
//int a[100005];
//int vis[100005] = { 0 };
//
//bool nothingBack(int index) {
//	for (int i = index + 1; i < n; i++) {
//		if (!vis[i])return false;
//	}
//	return true;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	int ans = 1e9;
//	int cnt = 0;
//	int last = a[0];
//	int lastIndex = 0;
//	int total = 0;
//	while (total < n) {
//		for (int i = 0; i < n; i++) {
//			if (!vis[i]) {
//				vis[i] = 1;
//				last = a[i];
//				lastIndex = i;
//				cnt = 1;
//				total++;
//				if (total == n) {
//					ans = 1;
//				}
//				break;	
//			}
//		}
//		for (int i = lastIndex + 1; i < n; i++) {
//			if (vis[i])continue;
//			if (a[i] - last > 1) {
//				total++; 
//				last = a[i];
//				vis[i] = 1;
//				ans = min(ans, cnt);
//				cnt = 1;
//			}
//			else if (a[i] - last == 1) {
//				if(nothingBack(i)){
//					total++;
//					cnt++;
//					vis[i] = 1;
//					ans = min(ans, cnt);
//				}
//				else {
//					total++;
//					cnt++;
//					last = a[i];
//					vis[i] = 1;
//				}
//			}
//		}
//	}
//	cout << ans << endl;
//}