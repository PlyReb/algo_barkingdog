#include <iostream>
#include <algorithm>
using namespace std;

int arr[100005];
int n;

// int binarysearch(int target)
// {
//     int st = 0;
//     int en = n - 1;
//     while (st <= en)
//     {
//         int mid = (st + en) / 2;
//         if (arr[mid] < target) // 오름 정렬이므로 idx mid 보다 작은 idx에 t가 위치 해야한다.
//             st = mid + 1;
//         else if (arr[mid] > target)
//             en = mid - 1;
//         else
//             return 1;
//     }
//     return 0; // st > en일 경우 while문을 탈출
// }
int binarysearch(int t)
{
    int st = 0;
    int ed = n - 1;
    while (st <= ed)
    {
        int mid = (st + ed) / 2;
        if (arr[mid] < t)// 오름 정렬이므로 idx mid 보다 작은 idx에 t가 위치 해야한다.
        {
            st = mid + 1;
        }
        else if (arr[mid] > t)
        {
            ed = mid - 1;
        }
        else 
            return 1;
    }
    return 0;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // 정렬
    // int temp; //시간초과 난다.
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    sort(arr, arr + n);
    int m;
    cin >> m;
    while (m--)
    {
        int t;
        cin >> t;
        cout << binarysearch(t) << '\n';
    }
}