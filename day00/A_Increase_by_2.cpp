#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int i;
    int *tab;

    scanf("%d", &n);
    tab = (int *)malloc(sizeof(int) * n);
    if (!tab)
        return (0);
    for (i = 0; i < n; i++)
        scanf("%d", &tab[i]);
    for (i = 0; i < n; i++)
    {
        if (tab[i] >= 0)
            cout << (tab[i] + 2);
        if (tab[i] < 0)
            cout << tab[i];
        if ((i + 1) < n)
            cout << " ";
    }
}