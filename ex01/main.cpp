#include "iter.hpp"

void	incrementation(int *tab)
{
	*tab = *tab + 1;
}


int main(void)
{
	int	tab[5] = {0, 1, 2, 3, 4};

	iter(tab, 5, incrementation);
	std::cout << tab[0] << " " << tab[1] << " " << tab[2] << " " << std::endl;
	return (0);
}
