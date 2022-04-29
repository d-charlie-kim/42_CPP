#ifndef ROBOTOMYREQUESTFORM_HPPP
#define ROBOTOMYREQUESTFORM_HPPP


#include "Form.hpp"

class  RobotomyRequestForm : public Form {
	private:
	 const std::string _target;

	public:
	 RobotomyRequestForm();
	 RobotomyRequestForm(const std::string& target);
	 RobotomyRequestForm(const RobotomyRequestForm& origin);
	 ~RobotomyRequestForm();
	 RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

	 virtual const std::string& getTarget() const;
	 virtual void execute(const Bureaucrat& executor) const;
};

#endif