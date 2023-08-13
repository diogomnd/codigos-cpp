#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        array[i] = x;
    }

    int lengthOfArray = sizeof(array) / sizeof(array[0]);

    int min = array[0];
    int pos = 0;
    for (int i = 0; i < lengthOfArray; i++)
    {
        if (array[i] <= min)
        {
            min = array[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << min << "\n";
    cout << "Posicao: " << pos << "\n";

    return 0;
}
