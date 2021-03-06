#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &f);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

    virtual void FormFunction() const;

private:
    ShrubberyCreationForm();
};
#endif