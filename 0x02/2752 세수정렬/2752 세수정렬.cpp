#include <iostream>
using namespace std;

int    main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[3];
    int temp;
    int i = 0;

    while (i < 3)
    {
        cin >> arr[i];
        i++;
    }

    i = 0;
    int j;
    while (i < 3)
    {
        j = i + 1;
        while (j < 3)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < 3)
    {
        cout << arr[i] << " ";
        i++;
    }
}