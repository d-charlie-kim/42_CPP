#include "phoneBook.hpp"
#include "contact.hpp"

int main(void) {

	PhoneBook phoneBook;
	std::string input;
	while (1) {
		phoneBook.printManual();
		std::getline(std::cin, input);
		phoneBook.checkCommand(input);
	}
	/*
	ADD SEARCH EXIT 만 입력하시오 안내문구 출력
	*/

	// 입력을 받는다.
	// 입력을 판단해서 해당 함수를 실행 시킨다.
		// ADD
			// PhoneBook에 저장될 요소들 하나씩 입력을 받는다.
			// 입력이 끝나면 PhoneBook에 저장
			// 9번째 들어오면 FIFO
		// SEARCH
			// 연락처 전체 출력 (출력 길이 제한)
			// 인덱스 입력 받음
			// 해당 인덱스 
		// EXIT
			// 종료

		//출력 형식이나 모양은 자유.
}
