#include <bits/stdc++.h>
using namespace std;

int n;
int board[2187][2187];
int cnt[3];

int check_identical(int x, int y, int n)//모두 같은 수로 이루어졌나 확인 함수//어차피 x=0, y=0 대입할 건데 왜 굳이 매개변수 x, y를 썼을까?
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (board[x + i][y + j] != board[x][y])// ?
				return 0;
		}
	}
	return 1;
}
/*
int check_identical(int x, int y, int n)
{
	for (int i = x; i < (x + n); i++)// ?
	{
		for (int j = y; j < (y + n); j++)
		{
			if (board[x][y] != board[i][j])
				return 0;
		}
	}
	return 1;
}
*/

void divide(int x, int y, int n)
{
	if (check_identical(x, y, n))
	{
		cnt[board[x][y] + 1]++;
		return;
	}
	n /= 3;//9분할. ex)이전 정사각형의 길이가 27이라면, 이전 정사각형을 9분할한 새로운 정사각형의 길이는 9가 된다.
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			divide(x + i * n, y + j * n, n);// ?
	}

}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> board[i][j];
	}
	divide(0, 0, n);
	for (int i = 0; i < 3; i++) 
		cout << cnt[i] << "\n";
}