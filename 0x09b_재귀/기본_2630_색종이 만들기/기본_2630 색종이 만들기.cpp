#include <bits/stdc++.h>
using namespace std;

int paper[128][128];//전체 종이 한 변의 최대 길이 128
int cnt[2];//사각형의 색깔

bool check(int n, int x, int y)//분할된 색종이가 모두 같은 색인지 확인
{
    for (int i = x; i < x + n; i++)
        for (int j = y; j < y + n; j++)
            if (paper[i][j] != paper[x][y]) return false;
    return true;
}

void func(int n, int x, int y)
{
    if (check(n, x, y))//base_condition. 분할 색종이가 모두 같은색. 분할되다가 같은 색으로만 이뤄진 색종이가 나오면 그 구획은 분할을 멈춘다.
    {
        cnt[paper[x][y]]++;
        return;
    }
    for (int i = 0; i < 2; i++)//4분할
        for (int j = 0; j < 2; j++)
            func(n / 2, x + i * n / 2, y + j * n / 2);//n은 2^k. 4분할 하고 싶으면 가로 세로의 길이를 2로 나누면 된다.
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> paper[i][j];
    func(n, 0, 0);
    for (int i = 0; i < 2; i++)
        cout << cnt[i] << '\n';
}