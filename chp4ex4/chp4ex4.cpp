// chp4ex4 3���������� int -> double ���,

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

int main(){

	for (double i = 1; i < 1001;i++){
		cout << setw(3) << i << setw(20) << i * i << endl;


	}
	return 0;
}