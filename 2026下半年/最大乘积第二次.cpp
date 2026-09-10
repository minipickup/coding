//#include<iostream>
//#include<vector>
//using namespace std;
//
//vector<int>path;
//
//void myMul(vector<int>& a, int b) {
//	long long carry = 0;
//	for (int i = 0; i < a.size(); i++) {
//		carry += 1LL * a[i] * b;
//		a[i] = carry % 10;
//		carry /= 10;
//	}
//	while (carry) {
//		a.push_back(carry % 10);
//		carry /= 10;
//	}
//}
//
//void shit(int n) {
//	if (n <= 4) {
//		cout << n << endl << n << endl;
//		return;
//	}
//	path.clear();
//	int cur = 2;
//	int left = n;
//	while (left >= cur) {
//		path.push_back(cur);
//		left -= cur;
//		cur++;
//	}
//	while (left) {
//		for (auto it = path.rbegin(); it != path.rend(); it++) {
//			if (!left)break;
//			left--;
//			(*it)++;
//		}
//	}
//	vector<int>product{ 1 };
//	for (auto i : path) {
//		cout << i << ' ';
//		myMul(product, i);
//	}
//	cout << endl;
//	for (int i = product.size() - 1; i >= 0; i--) {
//		cout << product[i];
//	}
//	cout << endl;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	shit(n);
//}