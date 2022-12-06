#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[5], avg, tmp, mdn;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
        sum = sum + num[i];
    }
    avg = sum / 5;

    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
        {
            if (num[i] > num[j])
            {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    mdn = num[2];
    cout << avg << "\n";
    cout << mdn << "\n";
}