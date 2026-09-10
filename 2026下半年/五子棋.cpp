//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//class Goban {
//private:
//	int board[20][20];
//	int curplayer;
//	int pace;
//	int row;
//	int col;
//	void refreshHelper() {
//		system("cls");
//		for (int i = 0; i < 15; i++) {
//			cout << setw(2) << 15 - i << "  ";
//			for (int j = 0; j < 15; j++) {
//				if (board[i][j] == 0)cout << setw(4) << '.';
//				else if (board[i][j] == 1)cout << setw(4) << 'o';
//				else cout << setw(4) << 'x';
//			}
//			cout << endl << endl;
//		}
//		cout << endl;
//		cout << "    ";
//		for (int i = 0; i < 15; i++) {
//			cout << setw(4) << i + 1;
//		}
//		cout << endl << endl;
//	}
//	bool checkHelper() {
//		int dx[4] = { 0,1,1,1 };
//		int dy[4] = { 1,0,1,-1 };
//		for (int i = 0; i < 4; i++) {
//			int cnt = 1;
//			for (int step = 1; step < 5; step++) {
//				int x = row + dx[i] * step;
//				int y = col + dy[i] * step;
//				if (x >= 0 && x < 15 && y >= 0 && y < 15 && board[x][y] == board[row][col])cnt++;
//				else break;
//			}
//			for (int step = 1; step < 5; step++) {
//				int x = row - dx[i] * step;
//				int y = col - dy[i] * step;
//				if (x >= 0 && x < 15 && y >= 0 && y < 15 && board[x][y] == board[row][col])cnt++;
//				else break;
//			}
//			if (cnt >= 5) {
//				char c = curplayer == 1 ? 'o' : 'x';
//				cout << c << "方胜利,游戏结束" << endl;
//				return true;
//			}
//		}
//		if (pace >= 200) {
//			cout << "200步,步数耗尽,平局" << endl;
//			return true;
//		}
//		if (curplayer == 1)curplayer = 2;
//		else curplayer = 1;
//		return false;
//	}
//	void placeStoneHelper() {
//		while (1) {
//			cout << "当前步数:" << pace << endl;
//			int curx, cury;
//			char c = curplayer == 1 ? 'o' : 'x';
//			cout << "请" << c << "方指定落子位置:";
//			if (!(cin >> curx >> cury)) {
//				cout << "输入无效,请输入正确位置" << endl;
//				cin.clear();
//				cin.ignore(10000, '\n');
//				continue;
//			}
//			if (curx < 1 || curx>15 || cury < 1 || cury>15) {
//				cout << "请输入正确的位置" << endl;
//				continue;
//			}
//			row = 15 - cury;
//			col = curx - 1;
//			if (board[row][col]) {
//				cout << "该点位已有棋子,请下在其他位置";
//				continue;
//			}
//			board[row][col] = curplayer;
//			pace++;
//			break;
//		}
//	}
//
//public:
//	Goban(const Goban&) = delete;
//	Goban& operator=(const Goban&) = delete;
//	Goban() :curplayer(1), pace(0),row(-1),col(-1) {
//		for (int i = 0; i < 15; i++) {
//			for (int j = 0; j < 15; j++) {
//				board[i][j] = 0;
//			}
//		}
//		refresh();
//		cout << "游戏开始,o方先下" << endl;
//	}
//	void refresh() {
//		refreshHelper();
//	}
//	bool check() {
//		return checkHelper();
//	}
//	void placeStone() {
//		placeStoneHelper();
//	}
//};
//
//int main() {
//	Goban game1;
//	int gameOver = 0;
//	int x, y;
//	while (!gameOver) {
//		game1.placeStone();
//		game1.refresh();
//		gameOver = game1.check();
//	}
//}