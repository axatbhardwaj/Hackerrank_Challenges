#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    long int b;
    char c;
    float d;
    double e;

    //for (char i = 'a'; i <= 'e'; i++)
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    //for (char i = 'a'; i <= 'e'; i++)

    cout << setprecision(20) << a << endl;
    cout << setprecision(20) << b << endl;
    cout << setprecision(20) << c << endl;
    cout << setprecision(20) << d << endl;
    cout << setprecision(20) << e << endl;

    return 0;
}
