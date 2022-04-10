#include "phoneBook.hpp"
#include "contact.hpp"

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
/// tab 이 들어왔을 때 전화번호부 출력시 이상하게 나오는거 수정. 해야하나
/// getline 에 대한 이해