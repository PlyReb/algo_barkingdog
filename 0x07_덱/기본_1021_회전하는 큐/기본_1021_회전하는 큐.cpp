#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    deque<int> dq;

    for (int i = 1; i <= n; i++)
        dq.push_back(i); //오름차순으로 들어간다는 정보가 어디에 있는가??
    int cnt = 0;
    while (m--)
    {
        int t;
        cin >> t;
        int idx = find(dq.begin(), dq.end(), t) - dq.begin(); // idx : t가 있는 위치
        while (dq.front() != t) {
            if (idx < dq.size() - idx)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            cnt++;
        }
        dq.pop_front();
    }
    cout << cnt;
}

/*
20번째 줄에서, 지금은 idx가 항상 dq.size()보다 작아서 문제가 없지만
dq.size()는 unsigned int(or unsigned long long)이기
때문에 만약 idx가 dq.size()보다 컸다면 overflow가 발생해
의도한대로 동작하지 않을 수 있음을 인지해야 함. 그래서 size()로
받아온 값에 대해서는 안전하게 (int)dq.size() 로 항상 형변환을
하는 것도 괜찮음.
*/