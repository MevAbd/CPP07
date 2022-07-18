#include "iter.hpp"

void	upChar(char &arg)
{
	arg = arg - 32;
}


void	downInt(int &arg)
{
	arg--;
}

void	divFloat(float &arg)
{
	arg = arg / 10;
}

void	multiDouble(double &arg)
{
	arg = arg * 10;
}

int main(void)
{
	std::cout << "**************************************CHAR*******************************" << std::endl;
	char	tab[5] = {'a', 'b', 'c', 'd', 'e'};

	iter(tab, 5, printData);
	std::cout << std::endl;
	iter(tab, 5, upChar);
	iter(tab, 5, printData);
	std::cout << std::endl;



	std::cout << "**************************************INT*******************************" << std::endl;
	int	tab2[5] = {0, 1, 2, 3, 4};

	iter(tab2, 5, printData);
	std::cout << std::endl;
	iter(tab2, 5, downInt);
	iter(tab2, 5, printData);
	std::cout << std::endl;




	std::cout << "**************************************FLOAT*******************************" << std::endl;
	float	tab3[5] = {4.2f, 8.4f, 16.8f, 33.0f, 66.2f};

	iter(tab3, 5, printData);
	std::cout << std::endl;
	iter(tab3, 5, divFloat);
	iter(tab3, 5, printData);
	std::cout << std::endl;



	std::cout << "*************************************DOUBLE*******************************" << std::endl;
	double	tab4[5] = {4.2, 8.4, 16.8, 33.0, 66.2};

	iter(tab4, 5, printData);
	std::cout << std::endl;
	iter(tab4, 5, multiDouble);
	iter(tab4, 5, printData);
	std::cout << std::endl;
	return (0);
}
