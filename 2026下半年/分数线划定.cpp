//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//struct Interviewee {
//	int k;
//	int score;
//	Interviewee(int kk, int ss) {
//		k = kk;
//		score = ss;
//	}
//};
//
//bool higher(const Interviewee& a, const Interviewee& b) {
//	if (a.score == b.score)return a.k < b.k;
//	return a.score > b.score;
//}
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	vector<Interviewee>arr;
//	for (int i = 0; i < n; i++) {
//		int k;
//		int score;
//		cin >> k >> score;
//		arr.emplace_back(k, score);
//	}
//	sort(arr.begin(), arr.end(), higher);
//	int x = m * 3 / 2;
//	while (arr[x - 1].score == arr[x].score)x++;
//	cout << arr[x-1].score << ' ' << x << endl;
//	for (int i = 0; i < x; i++) {
//		cout << arr[i].k << ' ' << arr[i].score << endl;
//	}
//}