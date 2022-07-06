#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(std::string name)
{
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &p)
{
	std::cout << "Cat Copy constructeur called" << std::endl;
	*this = p;
}

Cat::~Cat(void)
{
	std::cout << "Cat Default destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	this->type = other.type;
	return (*this);
}

