#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern {
	private:
	 Form *createShrubberyForm(const std::string& target);
	 Form *createRobotomyForm(const std::string& target);
	 Form *createPresidentialForm(const std::string& target);

	 class InternException : public std::exception {
		private:
		 const char *what() const throw();
	 };

	public:
	 Intern();
	 Intern(const Intern& origin);
	 ~Intern();
	 Intern& operator=(const Intern& other);

	 Form *makeForm(const std::string& formName, const std::string& target);
};

#endif