#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCF", 145, 137), _target("default") {}
   
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
: Form("ShrubberyCF", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& origin)
: Form("ShrubberyCF", 145, 137), _target(origin.getTarget()) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	(void)other;
	return *this;
}

const std::string& ShrubberyCreationForm::getTarget() const {
	return _target;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	Form::execute(executor);
	std::ofstream wFile(_target + "_shrubbery");
	if (wFile.fail())
		throw FileErrException();
	wFile << "              # #### ####" << std::endl;
	wFile << "            ### \\/#|### |/####" << std::endl;
	wFile << "           ##\\/#/ \\||/##/_/##/_#" << std::endl;
	wFile << "         ###  \\/###|/ \\/ # ###" << std::endl;
	wFile << "       ##_\\_#\\_\\## | #/###_/_####" << std::endl;
	wFile << "      ## #### # \\ #| /  #### ##/##" << std::endl;
	wFile << "       __#_--###`  |{,###---###-~" << std::endl;
	wFile << "                 \\ }{" << std::endl;
	wFile << "                  }}{" << std::endl;
	wFile << "                  }}{" << std::endl;
	wFile << "             ejm  {{}" << std::endl;
	wFile << "            , -=-~{ .-^- _" << std::endl;
	wFile << "                  `}" << std::endl;
	wFile << "                   {" << std::endl;
	wFile.close();
	std::cout << "SUCCESS: < " << this->getTarget() << " > shrubbery is successfully made.\n";
}
