#include "Worker.h"

Worker::Worker() : name("-"), age(0),proffesion("-")
{
}

Worker::Worker(std::string name, int age, std::string proffesion)
	:  name(name), age(age), proffesion(proffesion)
{
}

void Worker::display()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age: " << age << std::endl;
	std::cout << "Proffesion: " << proffesion << std::endl;
}

std::string Worker::getName()
{
	return std::string(name);
}

int Worker::getAge()
{
	return age;
}
