#include <iostream>
#include <algorithm>
#include <vector>
#include<string>

using namespace std;

int main() {
	int a;
	cin >> a;
	string b = to_string(a);
	int count = 0;
	int sixandnine=0;
	vector<int> v;
	for (int i = 0;i < 10;i++) {
		int e = 0;
		if (count != 6 && count != 9) {
			for (int i = 0;i < b.size();i++) { //b개수만큼만 돌기
				int d = b[i] - '0';
				if (d == count) { //d는 1번재 2번쨰 숫자 비교 c는 
					e++;
				}

			}
			v.push_back(e);
			count++;
		}
		else {
			for (int i = 0;i < b.size();i++) {
				int d = b[i] - '0';
				if (d == count) {
					sixandnine++; //6과 9 모두 들어감

				}
			}
			count++;
		}

	}
	int max = v[0];
	v.push_back(sixandnine); //v에는 0개수 1개수 2개수 ......
	for (int i = 0;i < v.size() - 1;i++) {
		if (max < v[i]) {
			max = v[i];
		}
	}
	if (sixandnine % 2 == 0) {
		if (max < sixandnine / 2) {
			max = sixandnine / 2;
		}
	}
	else {
		if (max < sixandnine / 2 + 1) {
			max = sixandnine / 2 + 1;
		}
	}
	cout << max;
}

