#include<iostream>
#include<string>
using namespace std;
#include<map>

int main()
{
    int n;
    int max;
    string str;

    cin >> n;
    max = 0;
    map < string , int> ma;
    while (n > 0)
    {
        cin >> str;
        ma[str]++;
        if (ma[str] > max)
            max = ma[str];
        n--;
    }
    string value;
    for(auto x: ma)
    {
        if (x.second == max)
        {
            if (x.first > value)
                value = x.first;
        }
    }
    cout << value << ' ' << max << '\n';
}