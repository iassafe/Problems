#include<iostream>
#define ll long long
#include<vector>
using namespace std;
ll mod=1e9 + 7;

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
ll power_of_nb(ll nb, ll exp, ll mod)
{
    ll res;
    if (exp == 0)
        return (1);
    if (exp == 1)
        return (nb%mod);
    res = power_of_nb(nb, (exp/2), mod);
    if (exp % 2 == 0)
        return((res * res)%mod);
    else
        return(((res * res)%mod * nb%mod)%mod);
}
int main()
{
    ll size;
    cin >> size;
    vector<ll>fact(1e6+ 1);
    fact[0] = 1;
    for(ll i = 1; i< 1e6 + 1 ; i++)
    fact[i] = (i * fact[i - 1])%mod;
    while(size > 0)
    {
        ll a, b;
        cin >> a >> b;
        cout << (fact[a]%mod * power_of_nb(fact[b]%mod*fact[a - b]%mod, mod-2, mod)%mod)%mod <<"\n";
        size--;
    }

}