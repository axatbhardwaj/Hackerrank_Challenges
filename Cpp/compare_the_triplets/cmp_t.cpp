#include <iostream>

int main()
{
    int arra[3];
    int arrb[3];

    int score_a = 0;
    int score_b = 0;

    for (int i = 0; i < 3; i++)
    {
        std::cin >> arra[i];
    }

    for (int i = 0; i < 3; i++)
    {
        std::cin >> arrb[i];
    }

    for (int i = 0; i < 3; i++)
    {
        /*if (arra[i] == arrb[i])
        {
            break;
        }*/
        if (arra[i] > arrb[i])
        {
            score_a++;
        }
        else if (arra[i] < arrb[i])
        {
            score_b++;
        }
    }

    std::cout << score_a << " " << score_b;
}