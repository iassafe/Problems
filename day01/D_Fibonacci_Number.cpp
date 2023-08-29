#include<iostream>
using namespace std;
#define ll long long
#include<map>
map<ll,ll>ma;

ll fib(ll nbr)
{
    if (ma.find(nbr) != ma.end())
        return(ma[nbr]);
    if (nbr > 1)
    {
        ll res = fib(nbr -1) + fib(nbr - 2);
        ma[nbr] = res;
        return (res);
    }
    else
        return(1);
}
int main()
{
    ll nb;

    cin >> nb;
    cout << fib(nb) << "\n";
}