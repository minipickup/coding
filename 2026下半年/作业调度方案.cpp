//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//struct gear {
//	//每道工序对应机器号
//	vector<int>machineId;
//	//每道工序用时
//	vector<int>cost;
//	//当前工序完成的时间点
//	int tail;
//	//当前进行的工序
//	int cur = 0;
//};
//
//struct machine {
//	int last;
//	int maxGap;
//	int pos;
//};
//
//int m, n;
//
//vector<gear>gears;
//vector<int>order;
//vector<vector<int>>Time;
//vector<machine>machines;
////<最后运行的时间,最大空余时间段>
//
//void putIn(int cost, int machineId) {
//	for (int i = machines[machineId].pos; i < cost; i++) {
//		Time[machineId][i] = 1;
//	}
//	int maxGap = 0;
//	int gap = 0;
//	int pos = 0;
//	int bestPos = 0;
//	int isFree = 0;
//	for (int i = 0; i < Time[machineId].size(); i++) {
//		if (!isFree && Time[machineId][i] == 1)continue;
//		isFree = 1;
//		pos = i;
//		if (Time[machineId][i] == 0) {
//			gap++;
//		}
//		else {
//			if (gap > maxGap) {
//				maxGap = gap;
//				bestPos = pos;
//			}
//			gap = 0;
//			isFree = 0;
//		}
//	}
//	machines[machineId].maxGap = maxGap;
//	machines[machineId].pos = bestPos;
//}
//
//void func() {
//	for (int i = 0; i < m * n; i++) {
//		int gearId = order[i];
//		int cur=++gears[gearId].cur;
//		int machineId = gears[gearId].machineId[cur];
//		int cost = gears[gearId].cost[cur];
//		if (machines[machineId].maxGap != 1e9 && machines[machineId].maxGap >= cost) {
//			putIn(cost, machineId);
//		}
//		else {
//			machines[machineId].last += cost;
//		}
//	}
//	int ans = 1e9;
//	for (int i = 0; i < m; i++) {
//		ans = min(ans, machines[i].last);
//	}
//	cout << ans << endl;
//}
//
//int main() {
//	//m个机器,m道工序,n个工件
//	cin >> m >> n;
//	gears.resize(n);
//	int t;
//	for (int i = 0; i < m * n; i++) {
//		cin >> t;
//		order.push_back(t);
//	}
//	//读入机器号
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> t;
//			gears[i].machineId.push_back(t);
//		}
//	}
//	//读入用时
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> t;
//			gears[i].cost.push_back(t);
//		}
//	}
//}