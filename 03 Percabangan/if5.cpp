#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char tipe;
    cin >> tipe;

    switch (tipe)
    {
    case 'A':
        cout << "Nilai kamu 100";
        break;

    case 'B':
        cout << "Nilai kamu 76 - 99";
        break;

    case 'C':
        cout << "Nilai kamu dibawah 76 :(";
        break;

    case 'E':
        cout << "Nilai Invalid";
        break;
    }

    return 0;
};