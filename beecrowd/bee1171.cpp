#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    long long fib[60];
    fib[0] = 0;
    fib[1] = 1;

    int fibLength = sizeof(fib) / sizeof(fib[0]);

    for (int i = 0; i < t; i++)
    {
        for (int j = 2; j <= fibLength; j++)
            fib[j] = fib[j - 1] + fib[j - 2];
        int n;
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << "\n";
    }
    return 0;
}