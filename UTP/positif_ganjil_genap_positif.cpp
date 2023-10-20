#include <iostream>

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
        cout << "Positif Genap" << endl;
    }
    else if (x == 101)
    {
        cout << "Positif Ganjil" << endl;
    }
    return 0;
}