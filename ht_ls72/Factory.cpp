#include "Factory.h"

Factory::Factory()
{
}

void Factory::display()
{
	if (workers.empty())
	{
		std::cout << "No workers in factory((" << std::endl;
	}
	else {
		std::cout << "There are " << workers.size() << " workers in factory" << std::endl;
		for (int i = 0; i < workers.size(); i++)
		{
			workers[i].display();
		}
	}
}

void Factory::addWorkers(const Worker& workerr)
{
	workers.push_back(workerr);
}

void Factory::delWorkers(std::string name)
{
	if (workers.empty())
	{
		std::cout << "No one workers on factory!" << std::endl;
	}
	else {
		if (searchByName(name) == workers.end())
		{
			std::cout << "worker not exists" << std::endl;
		}
		else
		{
			workers.erase(searchByName(name));
			std::cout << "worker erased!!" << std::endl;
		}
	}
}

std::vector<Worker>::iterator Factory::searchByName(std::string name)
{
	std::vector<Worker>::iterator iter;
	for (iter = workers.begin(); iter != workers.end(); iter++)
	{
		if ((*iter).getName() == name)
		{
			return iter;
			break;
		}
	}
	
}
