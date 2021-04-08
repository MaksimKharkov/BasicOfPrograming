#include <iostream>
using namespace std;
int main()
{
    int n, m, sum = 0;
    cout << "enter n and m: ";
    cin >> n >> m;
    double** t = new double* [n];
    for (int i = 0; i < n; i++)
        t[i] = new double[m];
    bool** mas = new bool* [n];
    for (int i = 0; i < n; i++)
        mas[i] = new bool[m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> t[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mas[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (mas[i][j]) sum += t[i][j];

    cout << sum;

    for (int i = 0; i < n; i++)
        delete[] t[i];
    for (int i = 0; i < n; i++)
        delete[] mas[i];
    return 0;
}