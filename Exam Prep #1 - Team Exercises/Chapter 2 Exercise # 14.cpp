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