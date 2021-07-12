#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++)
    {
        if (i < 1)
        {
            cout << "Smaller than 1";
        }
        else if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << "even";
            }
            else
            {
                cout << "odd";
            }
        }
        else if (i == 1)
        {
            cout << "one";
        }
        else if (i == 2)
        {
            cout << "two";
        }
        else if (i == 3)
        {
            cout << "three";
        }
        else if (i == 4)
        {
            cout << "four";
        }
        else if (i == 5)
        {
            cout << "five";
        }
        else if (i == 6)
        {
            cout << "six";
        }
        else if (i == 7)
        {
            cout << "seven";
        }
        else if (i == 8)
        {
            cout << "eight";
        }
        else if (i == 9)
        {
            cout << "nine";
        }
        cout << endl;
    }
}