#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int** matr, * vector, * result_vector, n, m, k;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    cout << "k = ";
    cin >> k;
    matr = new int* [n];
    for (int i = 0; i < n; ++i)
        matr[i] = new int[m];
    vector = new int[k];
    cout << "vector = " << endl;
    for (int i = 0; i < k; ++i) {
        vector[i] = 1 + rand() % 9;
        cout << setw(3) << vector[i];
    }
    result_vector = new int[n];
    cout << "\nmatrix =" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matr[i][j] = 1 + rand() % 9;
            cout << setw(3) << matr[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < n; ++i)
        result_vector[i] = 0;
    cout << "result = " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            for (int l = 0; l < k; ++l)
                result_vector[i] += matr[i][j] * vector[l];
        cout << result_vector[i] << ' ';
    }
    delete[] result_vector;
    delete[] vector;
    for (int i = 0; i < n; ++i)
        delete[] matr[i];
    delete[] matr;
}