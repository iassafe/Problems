#include<iostream>
#include<vector>
#define ll long long
using namespace std;
ll mod=1e9 + 7;

int main()
{
    ll size;
    cin >> size;
    vector<ll>dp(size + 1);
    dp[0] = 1;
    for(ll i = 1; i <= size; i++)
    {
        for(ll j = 1; j <= 6 && i - j >= 0; j++)
        {
            dp[i] = (dp[i] + dp[i - j])%mod;
        }
    }
    cout << dp[size] << "\n";
}