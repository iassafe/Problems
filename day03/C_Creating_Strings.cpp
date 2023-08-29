#include <iostream>
#include <vector>
#include <map>
#include <string>
#define ll long long
using namespace std;
ll mod = 1e9 + 7;

ll power_of_nb(ll nb, ll exp, ll mod)
{
    ll res;
    if (exp == 0)
        return (1);
    if (exp == 1)
        return (nb % mod);
    res = power_of_nb(nb, (exp / 2), mod);
    if (exp % 2 == 0)
        return ((res * res) % mod);
    else
        return (((res * res) % mod * nb % mod) % mod);
}

int main()
{
    string str;
    ll len;
    ll i;

    vector<ll> fact(1e6+1);
    fact[0] = 1;
    for (i = 1; i < (1e6 + 1); i++)
        fact[i] = (i * fact[i - 1]) % mod;
    map<ll, ll> ma;
    getline(cin, str);
    len = str.size();
    for (i = 0; i < len; i++)
        ma[str[i]]++;
    i = 0;
    ll nb = 1;
    for (auto x : ma)
        nb = (nb * fact[x.second]) % mod;
    cout << ((fact[len] % mod) * power_of_nb(nb, mod - 2, mod) % mod) % mod << "\n";
}