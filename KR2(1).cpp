//Але я робив всі задачі в онлайн компілторі бо у мене проблеми з ноутбуком були
//і я не встиг закачати бо очищував повінстю все
//тому у Віжуал Студіо можуть бути помилки хоча в онлайн компілторі все було добре  
#include <iostream>
using namespace std;
int main()
{
    int n, k = 0;
    cout << "enter n: ";
    cin >> n;
    int* t = new int[n];
    int* mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> t[i];
    if (t[0] > t[1])
    {
        mas[k] = t[0];
        k++;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (t[i] > t[i - 1] + t[i + 1])
        {
            mas[k] = t[i];
            k++;
        }
    }
    if (t[n - 1] > t[n - 2])
    {
        mas[k] = t[n - 1];
        k++;
    }
    for (int i = 0; i < k; i++)
        cout << mas[i] << " ";
    delete[] t;
    delete[] mas;
    t = 0;
    mas = 0;
    return 0;
}