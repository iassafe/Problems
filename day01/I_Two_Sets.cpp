#include<iostream>
#include<set>
#define ll long long
using namespace std;

int main()
{
    ll size;
    cin >> size;
    set<ll>myset;
    set<ll>setanass;
    ll sum;
    ll nb_myset;
    ll nb_setanass;
    ll res = (size * (size + 1))/2;
    if (res % 2 == 0)
    {
        ll nb = res/2;
        for(ll i = size; i > 0; i--)
        {
            if ((nb - i) >= 0)
            {
                myset.insert(i);
                nb -= i;
            }
            else
                setanass.insert(i);
        }
        cout << "YES " << myset.size();
        for (auto x : myset)
            cout << " " << x;
        cout << " " << setanass.size();
        for (auto x : setanass)
            cout << " " << x;
        cout << "\n";
    }
    else
        cout << "NO\n";
}