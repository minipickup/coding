//#include<iostream>
//using namespace std;
//int main() {
//	int n = 0;
//	cin >> n;
//	if (n == 0) {
//		int k;
//		cin >> k;
//		cout << k;
//		return 0;
//	}
//	for (int i = n; i >= 0; i--) {
//		int k;
//		cin >> k;
//		if (k == 0)continue;
//		if (i == 0) {
//			if (k > 0)cout << '+';
//			cout << k;
//			return 0;
//		}
//		if (k > 0 && i != n)cout << '+';
//		if (k != 1 && k != -1)cout << k;
//		if (k == -1)cout << '-';
//		cout << 'x';
//		if (i != 1)cout << '^' << i;
//	}
//	return 0;
//}