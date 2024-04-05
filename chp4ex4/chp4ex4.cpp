// chp4ex4 3번문제에서 int -> double 사용,

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