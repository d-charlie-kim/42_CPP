#include "PhoneBook.hpp"

int main(void) {

	PhoneBook phoneBook;
	std::string input;
	phoneBook.num = 0;
	while (1) {
		phoneBook.printManual();
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		phoneBook.checkCommand(input);
	}
}

/// 처음 선언시에 초기화 해주는 부분 필요 ***** // 생성자
/// getline 에 대한 이해
