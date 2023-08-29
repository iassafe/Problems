#include<iostream>
#include<vector>
#define ll long long
using namespace std;

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
        prefix_sum[i] = vec[i] + prefix_sum[i - 1];
    while(query > 0)
    {
        ll start;
        ll end;
        cin >> start >> end;
        if (start == 1)
            cout << prefix_sum[end - 1] << "\n";
        else if (start == end)
            cout << vec[start - 1] << "\n";
        else
            cout << (prefix_sum[end - 1] - prefix_sum[start - 2]) << "\n";
        query--;
    }
    return (0);
}