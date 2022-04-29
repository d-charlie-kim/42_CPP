#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP


#include "Form.hpp"

class  ShrubberyCreationForm : public Form {
	private:
	 const std::string _target;

	public:
	 ShrubberyCreationForm();
	 ShrubberyCreationForm(const std::string& target);
	 ShrubberyCreationForm(const ShrubberyCreationForm& origin);
	 ~ShrubberyCreationForm();
	 ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

	 virtual const std::string& getTarget() const;
	 virtual void execute(const Bureaucrat& executor) const;
};

#endif