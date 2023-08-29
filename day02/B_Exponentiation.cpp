#include<iostream>
#define ll long long
using namespace std;
ll mod=1e9 + 7;

ll power_of_nb(ll nb, ll exp)
{
    ll res;
    if (exp == 0)
        return (1);
    if (exp == 1)
        return (nb%mod);
    res = power_of_nb(nb, (exp/2));
    if (exp % 2 == 0)
        return((res * res)%mod);
    else
        return(((res * res)%mod * nb%mod)%mod);
}
int main()
{
    ll size;

    cin >> size;
    while(size > 0)
    {
        ll nb;
        ll exp;
        cin >> nb >> exp;
        cout << power_of_nb(nb, exp) << "\n";
        size--;
    }
}