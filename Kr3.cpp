#include <iostream>

using namespace std;
int rec(int x, int i)
{
    return 2 * x + i * i;
}

int main()
{
    int n, sum = 0, a = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a = rec(a, i);
        sum += a;
    }
    cout << sum;
    return 0;
}