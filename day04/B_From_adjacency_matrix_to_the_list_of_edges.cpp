#include<iostream>
#include<map>
using namespace std;
#define ll long long

int main()
{
    ll size;

    cin >> size;
    map<ll,map<ll, ll> > ma;
    for(ll i = 1; i <= size; i++)
    {
        for(ll j = 1; j <= size; j++)
            cin >> ma[i][j];
    }
    for(ll i = 1; i <= size; i++)
    {
        for(ll j = 1; j <= size; j++)
        {
            if (ma[i][j] == 1)
            {
                cout << i << " " << j << "\n";
                ma[j][i] = 0;
            }
        }
    }
}