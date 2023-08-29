#include<iostream>
#include<vector>
#define ll long long
using namespace std;
ll mod = 1000000007;

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
    ll query;

    cin >> size >> query;
    vector<ll>vec(size);
    ll i = 0;
    while (i < size)
    {
        cin >> vec[i];
        i++;
    }
    vector<ll>prefix_sum(size);
    prefix_sum[0] = vec[0];
    for(i = 1; i < size; i++)
        prefix_sum[i] = (vec[i] * prefix_sum[i - 1])%mod;
    while(query > 0)
    {
        ll start;
        ll end;
        cin >> start >> end;
        if (start == 1 || start == end)
            cout <<prefix_sum[end - 1] % mod<< "\n";
        else if (start < end)
            cout << (prefix_sum[end - 1]%mod * power_of_nb((prefix_sum[start - 2]),(mod-2), mod))%mod << "\n";
        query--;
    }
    return (0);
}