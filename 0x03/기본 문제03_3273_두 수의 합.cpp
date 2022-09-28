#include <bits/stdc++.h>
using namespace std;

int n, x;
int a[1000000];
int occur[2000000];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	cin >> x;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (x - a[i] > 0 && occur[x - a[i]] == 1)  // 인덱스 값이 음수가 되면 안되니까
			cnt++;
		occur[a[i]] = 1;
	} 
	cout << cnt;
}