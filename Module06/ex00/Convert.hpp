#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <climits>
#include <cfloat>
#include <cctype>
#include <sstream>

class Convert {
	public:
	 enum Type {
		 TYPE_CHAR,
		 TYPE_INT,
		 TYPE_FLOAT,
		 TYPE_DOUBLE
	 };

	 Convert();
	 Convert(const std::string& input);
	 ~Convert();
	 Convert(const Convert& origin);
	 Convert& operator=(const Convert& other);

	 void	printSpecialValue() const;
	 void	fromToAnother() const;
	 void	fromChar() const;
	 void	fromInt() const;
	 void	fromFloat() const;
	 void	fromDouble() const;

	 const std::string& getInput() const;
	 int				getType() const;

	 bool	checkSpecialValue();
	 bool	checkValidate();

	 void	detectType();
	 bool	detectChar();
	 bool	detectInt();
	 bool	detectFloat();
	 bool	detectDouble();

	private:
	 std::string		_input;
	 void (Convert::*_pFunc[4])() const;
	 int				_strlen;

	 int		_fFlag;
	 int		_pointFlag;
	 int		_specialFlag;

	 int		_type;
	 char		_c;
	 int		_i;
	 float		_f;
	 double		_d;

	 class InvalidInputException : public std::exception {
		public:
		 const char *what() const throw();
	 };
};

#endif
