//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//void func(string s) {
//	int x = s.size();
//	int cnt_1 = 0;
//	int cnt_0 = 0;
//	if (x == 1) {
//		if (s[0] == '1')cout << "I";
//		else cout << "B";
//		return;
//	}
//	else {
//		string l = s.substr(0, x / 2);
//		string r = s.substr(x / 2);
//		func(l);
//		func(r);
//		for (char c : s) {
//			if (c == '1')cnt_1++;
//			if (c == '0')cnt_0++;
//			if (cnt_1 > 0 && cnt_0 > 0) {
//				cout << 'F';
//				break;
//			}
//		}
//		if (cnt_1 == 0 && cnt_0 > 0)cout << 'B';
//		else if (cnt_1 > 0 && cnt_0 == 0)cout << 'I';
//	}
//}
//
//int main() {
//	int n;
//	cin >> n;
//	string str;
//	cin >> str;
//	func(str);
//}