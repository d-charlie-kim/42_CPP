#ifndef CONVERT_HPP
#define CONVERT_HPP

class Convert {
	public:
	 Convert();
	 Convert(const std::string& input);
	 ~Convert();
	 Convert(const Convert& origin);
	 Convert& operator=(const Convert& other);

	 void fromToAnother() const;
	 void fromChar() const;
	 void fromInt() const;
	 void fromDouble() const;
	 void fromFloat() const;

	 const std::string& getInput() const;
	 int			getType() const;

	 void	detectType();
	 bool	detectChar();
	 bool	detectInt();
	 bool	detectDouble();
	 bool	detectFloat();

	private:
	 const std::string	_input;
	 double				_value;
	 int				_strlen;

	 const std::string	_types;
	 void (Convert::*_pFunc[4])() const;

	 int		_type;
	 char		_c;
	 float		_f;
	 int		_i;
	 double		_d;

	 class DefaultErrException : public std::exception {
		public:
		 const char *what() const throw();
	 };
};

#endif