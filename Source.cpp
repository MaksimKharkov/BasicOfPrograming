
#include <iostream>

using namespace std;

int main()
{
    int n, s = 1, sum, last = 0;
    cout << "Input n=" << endl;
    cin >> n;
    for (int i = 1; ; i++)
    {
        sum = 0;
        for (int j = 1; j <= i; j++)
        {
            last++;
            sum += last;
            if (last == n)
            {
                s *= sum;
                cout << s;
                return 0;
            }

        }
        s *= sum;
    }
}