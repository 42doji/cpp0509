#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form::Form("ShrubberyCreationForm", 145, 137), _target("null") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form::Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy): Form::Form(copy), _target(copy._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm const	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	Form::operator=(copy);
	this->_target = copy._target;
	return (*this);
}

void	ShrubberyCreationForm::beExecuted(const Bureaucrat &bureaucrat) const
{
	std::ofstream	outfile;
	
	outfile.open((this->_target + "_shrubbery").c_str());
	if (outfile.fail())
	{
		std::cout << "Could not open output file" << std::endl;
		return ;
	}
	outfile << TREE;
	outfile.close();
	std::cout << bureaucrat.getName() << " successfully created a shrubbery" << std::endl;
}

Form	*ShrubberyCreationForm::makeForm(Form *form, std::string const &type, std::string const &target)
{
	if (form == NULL && type == "shrubbery creation")
		return (new ShrubberyCreationForm(target));
	return (form);
}

std::string const	&ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream	&operator<<(std::ostream &str, ShrubberyCreationForm const &form)
{
	return (str << form.getName() << " form, signed: " << form.getIsSigned() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
}

