#include<iostream>
#define ll long long
using namespace std;

ll	ft_is_prime(ll nb)
{
	ll	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
int main()
{
    ll start;
    ll end;
    ll flag = 0;
    cin >> start >> end;
    while (start <= end)
    {
        if (ft_is_prime(start) == 1)
        {
            flag = 1;
            cout << start << "\n";
        }
        start++;
    }
    if (flag != 1)
        cout << "Absent\n";
}