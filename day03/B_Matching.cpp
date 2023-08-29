#include<iostream>
#include<string>
#define ll long long
using namespace std;

int main()
{
    ll size;
    string str;

    cin >> size;
    cin.ignore();
    while(size > 0)
    {
        getline(cin, str);
        if (str[0] == 0 + 48)
            cout << 0 << "\n";
        else
        {
            ll i = 1;
            ll nb = 1;
            if (str[0] == '?')
                nb = 9;
            while(str[i])
            {
                if (str[i] == '?')
                    nb *= 10;
                i++;
            }
            cout << nb << "\n";
        }
        size--;
    }
}