
#include <iostream>
#include <exception>
#include <cstdlib>
#include <sstream>
#include "Convert.hpp"

int main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "ERROR: Parameter required." << std::endl;
		return 1;
	}
	for (int i = 1; i < argc; i++) {
		std::cout << "\n------\ninput: " << argv[i] << std::endl << std::endl;
		try {
			Convert scalar(argv[i]);
			scalar.detectType();
			std::cout << std::fixed;
			std::cout.precision(1);
			scalar.fromToAnother();

			}
			catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
/*

1. detectType
- 훑자.

nan nanf inff inf +inf -inf/
input +-/ 숫자 . f 아닌거 나오면 에러

detect int double float

int 
. f 없어야 함
strtod 이용   string --> double
int max min 비교 오버플로우 언더플로우 체크
--> throw
아니면 통과.


float
. f 가 반드시 하나씩
f는 반드시 마지막
strtod 이용 string --> double
float max min 비교 오버플로우 언더플로우 체크
--> throw
아니면 통과.


double
.만 f는 없음
double max min 체크
오버플로우시에 터지는거 체크.
그래서 stringstream 쓰려고 합니다.

stringstream --> overflow
str.fail() == true;
통과?



- +/- 나오면 한칸만 넘기고 훑는거 (변수 하나 만들어주기)
- inf inff -inf -inff +inf +inff nan nanf 따로 처리해주기 (간단하게 보이는 법 찾기)
- 다음 각 detect로 뿌려준다

각 detect에서 받은 다음 stringstream 사용한다.

-1. double
: 이것도 단순, strtod 사용하려고 하다가 오버플로우 체크가 힘들 것 같아서 stringstream float이랑 동일하게 사용해줘도 된다.
+- 동일하게 체크해주고, 변환 돌렸을때 eof는 당연한거고 fail bit 만 확인하면 됨

-2. float
: 끝에 있는 f만 빼주면 double과 동일. (f위치가 맞는지, '.'과 관련된 부분은 1번에서 해주니 OK)
float형 변수에 넣어준다는 점만 차이가 있으므로 f를 빼주는 부분만 신경쓰면 끝

-3. int
: 단순, eof가 아닐 수 없고, 숫자 외에 다른 문자 없고, +-만 존재하는데 이 부분도 빼줘야하는지 의문. 확인 필요. 근데 그냥 atoi 쓰면 됨 / 바꾸기 전에 범위는 double로 체크 해주니까 괜춘





이상한거는 없을테니, 오버플로우 / 언더플로우 중심으로 신경써준다.

그럼 출력 부분만 신경쓰면 끝! (이때 static_cast<> 를 사용할텐데, 신경 많이 쓰기! 설명 잘 할 수 있게)




현송이 로직
- 처음 훑을때는 플래그만 세우고
- 잘못된 문자열 / 오버플로우 다 에러비트로 잡는다.
- but, 신경써줘야할 것이 많다. (조건문이 꽤 됨)

내 생각
- 한번 싹 훑는다 (잘못된 인자 부분부터 체크)
- 오버플로우는 그 다음에 잡는다.
- but, +- f 붙는거 . 붙는거 신경써줘야한다. (지저분해 보일 수 있음)

stringstream 을 안 쓸 수는 없을 것 같다.

화학적 표기법까지 처리해주는 것은 과한 것 같다.

**무엇을 공부하기 위한 과제인지 이해하기

- Nan 에 대한 이해
- 형변환에 대한 이해 (C와 다른점)



오버플로우면 터지는게 맞는가?
string to num 함수에서는 터지는가?
inf값을 가지게 하는가.
요거는 생각할 부분
float 함수는 stringstream 사용할 수밖에 없는데, 동작을 안하니까 통일 시켜준다고 해도 될 것 같고
처리해줘도 어렵지 않을 것 같음.

----------------------------------------------------

훑는다.
충분한가.

int 범위 초과
float 범위 초과
double 범위 초과

모두 동일한 로직이다.
다른 함수에서 동일한 로직을 쓰는게 효율적인가.


int 와 float 은 해주는데
double은 저장할때 해주는게 맞는가.

inf는 어느 경우에 생기는가.
값 대입만으로 생길 수 있는가.
*/
