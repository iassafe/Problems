#include<iostream>
#include<string>
using namespace std;
#define ll long long

int main()
{
    ll size;
    string nb_add;
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
        while(str[i])
        {
            if (str[i] < nb_add[0])
            {
                flag = 1;
                str.insert(i, nb_add);
                break;
            }
            i++;
        }
        if (flag == 0)
            cout << str << nb_add << "\n";
        else
            cout << str << "\n";
        size--;
    }
}