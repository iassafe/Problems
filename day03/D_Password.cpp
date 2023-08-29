#include<iostream>
#include<string>
#define ll long long
using namespace std;
#include<vector>

ll calcul_fact(ll nb)
{
    ll fac;
    fac = 1;
    while(nb >= 1)
    {
        fac *= nb;
        nb--;
    }
    return(fac);
}
ll comb(ll n, ll r)
{
    return(calcul_fact(n) / (calcul_fact(r) * calcul_fact(n - r)));
}

int main()
{
    ll size;
    cin >> size;
    while (size > 0)
    {
        ll n;
        cin >> n;
        ll nbr = n;
        while (n > 0)
        {
            ll nb;
            cin >> nb;
            n--;
        }
        cout << comb(10 - nbr, 2) * comb(4, 2) << "\n";
        size--;
    }
}