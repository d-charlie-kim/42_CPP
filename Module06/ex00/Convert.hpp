#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <exception>

class Convert {
	public:
	 Convert();
	 ~Convert();
	 Convert(const Convert& origin);
	 Convert& operator=(cost Convert& other);

	 void fromToAnother() const;
	 void fromChar() const;
	 void fromInt() const;
	 void fromDouble() const;
	 void fromFloat() const;

	 char toChar() const;
	 int toInt() const;
	 float toFloat() const;
	 double toDouble() const;

	//  const std::string& getInput() const;

	 void	detectType();
	 bool	detectChar();
	 bool	detectInt();
	 bool	detectDouble();
	 bool	detectFloat();

	private:
	 const std::string	_input;
	 double				_value;
	 int				_strlen;

	 static const std::string	_types;

	 int		_type;
	 char		_c;
	 int		_i;
	 double		_d;
	 float		_f;

	 class DefaultErrException : public std::exception {
		public:
		 const char *what() const throw();
	 };
}

#endif