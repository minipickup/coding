//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//int n, k;
//int dp[105][105];//前i本,留下j本
//
//struct Book {
//	int h;
//	int w;
//}books[105];
//
//bool fuck(Book a, Book b) {
//	return a.h < b.h;
//}
//
//int main() {
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) {
//		cin >> books[i].h >> books[i].w;
//	}
//
//	sort(books + 1, books + n + 1, fuck);
//
//	memset(dp, 0x3f, sizeof(dp));
//	for (int i = 1; i <= n; i++) {
//		dp[i][1] = 0;
//	}
//	for (int i = 2; i <= n; i++) {
//		for (int j = 2; j <= min(i, n - k); j++) {
//			for (int p=j-1; p < i; p++) {
//				dp[i][j] = min(dp[i][j], dp[p][j - 1] + abs(books[i].w - books[p].w));
//			}
//		}
//	}
//	int ans = 1e9;
//	for (int i = n - k; i <= n; i++) {
//		ans = min(ans, dp[i][n - k]);
//	}
//	cout << ans << endl;
//}