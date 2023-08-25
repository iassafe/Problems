#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    int x;
    int nbr;
    int flag;
    int nb1;
    int nb2;

    cin >> n >> x;
    vector<int> vec(n);
    int i = 0;
    while (i < n)
        cin >> vec[i++];
    i = 0;
    flag = 0;
    while(vec[i])
    {
        int j = i + 1;
        while(vec[j])
        {
            nbr = vec[i] + vec[j];
            if(nbr == x)
            {
                flag = 1;
                nb1 = i + 1;
                nb2 = j + 1;
                break;
            }
            j++;
        }
        if (flag == 1)
            break;
        i++;
    }
    if (flag == 1)
        cout << nb1 << " " << nb2 << "\n";
    else
        cout << "IMPOSSIBLE\n";
    return(0);
}
