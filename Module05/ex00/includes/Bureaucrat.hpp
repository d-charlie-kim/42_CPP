#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

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
	 Bureaucrat(const std::string& name);
	 Bureaucrat(const std::string& name, int grade);
	 Bureaucrat(const Bureaucrat& origin);
	 ~Bureaucrat();
	 Bureaucrat& operator=(const Bureaucrat& other);

	 void				setName(const std::string& name);
	 const std::string& getName() const;

	 void	setGrade(int grade);
	 int 	getGrade() const;

	 void incrementGrade();
	 void decrementGrade();
};

std::ostream& operator<<(std::ostream &ost, const Bureaucrat &src);

#endif