#include<iostream>
using namespace std;
long long int sum=0;

long aVeryBigSum()
{
    long long int arr[1000];
    int n =0;int i=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    return sum;
}

int main()
{
    long long int x = aVeryBigSum();
    cout<< x;
}
