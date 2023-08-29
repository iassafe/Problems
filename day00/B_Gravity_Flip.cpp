#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int i;
    int j;
    int *tab;
    int tmp;

    scanf("%d", &n);
    tab = (int *)malloc(sizeof(int) * n);
    if (!tab)
        return (0);
    for (i = 0; i < n; i++)
        scanf("%d", &tab[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (tab[i] >= tab[j])
            {
               tmp = tab[i];
               tab[i] = tab[j];
               tab[j] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << tab[i];
        if ((i + 1) < n)
            cout << " ";
    }
}
