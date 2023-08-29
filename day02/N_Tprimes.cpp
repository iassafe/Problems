#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
#define ll long long

int main()
{
    ll size;

    cin >> size;
    vector<bool>prim(1e6 + 1, true);
    prim[0] = false;
    prim[1] = false;
    for(ll i = 2 ; i < 1e6+1;i++)
    {
        if(prim[i])
        {
            for(ll j = i*2;j<1e6 + 1 ; j+=i)
                prim[j] = false;
        }
    }
    while (size > 0)
    {
        ll nb;
        cin >> nb;
        ll sqr_nb = sqrt(nb);
        if (prim[sqr_nb]  && sqr_nb * sqr_nb == nb)
            cout << "YES\n";
        else
            cout << "NO\n";
        size--;
    }
}

