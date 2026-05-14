#include <iostream>
using namespace std;


bool accept3(){
	int tries = 1;
	while (tries<4){
		cout << "do you want to proceed (y or n)?\n"; //write question
		char answer = 0;
		cin >> answer;	//read answer
		
		switch (answer){
		case 'y':
			cout << "You chose yes.";
			return true;
		case 'n':
			cout << "You chose no.";
			return false;
		default:
			cout << "Sorry, I don't understand that.\n";
			++tries; //increment
		}
	}

cout << "I'll take that for a no.\n";
return false;
}
int main()
{
	bool result = accept3();
	if (result)
		cout << "Keep moving forward!";
	else 
		cout << "Take a set step back, breathe, keep moving foward!";
	return 0;
}
