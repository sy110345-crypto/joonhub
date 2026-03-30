#include <iostream>
#include <algorithm>
#include <vector>
#include<string> 
#include <stack>
using namespace std; 


int main() {
	int count;
	cin >> count;
	string code;
	stack<int> s;
	for (int i = 0;i < count;i++) {
		cin >> code;
		if (code == "push") {
			int	a;
			cin >> a;
			s.push(a);

		}
		else {
			if (code == "top") {
				if (s.empty()) {
					cout << -1 << endl;
				}
				else {
					cout << s.top() << endl;
				}
			}
			else if (code == "pop") {
				if (s.empty()) {
					cout << -1 << endl;
				}
				else {
					cout << s.top()<<endl;
					s.pop();
				}
			}
			else if (code == "size") {
				cout << s.size() << endl;
			}
			else if (code == "empty") {
				if (s.empty()) {
					cout << 1 << endl;
				}
				else {
					cout << 0 << endl;
				}
			}
			
		}
	}
}