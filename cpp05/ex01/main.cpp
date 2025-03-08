#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		try
		{
			Form form1("xxx", 1, 6);
			std::cout << form1 << std::endl;
		}
		catch(std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}

	std::cout << "\n --------------------- \n\n";
	{
		try
		{
			Bureaucrat j("jason", 2);
			Form form("xx-1", 20, 45);
			std::cout << j << std::endl;
			std::cout << form << std::endl;
			j.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << "\n --------------------- \n\n";
	{
		try
		{
			Bureaucrat asdf("asdf", 35);
			Form form2("asdf", 20, 45);
			std::cout << asdf << std::endl;
			std::cout << form2 << std::endl;
			asdf.signForm(form2);
			std::cout << form2 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}


