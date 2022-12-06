#include <iostream>
using namespace std;

int year(int y)
{
    if((y %4 ==0 && !(y%100 == 0)) || y% 400 == 0)
            return 1;
        else 
            return 0;
}
    
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int y;
    cin >> y;
    cout << year(y);
}