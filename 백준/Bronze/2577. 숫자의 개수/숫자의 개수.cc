#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int d = a * b * c;
	int g = 0;
	int num;
	vector<int> v;
	string e = to_string(d);
	
	while (true) {
		if (g < 10) {
			int f = 0;

			for (int i = 0;i < e.size();i++) {
				int num = e[i] - '0';
				if (num == g) {
					f++;
				}
			}
			cout << f<<endl;
			g++;
		}
		else {
			break;
		}
	}

}
