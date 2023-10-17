#include <iostream>

using namespace std;

int main()
{
    int pantun;
    cin >> pantun;
    getchar();

    string arr[pantun];
    for (int i = 0; i < pantun; i++)
    {
        getline(cin, arr[i]);
    }
    for (int i = pantun - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
    return 0;
}