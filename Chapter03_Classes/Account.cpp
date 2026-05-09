#include <iostream>
#include <string>
using namespace std;

class Account{
	public:
		void setName(string accountName){
			name = accountName;
		}

		string getName() const{
			return name;
		}
	private:
		string name;
};
int main(){
	Account myAccount;

	cout << "Initial account name is: " << myAccount.getName();

	cout << "\nPlease enter the account name: ";
	
	string theName;
	
	getline(cin, theName);
	
	myAccount.setName(theName);

	cout << "Name in object myAccount is: " << myAccount.getName() << endl;
	
	return 0;
}

