//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct Element {
//	int value;
//	int belong_group;
//};
//
//vector<Element>a;
//int changed[200000] = { 0 };
//
//int m_find(int g) {
//	if (changed[g] != g) {
//		changed[g] = m_find(changed[g]);
//	}
//	return changed[g];
//}
//
//void insert(int& x, int& cnt) {
//	auto it = find_if(a.begin(), a.end(), [x](const Element& t) {
//		return t.value == x;
//		});
//	if (it == a.end()) {
//		a.emplace_back(x, ++cnt);
//		changed[cnt] = cnt;
//	}
//}
//
//void f(int& z, int& x, int& y) {
//	auto X = find_if(a.begin(), a.end(), [x](const Element& t) {
//		return t.value == x;
//		});
//	auto Y = find_if(a.begin(), a.end(), [y](const Element& t) {
//		return t.value == y;
//		});
//	if (X != a.end() && Y != a.end()) {
//		int g1 = m_find(X->belong_group);
//		int g2 = m_find(Y->belong_group);
//		if (z == 1) {
//			changed[max(g1, g2)] = min(g1, g2);
//		}
//		else {
//			if (g1 == g2)cout << "Y" << endl;
//			else cout << "N" << endl;
//		}
//	}
//}
//
//int main() {
//	int n,m;
//	cin >> n >> m;
//	int cnt = 0;
//	for (int i = 0; i < m; i++) {
//		int z, x, y;
//		cin >> z >> x >> y;
//		insert(x,cnt);
//		insert(y,cnt);
//		f(z, x, y);
//	}
//}