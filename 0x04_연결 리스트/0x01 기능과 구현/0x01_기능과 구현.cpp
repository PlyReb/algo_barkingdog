#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005; // 왜 하필 1000005?
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void insert(int addr, int num) {
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1) // nxt[addr] = -1 이라면 해당 원소는 마지막이라는 의미. 삽입하게 되는 원소가 마지막이 된다.
        pre[nxt[addr]] = unused; // 때문에 삽입하는 원소를 존재하지 않는 다음 원소에 이어줄 필요가 없다. 이어주게되면 pre[-1]에 접근해서 오류.
    nxt[addr] = unused;
    unused++;
}

void erase(int addr) { 
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) // 만일 맨 끝을 지운다면 연결해 줄 필요 없어. pre[-1]로 접근하게되서 오류.
        pre[nxt[addr]] = pre[addr]; //dummy 노드로 인해 그 어떤 원소를 지우더라도 pre[addr] != -1
}

void traverse() {
    int cur = nxt[0];
    while (cur != -1) {
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}

void insert_test() {
    cout << "****** insert_test *****\n";
    insert(0, 10); // 10(address=1)
    traverse();
    insert(0, 30); // 30(address=2) 10
    traverse();
    insert(2, 40); // 30 40(address=3) 10
    traverse();
    insert(1, 20); // 30 40 10 20(address=4)
    traverse();
    insert(4, 70); // 30 40 10 20 70(address=5)
    traverse();
}

void erase_test() {
    cout << "****** erase_test *****\n";
    erase(1); // 30 40 20 70
    traverse();
    erase(2); // 40 20 70
    traverse();
    erase(4); // 40 70
    traverse();
    erase(5); // 40
    traverse();
}

int main(void) {
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    insert_test();
    erase_test();
}