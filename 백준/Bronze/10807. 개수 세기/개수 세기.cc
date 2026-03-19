#include <iostream>
#include <algorithm>
#include <vector>
#include<string>
using namespace std;

int main() {
	int a;
	cin >> a;
	vector<int> v;
	for (int i = 0;i < a;i++) {
		int b;
		cin >> b;
		v.push_back(b);

	}
	int x;
	cin >> x;
	int c=0;
	for (int i = 0;i < v.size();i++) {
		if (v[i] == x) {
			c++;
		}
	}
	cout << c;
}

