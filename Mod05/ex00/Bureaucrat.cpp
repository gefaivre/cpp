#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat( void ):name(""), grade(1)
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
	checkGrade();

}

Bureaucrat::Bureaucrat( const std::string  name, int grade):name(name), grade(grade)
{
	std::cout << "Bureaucrat Constructor called" << std::endl;
	checkGrade();

}

Bureaucrat::Bureaucrat(const Bureaucrat &p)
{
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
	*this = p;

}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Default Destructor called" << std::endl;

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    this->grade = other.grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const 
{
	return (this->grade);
}

void Bureaucrat::upperGrade(int incrementValue)
{
	this->grade -= incrementValue;
	checkGrade();
}

void Bureaucrat::lowerGrade(int decrementValue)
{
	this->grade += decrementValue;
	checkGrade();
}

void Bureaucrat::checkGrade() const
{
	if ( this->grade < this->gradeMax )
		throw Bureaucrat::tooHightExeption();
	if ( this->grade > this->gradeMin )
		throw Bureaucrat::tooLowExeption();
}

std::ostream &	operator<<( std::ostream &os, Bureaucrat const &p)
{
	os << p.getName() << ", Bureaucrat grade " << p.getGrade();
	return os;
}

