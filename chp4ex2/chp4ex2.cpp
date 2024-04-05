// chp4ex2 1~100까지의 정숫값 제곱을 계산하는 프로그램을 작성해보세요
//이 프로그램은 2개 열을 출력해야 합니다. 첫 번째 열은 값을 나열하고 두 번째
// 열은 해당 값을 제곱한 결과를 나열합니다. 값들을 열에 맞춰 정렬시키는 데는 setw 
//함수를 사용하도록 출력을 처리해보세요.
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

int main() {

	for (int i = 1; i < 101; i++) {
		cout << setw(3) << i << setw(6) << i * i << endl;

		
	}
	return 0;
}