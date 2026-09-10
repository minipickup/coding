//#include<iostream>
//using namespace std;
//int s, t, w;
//string Jam;
//int main() {
//	//b,c,d,e,f,g,h,i,j
//	cin >> s >> t >> w;
//	cin >> Jam;
//	char c_s = s + 'a' - 1;
//	char c_t = t + 'a' - 1;
//	for (int i = 0; i < w; i++) {
//		if (Jam[0] == c_t - w + 1)break;
//		for (int j = w - 1; j >= 0; j--) {
//			int has_added = 0;
//			if (Jam[j] < c_t-w+1+j ) {
//				Jam[j]++;
//				for (int k = j + 1; k < w; k++) {
//					Jam[k] = Jam[k - 1] + 1;
//				}
//				break;
//			}
//			}
//		
//		cout << Jam << endl;
//		}
//}