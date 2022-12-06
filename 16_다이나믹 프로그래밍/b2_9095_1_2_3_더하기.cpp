#include <iostream>
using namespace std;

int t, n;
int arr[11];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for (int i = 4; i < 11; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    }
    //각 값을 저장하고 난 후 출력
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << arr[n] << "\n";
    }
}