#include<iostream>
#include<vector>
#include<map>
#define ll long long
using namespace std;

int main()
{
    ll size;
    ll sum;
    ll index;

    index = 0;
    map<ll, ll>ma;
    cin >> size >> sum;
    vector<ll>vec(size);
    ll i = 0;
    while (i < size)
    {
        cin >> vec[i];
        i++;
    }
    vector<ll>prefix_sum(size);
    prefix_sum[0] = vec[0];
    if (prefix_sum[0] == sum)
        index++;
    ma[0]++;
    ma[prefix_sum[0]]++;
    for(i = 1; i < size; i++)
    {
        prefix_sum[i] = vec[i] + prefix_sum[i - 1];
        if (ma[prefix_sum[i] - sum])
            index += ma[prefix_sum[i] - sum];
        // cout<< index << "----\n";
        ma[prefix_sum[i]]++;
    }
    cout << index << "\n";
    return (0);
}