#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int head, tail;
    if (x > y) 
    {
        tail = x;
        head = y;
    } 
    else 
    {
        tail = y;
        head = x;
    }
    
    int sum = 0;
    for (int i = head + 1; i < tail; i++)
        if (i % 2 != 0) sum += i;

    cout << sum << "\n";

    return 0;
}