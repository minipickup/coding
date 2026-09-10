//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int f[2005][2005];
//int N, H, D;
//int dp[2005][2005] = { 0 };//在第i棵树的高度j处,吃过柿子数量
//int H_max[2005] = { 0 };
//
//int main() {
//	cin >> N >> H >> D;
//	for (int i = 0; i < N; i++) {
//		int n;
//		cin >> n;
//		for (int j = 0; j < n; j++) {
//			int h;
//			cin >> h;
//			f[i][h]++;
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		dp[i][H] = f[i][H];
//		H_max[H] = max(H_max[H], dp[i][H]);
//	}
//	//高度i
//	for (int i = H - 1; i >= 0; i--) {
//		//第j棵树
//		for (int j = 0; j < N; j++) {
//			dp[j][i] = dp[j][i + 1] + f[j][i];
//			//从第k颗树跳过来的
//			if (i + D <= H) {
//				dp[j][i] = max(dp[j][i], H_max[i + D] + f[j][i]);
//			}
//			/*if (i == 0 && i < N) {
//				dp[i][j] = max({
//				dp[i][j + 1] + f[i][j],
//				dp[i + 1][j + 2] + f[i][j]
//					});
//			}
//			else if (i == N && i > 0) {
//				dp[i][j] = max({
//				dp[i][j + 1] + f[i][j],
//				dp[i - 1][j + 2] + f[i][j]
//					});
//			}
//			else if(N==1){
//				dp[i][j] = max({
//					dp[i][j + 1] + f[i][j]
//					});
//			}
//			else {
//				dp[i][j] = max({
//				dp[i][j + 1] + f[i][j],
//				dp[i + 1][j + 2] + f[i][j],
//				dp[i - 1][j + 2] + f[i][j]
//					});
//			}*/
//		}
//		for (int j = 0; j < N; j++) {
//			H_max[i] = max(H_max[i], dp[j][i]);
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < N; i++) {
//		ans = max(ans, dp[i][0]);
//	}
//	cout << ans << endl;
//}