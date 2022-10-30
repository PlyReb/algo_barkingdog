#include <bits/stdc++.h>
using namespace std;

int n;
pair<int, int> p[100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i].first >> p[i].second;
    sort(p, p + n);
    for (int i = 0; i < n; i++)
        cout << p[i].first << " " << p[i].second << "\n";
}