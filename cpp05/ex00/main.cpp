#include "Bureaucrat.hpp"

int main(void)
{
	{
		try
		{
			Bureaucrat trumph("donald", 0);
			std::cout << trumph << std::endl;
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
			Bureaucrat elon("elon", 151);
			std::cout << elon << std::endl;
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
			Bureaucrat siyun("Siyun", 3);
			std::cout << siyun << std::endl;
			siyun.addGrade();
			std::cout << siyun << std::endl;
			siyun.addGrade();
			std::cout << siyun << std::endl;
			siyun.addGrade();
			std::cout << siyun << std::endl;
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
			Bureaucrat doji("doji", 149);
			std::cout << doji << std::endl;
			doji.subtractGrade();
			std::cout << doji << std::endl;
			doji.subtractGrade();
			std::cout << doji << std::endl;
			doji.subtractGrade();
			std::cout << doji << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}

