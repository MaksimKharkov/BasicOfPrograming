#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Number:";
    cin >> num;
    cout << "Number of terms" << " " << num / 2 << endl; 
    while (num > 3)
    {
        cout << 2 << " ";
        num = num - 2;
    }
    cout << num; 
    return 0;
}