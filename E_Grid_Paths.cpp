#include<iostream>
#include<vector>
#include<string>
#define ll long long
using namespace std;
ll mod=1e9 + 7;

int main()
{
    ll size;
    string str;

    cin >> size;
    cin.ignore();
    vector<vector<ll> >vec(size, vector<ll>(size));
    ll i;
    for(i = 0; i < size; i++)
    {
        getline(cin, str);
        ll j = 0;
        while(str[j])
        {
            if (str[j] == '.')
                vec[i][j] = 1;
            else
                vec[i][j] = 0;
            j++;
        }
    }
    if (vec[0][0] == 0 || vec[size - 1][size - 1] == 0)
    {
        cout << 0 << "\n";
        return(0);
    }
    for(i = 0; i < size; i++)
    {
        for(ll j = 0; j < size; j++)
        {
            if (vec[i][j] == 1)
            {
                if (i == 0 && j == 0)
                    vec[i][j] = vec[i][j];
                else if (j == 0 && i > 0)
                    vec[i][j] = vec[i - 1][j];
                else if (j > 0 && i == 0)
                    vec[i][j] = vec[i][j - 1];
                else if ((i - 1) >= 0 && (j - 1) >= 0)
                    vec[i][j] = (vec[i - 1][j]%mod + vec[i][j - 1]%mod)%mod;
            }
        }
    }
    cout << vec[size - 1][size - 1] << "\n";
}


// #include <iostream>
// #include <map>
// #include <vector>
// #include <string>

// long long mod=1e9 + 7;
// using namespace std;
// int main(void)
// {
//     int n;
//     cin >> n;
//     cin.ignore();
//     vector<map<long long, long long> > v(n);
//     for (int i = 0; i < n; i++)
//     {
//         string str;
//         cin >> str;
//         for(int j = 0; j < n; j++)
//         {
//             if (str[j] == '.')
//                 v[i][j] = 1;
//             else if (str[j] == '*')
//                 v[i][j] = 0;
//         }
//     }
//     for(int i = 1; i < n; i++)
//     {
//         for(int j = 1; j < n; j++)
//         {
//             if (v[i][j] == 1)
//                 v[i][j] = (v[i - 1][j]%mod + v[i][j - 1]%mod)%mod;
//         }
//     }
//     cout << v[n - 1][n - 1] << "\n";
// }