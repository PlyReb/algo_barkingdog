#include <iostream> //정답
#include <algorithm>
using namespace std;

int n;
int arr[1002], d[1002]; // 전역변수 0으로 초기화.

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } // 주어진 수열 배열에 받기.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                d[i] = max(d[i], d[j] + 1);
            }
        }
    }
    cout << *max_element(d, d + n) + 1;
}
// 하기 오답. 오답 이유 표시해놨다.
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int n;
// int arr[1002], d[1002]; // 전역변수 0으로 초기화.

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     } // 주어진 수열 배열에 받기.
//     //d[1] =1; 이렇게 채워버리면 나중에 10 20 10 30 20 50의 경우
//     //         2번째 10값을 참조할 때 0을 참조하게 된다.
//                10, 20, 50의 경우 10의 길이를 0으로 받아버림.
//     //fill(d, d + n, 1);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 d[i] = max(d[i], d[j] + 1);
//             }
//         }
//     }
//     cout << *max_element(d, d + n);
// }
