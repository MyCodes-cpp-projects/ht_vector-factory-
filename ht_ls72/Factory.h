#pragma once
#include "Worker.h"
class Factory
{
	std::vector<Worker> workers;
public:
	Factory();
	void display();
	void addWorkers(const Worker&workerr);
	void delWorkers(std::string name);


	std::vector<Worker>::iterator searchByName(std::string name);

	
};

