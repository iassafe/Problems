#include<iostream>
using namespace std;
#define ll long long
ll mod = 998244353;
ll mult(ll a, ll b)
{
    return(((a%mod) * (b%mod))%mod);
}
int main()
{
    ll a, b, c, d, e, f;
    cin >> a>>b>>c>>d>>e>>f;
    cout << ( mult(mult(a, b), c) - mult(mult(d, e), f) + mod) %mod << "\n";
}