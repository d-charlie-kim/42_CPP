#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
	 const std::string	_name;
	 int				_grade;

	 class GradeTooHighException : public std::exception {
		public:
		 const char *what() const throw();
	 };

	 class GradeTooLowException : public std::exception {
		public:
		 const char *what() const throw();
	 };

	public:
	 Bureaucrat();
	 Bureaucrat(int grdae);
	 Bureaucrat(const std::string& name);
	 Bureaucrat(const std::string& name, int grade);
	 Bureaucrat(const Bureaucrat& origin);
	 ~Bureaucrat();
	 Bureaucrat& operator=(const Bureaucrat& other);

	 const std::string& getName() const;

	 void	setGrade(int grade);
	 int 	getGrade() const;

	 void	incrementGrade();
	 void	decrementGrade();

	 void	signForm(Form &form) const;

	 void	executeForm(const Form& form);
};

std::ostream& operator<<(std::ostream &ost, const Bureaucrat &src);

#endif