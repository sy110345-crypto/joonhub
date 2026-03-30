#include <iostream>
#include <algorithm>
#include <vector>
#include<string> 
#include <stack>
using namespace std; 


int main() {
	int c; 
	cin >> c; 
	string s;
	for (int i = 0;i < c;i++) { 
		int count = 0;  
		cin >> s;
		for (int i = 0;i < s.size();i++) {
			if (count < 0) { // (보다 )가 많은 상황이므로 vps 아님
				break;
			}
			else{
				if (s[i] == '(') {
					count++;

				}
				else { //시작이 )면 Vps 될 수 없음
					count--;
				}
			}
			
		}
		if (count > 0) {
			cout << "NO" << endl;
		}
		if (count < 0) {
			cout << "NO" << endl;
		}
		if (count == 0) {
			cout << "YES" << endl;
		}

	}
}
