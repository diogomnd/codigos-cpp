#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int first = 0;
    int last = 1;

    if (n == 1)
        cout << first;
    else if (n > 1)
        cout << first << " " << last << " ";

    for (int i = 2; i < n; i++)
    {
        int next = first + last;
        first = last;
        last = next;
        if (i == (n - 1)) 
            cout << next;
        else
            cout << next << " ";
    }
    cout << "\n";
    return 0;
}