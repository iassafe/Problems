#include<iostream>
#include<map>
#define ll long long
using namespace std;

int main()
{
    ll size;
    ll len;
    map < ll , ll> ma;
    cin >> size;
    while(size > 0)
    {
        ll hh;
        cin >> hh;
        ma[hh]++;
        size--;
    }
    cin >> len;
    while(len > 0)
    {
        ll nb;
        cin >> nb;
        if (ma.find(nb) != ma.end())
            cout << "YES\n";
        else
            cout << "NO\n";
        len--;
    }
}