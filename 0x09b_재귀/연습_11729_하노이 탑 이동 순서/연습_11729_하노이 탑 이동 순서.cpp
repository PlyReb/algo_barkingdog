#include <bits/stdc++.h>
using namespace std;

void hanoi(int a, int b, int n)
{
	if (n == 1)
	{
		cout << a << ' ' << b << "\n";
		return;
	}
	hanoi(a, 6 - a - b, n - 1);//1번~(n-1)번 플레이트들을 a와 b가 아닌 고리로 옮기기
	cout << a << ' ' << b << "\n";// n번 플레이트를 b로 옮기기
	hanoi(6 - a - b, b, n - 1);//a와 b로 옮겨진 1번 ~(n-1)번 플레이트들을 n번플레이트가 위치한 b로 옮기기
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	cout << (1 << n) - 1 << "\n"; //left shift 연산자. 비트를 왼쪽으로 밀어줄 때마다 *2 이므로 2^k를 표현. 
	hanoi(1, 3, n);
}