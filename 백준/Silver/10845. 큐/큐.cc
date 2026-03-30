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
	const int max = 10000;
	int q[max];
	int tail=0, head = 0;
	int c=0;
	for (int i = 0;i < count;i++) {
		cin >> code;
		if (code == "push") {
			int	a;
			cin >> a;
			q[tail] = a;
			tail++;
			c++;

		}
		else {
			if (code == "back") {
				if (c==0) {
					cout << -1 << endl;
				}
				else {
					cout << q[tail-1] << endl;
				}
			}
			else if (code == "pop") {
				if (c==0) {
					cout << -1 << endl;
				}
				else {
					cout << q[head]<<endl;
					head++;
					c--;
				}
			}
			else if (code == "size") {
				cout << c << endl;
			}
			else if (code == "empty") {
				if (c==0) {
					cout << 1 << endl;
				}
				else {
					cout << 0 << endl;
				}
			}
			else if (code == "front") {
				if (c == 0) {
					cout << -1 << endl;
				}
				else {
					cout << q[head] << endl;
				}
				
			}
			
		}
	}
}
	


