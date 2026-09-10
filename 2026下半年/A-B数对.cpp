//#include<iostream>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//int n, c;
//long long ans = 0;
//map<int,int>a;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n >> c;
//	int num;
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		a[num]++;
//	}
//	for (auto& p : a) {
//		int x = p.first;
//		if (a.count(x + c)) {
//			ans += 1LL * p.second * a[x + c];
//		}
//	}
//	cout << ans << endl;
//}