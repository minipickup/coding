//#include<iostream>
//#include<algorithm>
//#include<unordered_map>
//using namespace std;
//#define MOD 1000000007
//int n;
//long long ans = 0;
//unordered_map<int, int>freq;
//
//long long C2(long long m) {
//	return m * (m - 1) / 2;
//}
//
//int main() {
//	cin >> n;
//	int l;
//	for (int i = 0; i < n; i++) {
//		cin >> l;
//		freq[l]++;
//	}
//	for (auto& p : freq) {
//		int L = p.first;
//		int cnt = p.second;
//		if (cnt < 2)continue;
//		long long waysL = C2(cnt);
//		long long waysPair = 0;
//		for (int a = 1; a <= L / 2; a++) {
//			int b = L - a;
//			if (a == b) {
//				if (freq.count(a) && freq[a] >= 2) {
//					waysPair = (waysPair + C2(freq[a])) % MOD;
//				}
//			}
//			else {
//				if (freq.count(a) && freq.count(b)) {
//					waysPair = (waysPair + freq[a] * freq[b]) % MOD;
//				}
//			}
//		}
//		ans = (ans + waysL * waysPair) % MOD;
//	}
//	cout << ans << endl;
//}