#include <iostream>
#include <algorithm>
#include <vector>
#include<string> 
#include <stack>
using namespace std;

int main() {
	string s;
	cin >> s;
	stack<char> data;
	int count = 0;
	for (int i = 0;i < s.size();i++) {
		if (s[i] == '(') {
			data.push(s[i]);
		}

		else {
			if (s[i - 1] == '(') {
				if (data.size() > 0) {
					data.push(s[i]);
					data.pop();
					data.pop();
					count = count + data.size();
				}
				
			}
			else {
				if (data.size() > 0) {
					data.push(s[i]);
					data.pop();
					data.pop();
					count++;
				}
			}
		}
		
		
	}
	cout << count;
}
