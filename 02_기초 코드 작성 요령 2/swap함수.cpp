#include <iostream>
#include <algorithm>
using namespace std;

int a = 4;
int b = 11;
void change(int a)
{
    a = 5;
    cout << a << "\n";
}

int main()
{
    change(a);
    cout << a << "\n";
    swap(a, b);
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
}
