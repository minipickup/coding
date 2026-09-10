//#include<iostream>
//using namespace std;
//
////·¶Î§×ó±ÕÓÒ¿ª
//void sortHelper(int* arr, int* arr2, int l, int r) {
//	if (r - l <= 1)return;
//	int mid = l + (r - l) / 2;
//	sortHelper(arr, arr2, l, mid);
//	sortHelper(arr, arr2, mid, r);
//	int i = l, j = mid;
//	int index = l;
//	while (index < r) {
//		if (i < mid && (j >= r || arr[i] <= arr[j])) {
//			arr2[index] = arr[i];
//			i++;
//		}
//		else {
//			arr2[index] = arr[j];
//			j++;
//		}
//		index++;
//	}
//	for (int i = l; i < r; i++) {
//		arr[i] = arr2[i];
//	}
//}
//
//void mergeSort(int* arr, int n) {
//	int* arr2 = new int[n];
//	sortHelper(arr, arr2, 0, n);
//	delete[] arr2;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	mergeSort(arr,n);
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << ' ';
//	}
//	cout << endl;
//	delete[] arr;
//}