
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) {
	dat[pos] = x;
	pos++;
}

void pop() {
	pos--;
}

int top() {
	return dat[pos - 1]; //pos는 인덱스역할. 인덱스에 값을 채워넣고 그 다음 인덱스에서 값을 받을 상태로 대기하고 있다.
}

void test() {
	push(5); push(4); push(3);
	cout << top() << '\n'; // 3
	pop(); pop();
	cout << top() << '\n'; // 5
	push(10); push(12);
	cout << top() << '\n'; // 12
	pop();
	cout << top() << '\n'; // 10
}

int main(void) {
	test();
}