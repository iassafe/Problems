#include<iostream>
using namespace std;
#include<vector>
#define ll long long

int main()
{
    ll size;
    ll dif;
    ll index = 0;

    cin >> size;
    vector<ll>vec(size);
    cin >> vec[0];
    for(ll i = 1; i < size; i++)
    {
        ll nbr;
        cin >> nbr;
        dif = vec[i - 1] - nbr;
        if (dif > 0)
        {
            vec[i] = dif + nbr;
            index += dif;
        }
        else
            vec[i] = nbr;
    }
    cout << index << "\n";
}