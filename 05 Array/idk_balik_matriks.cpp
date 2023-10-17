#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int matriks[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int l = 0; l < b; l++)
        {
            matriks[i][l] = (i + 1) * (l + 1);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int l = 0; l < b; l++)
        {
            cout << matriks[i][l] << " ";
        }
        cout << endl;
    }
    return 0;
}