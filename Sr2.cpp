#include <iostream>

using namespace std;

int main()
{
    int n, vid = 0, mn = 1, ost;
    cout < "Enter n=";
    cin >> n;

    while (n != 0)
    {
        ost = n % 10;
        n = n / 10;
        if (ost == 1)
        {
            vid += mn;
        }
        mn *= 2;
    }
    cout << vid;
    return 0;
}