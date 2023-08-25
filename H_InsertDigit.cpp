#include<iostream>
#include<string>
using namespace std;
#define ll long long

int main()
{
    ll size;
    ll nb_add;
    ll len_str;
    string str;

    cin >> size;
    while(size > 0)
    {
        cin >> len_str >> nb_add;
        cin.ignore();
        getline(cin, str);
        ll i = 0;
        ll flag = 0;
        for(i = str.size()-1; i > 0; i--)
        {
            // if (nb_add == 0 || nb_add == 1)
            // {
            //     if (nb_add == 1)
            //     {
            //         ll j = 0;
            //         while(str[j])
            //         {
            //             if (str[j] == (0 + 48))
            //             {
            //                 cout << str.substr(0, (j)) << nb_add << str.substr(j) << "\n";
            //                 flag = 1;
            //                 break;
            //             }
            //             j++;
            //         }
            //     break;
            //     }
            // }
            if (nb_add >= (str[i] - 48))
            {
                flag = 1;
                cout << str.substr(0, i) << nb_add << str.substr(i) << "\n";
                break;
            }
            i++;
        }
        if (flag == 0)
            cout << str << nb_add << "\n";
        size--;
    }
}