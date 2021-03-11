#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a  b" << endl;
    int a, b, ost;
    cin >> a >> b;
    while (a != 0)
    {
        ost = a % 10;
        int bb = b;
        while (bb != 0)
        {
            if (ost == bb % 10)
            {
                cout << ost << " ";
                bb = 0;
            }
            bb /= 10;
        }
        a /= 10;
    }
    return 0;
}