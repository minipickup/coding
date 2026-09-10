//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//struct p {
//	string left;
//	string right;
//};
//
//bool myCompare(const p& p1, const p& p2) {
//	return myMul(p1.left, p1.right) < myMul(p2.left, p2.right);
//}
//
//int n;
//string a, b;
//p shit[1005];
//
//string myMul(string a,string b) {
//	reverse(a.begin(), a.end());
//	reverse(b.begin(), b.end());
//	int result[15] = { 0 };
//	for (int i = 0; i < a.size(); i++) {
//		for (int j = 0; j < b.size(); j++) {
//			result[i + j] += (a[i] - '0') * (b[j] - '0');
//		}
//	}
//	long long total = 0;
//	for (int i = 0; i < a.size() + b.size(); i++) {
//		total += result[i];
//		result[i] = total % 10;
//		total /= 10;
//	}
//	string resStr;
//	int pos = 14;
//	while (result[pos] == 0)pos--;
//	for (int i = pos; i >= 0; i--) {
//		resStr += (result[i] + '0');
//	}
//	return resStr;
//}
//
//string myDiv(string a, string b) {
//	if (b == "0")return "0";
//	int result[15] = { 0 };
//	long long rem = 0;
//	for(i=0;i<a.size)
//}
//
//int main() {
//	cin >> n >> a >> b;
//	string l, r;
//	for (int i = 0; i < n; i++) {
//		cin >> l >> r;
//		shit[i] = { l,r };
//	}
//	sort(shit, shit + n, myCompare);
//	string ans = 0;
//	string product = a;
//	for (int i = 0; i < n; i++) {
//		ans = max(ans, product / shit[i].right);
//		product *= shit[i].left;
//	}
//	cout << ans << endl;
//}