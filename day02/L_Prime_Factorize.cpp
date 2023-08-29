#include<iostream>
using namespace std;
#define ll long long

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
    ll nb;
    ll index;
    cin >> nb;
    index = 2;
    cout << nb << ":";
    if (ft_is_prime(nb) == 1)
    {
        cout << " " << nb << "\n";
        return (0);
    }
    while(nb > 1)
    {
        if (nb % index == 0)
        {
            nb = nb / index;
            cout << " " << index;
        }
        else
            index++;
    }
    cout << "\n";
}