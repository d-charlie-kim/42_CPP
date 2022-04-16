#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib>

class Contact {
	public:
	 void setFirstName();
	 void setLastName();
	 void setNickName();
	 void setPhoneNumber();
	 void setDarkestSecret();

	 std::string getFirstName();
	 std::string getLastName();
	 std::string getNickName();
	 std::string getPhoneNumber();
	 std::string getDarkestSecret();

	private:
	 std::string firstname;
	 std::string lastname;
	 std::string nickname;
	 std::string phonenumber;
	 std::string darkestsecret;
};

#endif
