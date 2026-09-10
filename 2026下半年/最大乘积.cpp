//#include<iostream>
//#include<vector>
//using namespace std;
//
//int n;
//int ans = 0;
//vector<int>path;
//
//void func(int n) {
//	if (n < 3) {
//		cout << n << endl << n << endl;
//		return;
//	}
//	int product = 1;
//	int sum = 0;
//	int cur = 2;
//	while (cur + sum <= n) {
//		path.push_back(cur);
//		sum += cur;
//		cur++;
//	}
//	int left = n - sum;
//	while (left > 0) {
//		for (int i = path.size() - 1; i >= 0 && left > 0; i--) {
//			path[i]++;
//			left--;
//		}
//	}
//	for (int i = 0; i < path.size(); i++) {
//		cout << path[i] << ' ';
//		product *= path[i];
//	}
//	cout << endl << product << endl;
//}
//
//int main() {
//	cin >> n;
//	func(n);
//}//ÕâÊÇ´íÎóµÄ