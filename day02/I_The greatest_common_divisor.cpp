#include<numeric>
#include<iostream>
using namespace std;
#define ll long long

int main()
{
    ll nb1;
    ll nb2;
    ll pgcd;
    ll size;

    cin >> size;
    cin >> nb1;
    while((size -1) > 0)
    {
        cin >> nb2;
        nb1 = gcd(nb1, nb2);
        size--;
    }
    cout << nb1 << "\n";
}