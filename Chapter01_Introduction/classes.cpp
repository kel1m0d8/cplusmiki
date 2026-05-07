#include <iostream>
using namespace std;

class Student{

public:
	void greet(){
	cout << "Learning C++ classes." << endl;
	}
};

int main (){
	Student miguelito;
	miguelito.greet();

	return 0;
}
