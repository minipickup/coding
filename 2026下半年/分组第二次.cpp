//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//int n;
//int a[100005];
//unordered_map<int, vector<int>>groups;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	for (int i = 0; i < n; i++) {
//		int x = a[i];
//		if (groups.count(x - 1) && !(groups[x - 1].empty())) {
//			auto &vec = groups[x - 1];
//			sort(vec.begin(), vec.end());
//			int len = vec[0];
//			vec.erase(vec.begin());
//			if (vec.empty()) {
//				groups.erase(x - 1);
//			}
//			groups[x].push_back(len + 1);
//		}
//		else {
//			groups[x].push_back(1);
//		}
//	}
//
//	int ans = n;
//	for (auto& it : groups) {
//		for (auto len : it.second) {
//			ans = min(ans, len);
//		}
//	}
//	cout << ans << endl;
//}