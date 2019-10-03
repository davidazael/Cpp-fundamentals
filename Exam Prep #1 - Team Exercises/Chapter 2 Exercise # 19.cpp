// Chapter 2 Exercise # 19
//
//
//

#include <iostream>

using namespace std;


int main()
{
	int quarters, dimes, nickles, pennies;

	cout << "Enter the number of quarters, dimes, and nickles seperated by spaces: \n";
	cin >> quarters >> dimes >> nickles;
	cout << endl;

	quarters = quarters * 25;
	dimes = dimes * 10;
	nickles = nickles * 5;

	pennies = quarters + dimes + nickles;

	cout << "The total amount of coins in pennies is = "
		<< pennies << "\n";
	cout << endl;

	system("pause");

	return 0;
}