// chp4ex2 1~100������ ������ ������ ����ϴ� ���α׷��� �ۼ��غ�����
//�� ���α׷��� 2�� ���� ����ؾ� �մϴ�. ù ��° ���� ���� �����ϰ� �� ��°
// ���� �ش� ���� ������ ����� �����մϴ�. ������ ���� ���� ���Ľ�Ű�� ���� setw 
//�Լ��� ����ϵ��� ����� ó���غ�����.
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