#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

struct alphabet
{
	int capitalCount;
	int smallCount;
};

//functions prototype
void openFile(ifstream&, ofstream&);
int counts(struct alphabet[], ifstream&);
void printResult(ofstream&, struct alphabet[], int);

int main()
{
	struct alphabet letters[26];
	ifstream inFile;
	ofstream outFile;

	//initialize the array

	for (int i = 0; i < 26; i++)
		letters[i].capitalCount = letters[i].smallCount = 0;

	cout << "\n\tProgram that works with records and files.";

	openFile(inFile, outFile);

	int count = counts(letters, inFile);

	printResult(outFile, letters, count);

	//close filestream
	inFile.close();
	inFile.clear();

	system("pause");

	return 0;
}

//open input and output files
void openFile(ifstream& inp, ofstream& outFile)
{
	//char fileName[15];
	string fileName;

	cout << "\n\n\tEnter the name of the input file: ";
	cin >> fileName;

	inp.open(fileName.c_str());

	//display error if file cant open
	if (!inp)
	{
		cout << "\n\tError in opening input file";
		exit(0);
	}

	cout << "\n\tEnter the name of output file: ";
	cin >> fileName;

	outFile.open(fileName.c_str());

	if (!outFile)
	{
		cout << "\n\n\tError in opening output file";
		exit(0);
	}

}

//counts letters of the input file

int counts(struct alphabet let[], ifstream& inp)
{
	int count = 0;
	char ch;

	while (inp)
	{
		inp.get(ch);

		if (64 < ch && ch < 92)
			let[static_cast<int>(ch) - 65].capitalCount++;

		else
			if (96 < ch && ch < 123)
				let[static_cast <int>(ch) - 97].smallCount++;
			else
				count--;
		count++;
	}
	return count;
}

//print results to output file
void printResult(ofstream& out, struct alphabet let[], int count)
{
	out << "Letter Number Percentage"
		<< "\t\tLetter Number Percentage";

	for (int i = 0; i < 26; i++)
		out << "\n" << static_cast<char>(i + 65)
		<< "      " << let[i].capitalCount
		<< setw(9) << right
		<< (let[i].capitalCount * 100) / count << "%"

		<< "\t\t\t  " << static_cast<char>(i + 97)
		<< "       " << let[i].smallCount
		<< setw(9) << right
		<< (let[i].smallCount * 100) / count << "%";

	//notify user of entry into outFile

	cout << "\n\n\tPrinted results to the output file.";


}