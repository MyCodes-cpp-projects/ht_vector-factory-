

#include "Factory.h"
int main()
{
	Factory fac;
	fac.display();
	std::cout << std::endl;

	fac.addWorkers(Worker("Nikita", 15, "Director"));
	fac.display();

	std::cout << std::endl;

	fac.addWorkers(Worker("Vasiliy", 25, "Bughalter"));
	fac.display();

	std::cout << std::endl;

	fac.delWorkers("Nikita");
	fac.display();
}

