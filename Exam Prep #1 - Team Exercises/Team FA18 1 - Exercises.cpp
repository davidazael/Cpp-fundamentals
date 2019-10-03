//Chapter 2 Exercises #14 in the Programming Exercises
//
//
//

#include <iostream>
#include <iomanip>											//Acces too setprecision(n)

using namespace std;

int main()
{
	double adHDDCap, realHDDCap;									// (adHDDCap) = advertised Hard Drive Capacity -- (realHDDCap) = actually Hard Drive Capacity 	 
	const double incGigaByte = 1000000000;								// # of bytes advertised - given by question
	const double gigaByte = 1073741824;								// # of bytes in 1 gigabyte


	cout << "Enter the advertised size of the hardrive";
	cout << " that is displayed on the box: ";							//prompts the user to enter the size of the hard drive advertised on the box. 
	cin >> adHDDCap;
	cout << endl;

	realHDDCap = adHDDCap * incGigaByte;								//Grab the number of GigaBytes Advertised * by the incorrect bytes.
	realHDDCap = realHDDCap / gigaByte;								//The total of bytes, divided by how many bytes are in an actualy Gigabyte 
	cout << endl;

	cout << "The " << adHDDCap << " GB hardrive's actual storage is approximately ";
	cout << setprecision(2) << fixed << showpoint << realHDDCap << " GB\n";
	cout << endl;

	system("pause");

	return 0;
}

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

// Chapter 3 Exercise # 10
//
//
//

#include <iostream>

using namespace std;

int main()
{
	int length, radiusOfTree, spacePerTree;
	int numberOfTreesPlanted, totalSpaceOccupied;
	int diaOfTree;
	double percentageOfOccupation;

	cout << "What is the length of the yard? ";
	cin >> length;
	cout << endl;

	cout << "What is the radius of a fully grown tree? ";
	cin >> radiusOfTree;
	cout << endl;

	cout << "What is the required space between fully grown trees? ";
	cin >> spacePerTree;
	cout << endl;

	//getting the diamater of the tree so we know how much space it acctually uses. 
	diaOfTree = radiusOfTree * 2;

	//calculating how much space a tree uses + the space it needs from besides each other. 
	totalSpaceOccupied = diaOfTree + spacePerTree;

	//calculating number of trees planted
	numberOfTreesPlanted = length / totalSpaceOccupied;

	//getting the percentage of space occupied.
	percentageOfOccupation = totalSpaceOccupied * numberOfTreesPlanted;
	percentageOfOccupation = percentageOfOccupation / length;
	percentageOfOccupation = percentageOfOccupation * 100;

	cout << endl;
	
	cout << "The number of Trees that can be planted is " << numberOfTreesPlanted;
	cout << endl;
	cout << "The amount of space occupied by a fully grown tree is " << totalSpaceOccupied;
	cout << endl;
	cout << "The amount of space occupied by the fully gorwn trees is ";
	cout << percentageOfOccupation << "%";
	cout << endl;

	system("pause");

	return 0;
}

