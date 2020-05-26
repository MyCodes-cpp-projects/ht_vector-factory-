#pragma once
#include <iostream>
#include <vector>
#include <string>

class Worker
{
	std::string name;
	int age;
	std::string proffesion;
public:
	Worker();
	Worker(std::string name,int age,std::string proffesion);

	void display();
	std::string getName();
	int getAge();
};

