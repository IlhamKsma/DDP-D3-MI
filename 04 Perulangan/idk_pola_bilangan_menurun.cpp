#include <iostream>

using namespace std;

int main()
{
    int b, a, c;
    cin >> b >> a >> c;

    for (int i = b; i >= a; i += c)
    {
        cout << i << " ";
    }
    return 0;
}