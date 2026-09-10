	////分一组的单独处理
	//for (int i = 0; i < m; i++) {
	//	dp[1][1] = min(dp[1][1], n * A[i] + n * (n - 1) / 2 * B[i]);
	//}
	////分i组
	//for (int i = 2; i <= n; i++) {
	//	//最后一组的第一个外卖编号为j
	//	for (int j = i; j <= n; j++) {
	//		//前一组的第一个编号为k
	//		for (int k = i-1; k < j; k++) {
	//			//尝试使用每个交通工具
	//			for (int l = 0; l < m; l++) {
	//				int L = j - k;
	//				dp[i][j] = min(dp[i][j], dp[i - 1][k] + 40 + L * A[l] + L * (L - 1) / 2 * B[l]);
	//			}
	//		}
	//		ans = min(ans, dp[i][j]);
	//	}
	//}
	//cout << ans << endl;


//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int n, m, x;
////处理前i个,分j组
//int dp[5005][5005];
////交通工具平均路耗时
//int A[5005];
////箱体拥挤系数
//int B[5005];
//
//int main() {
//	int ans = 1e9;
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cin >> n >> m >> x;
//	for (int i =0; i <= n; i++) {
//		for (int j = 0; j <= n; j++) {
//			dp[i][j] = 1e9;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> A[i] >> B[i];
//	}
//	
//	//分1组单独处理
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j < m; j++) {
//			int time = i * A[j] + i * (i - 1) / 2 * B[j];
//			dp[i][1] = min(dp[i][1], time);
//		}
//	}
//	//前i个
//	for (int i = 1; i <= n; i++) {
//		//分j组
//		for (int j = 2; j <= i; j++) {
//			//最后一组的第一个为k1
//			for (int k = j; k <= i; k++) {
//				//最后一组使用的交通工具
//				for (int l = 0; l < m; l++) {
//					int L = i - k + 1;
//					dp[i][j] = min(dp[i][j], dp[k - 1][j-1] + 40 + L * A[l] + L * (L - 1) / 2 * B[l]);
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		ans = min(ans, dp[n][i]);
//	}
//	cout << ans << endl;
//}