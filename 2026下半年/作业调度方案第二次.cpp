//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//struct gear{
//	vector<int>cost;
//	vector<int>machineId;
//	int cur = 0;
//	int last = 0;
//}gears[20];
//
//struct machine {
//	//从freePoint开始空闲
//	int freePoint = 1;
//	vector<int>time;
//	machine() :time(1000, 0) {}
//}machines[20];
//
//int m, n;
//int ans = 0;
//vector<int>order;
//
//void putIn(int machineId,int gearId, int start, int cost) {
//	int gap = 0;
//	int maxGap = 0;
//	int point = start;
//	int bestPoint = start;
//	int ing = 0;
//	for (int i = start; i < machines[machineId].freePoint; i++) {
//		if (machines[machineId].time[i] == 1 && !ing)continue;
//		if (ing && (machines[machineId].time[i] == 1 || i == machines[machineId].freePoint - 1)) {
//			if (gap > maxGap) {
//				maxGap = gap;
//				bestPoint = point;
//				if (maxGap >= cost) {
//					break;
//				}
//			}
//			ing = 0;
//			gap = 0;
//		}
//		if (machines[machineId].time[i] == 0 && !ing) {
//			ing = 1;
//			point = i;
//			gap = 1;
//		}
//		else if (machines[machineId].time[i] == 0) {
//			gap++;
//		}
//	}
//
//	if (maxGap < cost) {
//		bestPoint = max(machines[machineId].freePoint, gears[gearId].last + 1);
//		machines[machineId].freePoint = max(machines[machineId].freePoint + cost, gears[gearId].last + cost + 1);
//	}
//
//	for (int i = bestPoint; i < bestPoint + cost; i++) {
//		machines[machineId].time[i] = 1;
//	}
//
//	gears[gearId].last = bestPoint + cost - 1;
//}
//
//void func() {
//	//遍历安排顺序
//	for (int i = 0; i < m * n; i++) {
//		int gearId = order[i];
//		int cur = gears[gearId].cur++;
//		int machineId = gears[gearId].machineId[cur];
//		int cost = gears[gearId].cost[cur];
//		int start = gears[gearId].last + 1;
//		//安排到对应机器上
//		putIn(machineId, gearId, start, cost);
//	}
//	//找出最后的运行时间
//	for (int i = 0; i < m; i++) {
//		ans = max(ans, machines[i].freePoint - 1);
//	}
//	cout << ans << endl;
//}
//
//int main() {
//	cin >> m >> n;
//	int t;
//	//读入顺序
//	for (int i = 0; i < m * n; i++) {
//		cin >> t;
//		order.push_back(t - 1);
//	}
//	//读入机器号
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> t;
//			gears[i].machineId.push_back(t - 1);
//		}
//	}
//	//读入用时
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> t;
//			gears[i].cost.push_back(t);
//		}
//	}
//	func();
//}