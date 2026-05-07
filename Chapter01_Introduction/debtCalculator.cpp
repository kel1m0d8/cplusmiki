#include <iostream>
#include <cstring>
using namespace std;

class DebtCalculator{
private:
	string name;
	double hourlyRate;
	double hoursPerWeek;
	double taxRate;

public:
	void getUserInfo(){

		cout << "Enter your name: ";
		cin >> name;

		cout << "Enter hourly rate: ";
		cin >> hourlyRate;
	
		cout << "Enter hours per week: ";
		cin >> hoursPerWeek;

		cout << "Enter estimated tax rate as decimal, example 0.20: ";
		cin >> taxRate;
	}

	double calculateGrossMonthlyIncome(){
		return hourlyRate * hoursPerWeek * 4;
	}
	
	double calculateTakeHomeIncome(){
		double gross = calculateGrossMonthlyIncome();
		return gross - ( gross * taxRate);
	}

	void show503020Plan(){
		double takeHome = calculateTakeHomeIncome();
		
		cout << "The 50-30-20 Plan rule for " << name << "\n";
		cout << "Take home income: $" << takeHome << "\n";
		cout << "Needs 50% : $"<< takeHome * 0.50 << "\n";
		cout << "Wants 30% : $" << takeHome * 0.30 << "\n";
		cout << "Savings/Debt 20% : $" << takeHome * 0.20 << "\n";
	}

};

int main(){
	DebtCalculator plan;
	plan.getUserInfo();
	plan.show503020Plan();

	return 0;
}
