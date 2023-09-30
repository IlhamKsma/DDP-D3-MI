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

    if (x == -10)
    {
        cout << "Negatif" << endl;
    }
    else if (x == 10)
    {
        cout << "Positif Genap";
    }
    else if (x == 101)
    {
        cout << "Positif Ganjil";
    }
    return 0;
};