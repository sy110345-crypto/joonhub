#include <iostream>
#include <algorithm>
#include <vector>
#include<string> 
#include <stack>
using namespace std;

int main() {
	const int max = 10000000;
	int data[max];
	int head = 0;
	int tail = 0;
	int count;
	cin >> count;
	for (int i = 1;i < count+1;i++) {
		data[tail] = i;
		tail++;
	}
	int num = 1;
	
	while (tail-head>1) {
		if (num % 2 != 0) {
			head++;
		}
		else {
			data[tail] = data[head];
			tail++;
			head++;
		}
	
		num++;
	}
	cout << data[head];
}