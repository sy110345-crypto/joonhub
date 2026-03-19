#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;

int main() {
	int count;
	int roomlimit;
	cin >> count >> roomlimit;
	int grade, gender;
	vector<int> mv(6);
	vector<int> fmv(6);
	for (int i = 0;i < count;i++) {
		cin >> gender >> grade;
		if (gender == 1) {
			mv[grade-1]++;
		}
		else {
			fmv[grade-1]++;
		}
	}
	int room = 0;
	for (int i = 0;i < 6;i++) {
		if (mv[i] % roomlimit ==0 ) {
			room =room + mv[i] / roomlimit;

		}
		else if (mv[i] == 0) {
			room = room + 0;
		}
		else {
			room=room + mv[i] / roomlimit +1;
		}
	}
	for (int i = 0;i < 6;i++) {
		if (fmv[i] % roomlimit == 0) {
			room= room + fmv[i] / roomlimit;

		}
		else if (fmv[i] == 0) {
			room = room + 0;
		}
		else {
			room= room + fmv[i] / roomlimit + 1;
		}
	}
	cout << room;
}
