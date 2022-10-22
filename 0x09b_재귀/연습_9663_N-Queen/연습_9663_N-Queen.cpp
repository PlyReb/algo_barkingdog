#include <bits/stdc++.h>
using namespace std;

int n;

bool isused1[31];//같은 열인지
bool isused2[31];//우상향 대각선인지
bool isused3[31];//좌상향 대각선인지

int cnt = 0;

void func(int k)
{
	if (k == n)//좌표로 봤을 때 k번째 행이 n과 같을 때. 퀸을 마지막 행까지 배치했을 때
	{
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++)// (k번째 행, i번째 열)에 queen  배치. 
	{
		if (isused1[i] || isused2[i+k] || isused3[k-i+n-1])
			continue;//해당 행의 다음 열로 queen을 배치해본다. 만일 i==n이 되게되면 queen배치는 실패.
		isused1[i] = 1;
		isused2[k + i] = 1;
		isused3[k - i + n - 1] = 1;
		func(k + 1);
		isused1[i] = 0;//원상복구
		isused2[k + i] = 0;
		isused3[k - i + n - 1] = 0;
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	func(0);
	cout << cnt;
}