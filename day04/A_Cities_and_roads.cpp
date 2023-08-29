#include<iostream>
#include<vector>
#include<string>
#define ll long long
using namespace std;

int main()
{
    ll size;
    ll index;

    cin >> size;
    ll len = size;
    ll size2 = size;
    index = 0;
    while(size > 0)
    {
        len = size2;
        while (len > 0)
        {
            ll nb;
            cin >> nb;
            if (nb == 1)
                index++;
            len--;
        }
        size--;
    }
    cout << index/2 << "\n";
}