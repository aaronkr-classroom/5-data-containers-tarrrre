// chp4ex3 [�������� 4-2] 1~1000������ ����

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

int main() {

	for (int i = 1; i < 1001; i++) {
		cout << setw(3) << i << setw(20)<< i * i << endl;


	}
	return 0;
}