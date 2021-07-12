#include <iostream>
#include <cstdlib>
int main()
{
    int arr[100][100];
    int n;
    std::cin >> n;
    int d1 = 0;
    int d2 = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; i <= 0; j++)
        {
            d1 += arr[i][j];
        }
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j < 0; j--)
        {
            d2 -= arr[i][j];
        }
    }

    int out = d2 - d1;
    return abs(out);
}