#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form::Form("RobotomyRequestForm", 72, 45), _target("null") {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form::Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy): Form::Form(copy), _target(copy._target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm const	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	Form::operator=(copy);
	this->_target = copy._target;
	return (*this);
}

void	RobotomyRequestForm::beExecuted(const Bureaucrat &bureaucrat) const
{
	int	success;

	srand((unsigned) time(NULL));
	success = rand() % 2;
	(void)bureaucrat;
	if (success)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << "'s robotomization failed" << std::endl;
}

std::ostream	&operator<<(std::ostream &str, RobotomyRequestForm const &form)
{
	return (str << form.getName() << " form, signed: " << form.getIsSigned() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade());
}

