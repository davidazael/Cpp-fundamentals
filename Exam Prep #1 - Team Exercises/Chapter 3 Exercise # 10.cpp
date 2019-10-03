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