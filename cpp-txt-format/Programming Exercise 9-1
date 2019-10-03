/*
	EXERCISE 9-1 
	Assume the definition of Exercise 2, which defines the struct computerType. 
	Write a program that declares a variable of type computerType, prompts the 
	user to input data about a computer, and outputs the computer’s data.

   ________________________________________________________________________________________
  | User Input:										|		Output:						  |
  |													|									  |
  | Enter the name of the manufacturer: McPC		|			Manufacturer: McPC		  |
  | Enter the model of the computer: 1000			|			Model: 1000				  |
  | Enter processor type: Intel GFX					|			Processor: Intel GFX	  |
  | Enter the size of RAM (in GB): 8				|			Ram: 8					  |
  | Enter the size of hard drive (in GB): 1000		|			Hard Drive Size: 1000	  |
  | Enter the year the computer was built: 2016		|			Year Built: 2016		  |
  | Enter the price: 1200							|			Price: $1200.00			  |
  |_________________________________________________|_____________________________________|

	EXERCISE 2
	Define a struct computerType to store the following data about a computer: 
	Manufacturer (string), model type (string), processor type (string), 
	ram (int) in GB, hard drive size (int) in GB, year when the computer was 
	built (int), and the price (double).

	Grading
	When you have completed your program, click the Submitbutton to record your score.





*/

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>


using namespace std;

// Provided
struct computerType
{
	string manufacturer;
	string modelType;
	string processorType;
	   int ram;
	   int hardDriveSize;
	   int yearBuilt;
	double price;
};

int main() 
{
	computerType usersComputer;

	//string processorType;

	cout << "Enter the name of the manufacturer: ";					
	cin >> usersComputer.manufacturer;
	
	cout << "Enter the model of the computer: ";					
	cin >> usersComputer.modelType;


/////////////////////////////////////////////////////////////////////////////When enetered into the run checks it fails here?
	cin.ignore();
	cout << "Enter processor type: ";	
	cin >> usersComputer.processorType;
/////////////////////////////////////////////////////////////////////////////

	cout << "Enter the size of RAM (in GB): ";						
	cin >> usersComputer.ram;

	cout << "Enter the size of hard drive (in GB): ";				
	cin >> usersComputer.hardDriveSize;

	cout << "Enter the year the computer was built: ";				
	cin >> usersComputer.yearBuilt;

	cout << "Enter the price: ";									
	cin >> usersComputer.price;
	
	cout << endl;

	cout << "Manufacturer:  "	<< usersComputer.manufacturer; 
	cout << endl;
	cout << "Model: " << usersComputer.modelType;
	cout << endl;
	cout << "Processor: " << usersComputer.processorType;
	cout << endl;
	cout << "Ram: " << usersComputer.ram;
	cout << endl;
	cout << "Hard Drive Size: " << usersComputer.hardDriveSize;
	cout << endl;
	cout << "Year Built: " << usersComputer.yearBuilt;
	cout << endl;
	cout << "Price: " << usersComputer.price;

	cout << endl; 

	system("pause");

	return 0;
}
