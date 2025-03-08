#pragma once

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm: public Form
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		~PresidentialPardonForm(void);

		PresidentialPardonForm const	&operator=(PresidentialPardonForm const &copy);

		void		beExecuted(Bureaucrat const &bureaucrat) const;
		static Form	*makeForm(Form *form, std::string const &type, std::string const &target);

		std::string const	&getTarget(void) const;
};

std::ostream	&operator<<(std::ostream &str, PresidentialPardonForm const &form);

