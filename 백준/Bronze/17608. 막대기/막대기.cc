#include <iostream>
#include <algorithm>
#include <vector>
#include<string> 
#include <stack>
using namespace std; 


int main() {
	int count, c;
	int a = 1;
	int max;
	cin >> count;
	vector<int> v;
	for (int i = 0;i < count;i++) {
		cin >> c;
		v.push_back(c);
	}
	max = v[count - 1];
	for (int i = count-1;i >0;i--) { 
		
		if (max < v[i - 1]) {
			max = v[i - 1];
			a++;
		}
	}
	cout << a;
}
	


