#include <iostream>
#include <stack>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    int i;
    int nbr;
    int n;

    cin >> k;
    stack<int> stk;
    for (i = 0; i < k; i++)
    {
        cin >> nbr;
        if (nbr == 1)
        {
            cin >> n;
            stk.push(n);
        }
        else if (nbr == 2)
        {
            if (!stk.empty())
                stk.pop();
        }
        else if (nbr == 3)
        {
            if (stk.empty())
                cout << "Empty!" << "\n";
            else
                cout << stk.top() << "\n";
        }
    }
}