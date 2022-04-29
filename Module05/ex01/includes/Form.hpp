#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
	 const std::string	_name;
	 bool				_isSigned;
	 const int			_gradeForSign;
	 const int			_gradeForExe;

	 class GradeTooHighException : public std::exception {
		public:
		 const char *what() const throw();
	 };

	 class GradeTooLowException : public std::exception {
		public:
		 const char *what() const throw();
	 };

	 class FormIsAlreadySigned : public std::exception {
		public:
		 const char *what() const throw();
	 };

	public:
	 Form();
	 Form(const std::string& name);
	 Form(const int gradeForSign, const int gradeForExe);
	 Form(const std::string& name, const int gradeForSign, const int gradeForExe);
	 Form(const Form& origin);
	 ~Form();
	 Form& operator=(const Form& other);

	 const std::string& getName() const;
	 int				getGradeForSign() const;
	 id_t				getGradeForExe() const;
	 bool				getIsSigned() const;

	 void	beSigned(const Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream &ost, const Form &src);

#endif