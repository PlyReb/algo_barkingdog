#include <iostream>
using namespace std;

int talktime[10000], Y, M;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> talktime[i];

    for (int i = 0; i < N; i++)
        Y += ((talktime[i] / 30) + 1) * 10;

    for (int i = 0; i < N; i++)
        M += ((talktime[i] / 60) + 1) * 15;

    if (Y < M)
        cout << "Y " << Y;
    else if (Y > M)
        cout << "M " << M;
    else
        cout << "Y M " << Y;
}