#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;

    cout << "Hasil dari Penjumlahan " << a << " dengan " << b << " adalah ";
    cout << a + b << endl;
    cout << "Hasil dari Pengurangan " << a << " dengan " << b << " adalah ";
    cout << a - b << endl;
    cout << "Hasil dari Perkalian " << a << " dengan " << b << " adalah ";
    cout << a * b << endl;
    cout << "Hasil dari Pembagian " << a << " dengan " << b << " adalah ";
    cout << a / b << endl;

    return 0;
}