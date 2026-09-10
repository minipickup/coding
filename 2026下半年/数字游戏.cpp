//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//int n, m;
//int num[110] = { 0 };
//int a[220] = { 0 };//从0到i的和
//int dp1[220][220][9];//从l到r，分成i段，包括l和r
//int dp2[220][220][9];
//
//int mod10(int x) {
//	return (x % 10 + 10) % 10;
//}
//
//int main() {
//	cin >> n >> m;
//	//环展成直线
//	for (int i = 0; i < n; i++) {
//		cin >> num[i];
//		num[i + n] = num[i];
//	}
//	int sum = 0;
//	for (int i = 0; i < 2 * n; i++) {
//		sum += num[i];
//		a[i] = sum;
//	}
//
//	memset(dp1, 0x3f, sizeof(dp1));
//	memset(dp2, 0, sizeof(dp2));
//
//	//长度
//	for (int len = 1; len <= n; len++) {
//		//左边界
//		for (int l = 0; l + len - 1 < 2 * n; l++) {
//			//右边界
//			int r = l + len - 1;
//			//段数
//			dp1[l][r][1] = dp2[l][r][1] = mod10(a[r] - (l > 0 ? a[l - 1] : 0));
//			for (int i = 2; i <= min(m, len); i++) {
//				//最后一段的起点
//				for (int j = l + i - 1; j <= r; j++) {
//					dp1[l][r][i] = min(dp1[l][r][i], dp1[l][j - 1][i - 1] * mod10(a[r] - a[j - 1]));
//					dp2[l][r][i] = max(dp2[l][r][i], dp2[l][j - 1][i - 1] * mod10(a[r] - a[j - 1]));
//				}
//			}
//		}
//	}
//	int ans1 = 1e9;
//	int ans2 = 0;
//	for (int i = 0; i < n; i++) {
//		ans1 = min(ans1, dp1[i][i + n - 1][m]);
//		ans2 = max(ans2, dp2[i][i + n - 1][m]);
//	}
//	cout << ans1 << endl << ans2 << endl;
//}