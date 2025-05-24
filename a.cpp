#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        int apu[3];
        apu[0] = a;
        apu[1] = b;
        apu[2] = a ^ b;

        cout << apu[n % 3] << endl;
    }

    return 0;
}
