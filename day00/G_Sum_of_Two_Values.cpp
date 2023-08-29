#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    int x;;

    cin >> n >> x;
    map<int, int > ma;
    int i = 0;
    while (i++ < n)
    {
        int nbr;
        cin >> nbr;
        if (ma[x - nbr])
        {
            cout << ma[x - nbr] << " " << i << "\n";
            return (0);
        }
        ma[nbr] = i;
    }
    cout << "IMPOSSIBLE\n";
    return(0);
}