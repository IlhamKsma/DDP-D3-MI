#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x >= 0 && x <= 9)
    {
        cout << "Satuan";
    }
    else if (x >= 10 && x <= 99)
    {
        cout << "Puluhan";
    }
    else if (x >= 100 && x <= 999)
    {
        cout << "Ratusan";
    }
    else if (x == 1000)
    {
        cout << "Tidak Tahu";
    }
    return 0;
}