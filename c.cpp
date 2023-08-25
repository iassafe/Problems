
#include <iostream>
#include <stack>
#include <stdio.h>

int main(void)
{
    int k;
    int n;
    int i;
    int nbr;

    std::cin >> k;
    std::stack<int> stk;
    for (i = 0; i < k; ++i)
    {
        std::cin >> nbr;
        if (nbr == 1)
        {
            std::cin >> n;
            stk.push(n);
        } 
        if (nbr == 2) 
        {
            if (!stk.empty())
                stk.pop();
        } 
        else if (nbr == 3) 
        {
            if (!stk.empty())
                printf("%d\n", stk.top());
            else
                printf("Empty!\n");
        }
    }
    return 0;
}