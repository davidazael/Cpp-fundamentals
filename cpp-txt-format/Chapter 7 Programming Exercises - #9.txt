
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string studentNameAlter(string studentName);

int main()
{
	ifstream inFile;						
	inFile.open("Ch7_Ex9Data.txt");			

	string passingName;

	int index = 0; 
	while (getline(inFile, passingName))
	{
		cout << studentNameAlter( passingName ) << endl;
		index++;
	}
	//cout << index; 
	cout << endl;

	inFile.close(); 
	system("pause");
	return 0;	
}

string studentNameAlter(string studentName)
{
	string alteredName = ""; 

	string copy = studentName;

	string firstName;
	string middleName;
	string lastName;

	firstName = copy.substr(0, copy.find(','));
	copy.erase( 0, copy.find(' ')+1);
	if ( copy.find(' ') )
	{
		middleName = copy.substr(0, copy.find(' '));
		copy.erase(0, copy.find(' ')+1);
		lastName = copy;
	}

	if ( middleName != lastName )
	{
		alteredName = firstName + " " + middleName + " " + lastName;
	}
	else
	{
		alteredName = firstName + " " + lastName;
	}
	
	return alteredName;
}
