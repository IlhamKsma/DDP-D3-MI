#include <iostream>

using namespace std;

int main()
{
    int b, a;
    cin >> b >> a;

    for (int i = b; i >= a; i--)
    {
        cout << i << " " << endl;
    }
    cout << "" << endl;

    return 0;
}