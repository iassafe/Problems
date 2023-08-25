#include <iostream>
#include <queue>
#define ll long long
using namespace std;

int main()
{
    int n_stk;
    ll  k;
    int task;
    int stack;
    int nb_push;

    cin >> n_stk >> k;
    priority_queue<int> pq[n_stk];
    while(k > 0)
    {
        cin >> task >> stack;
        if (task == 0)
        {
            cin >> nb_push;
            pq[stack].push(nb_push);
        }
        else if (task == 1 && !pq[stack].empty())
            cout << pq[stack].top() << "\n";
        else if (task == 2 && !pq[stack].empty())
            pq[stack].pop();
        k--;
    }
}