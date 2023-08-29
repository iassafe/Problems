#include<iostream>
#include<cmath>
using namespace std;
#define ll long long

int main(void)
{
    ll n;
    cin >> n;
    cout << (-1 + (ll)sqrt(1 + 8*n))/2 << "\n" ;
}