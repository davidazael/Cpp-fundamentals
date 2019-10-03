////////////Chapter 7 Programming Exercises #9////////////////////


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

////////////Chapter 8 Programming Exercises #13///////////////////

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

const int NUMBER_STUDENTS = 10;
const int NUMBER_TEST_SCORES = 5;

//a function to read and store data into two arrays 
void create_arr(string student_name[], int student_score[][NUMBER_TEST_SCORES] );

//a function to calculate the average test score(100,99,50) and grade(A,B,C)
void calc_ave_scores(string student_name[], int student_score[][NUMBER_TEST_SCORES], double student_average_grade[]);			

char convert_into_grade(double score);
double whole_class_average( int student_score[][NUMBER_TEST_SCORES]);

//a function to output the results.Have your program also output the class average.
void display(string student_name[], int student_score[][NUMBER_TEST_SCORES], double student_average_grade[] );					
			
int main()
{
	string student_name[NUMBER_STUDENTS];
	int student_score[NUMBER_STUDENTS][NUMBER_TEST_SCORES];
	double student_average_grade[NUMBER_STUDENTS];

	create_arr( student_name, student_score );
	calc_ave_scores(student_name, student_score, student_average_grade);
	display(student_name, student_score, student_average_grade);

	cout << endl;
	system("pause");

	return 0;
}

/*
a one-dimensional array to store the students’ names,
a (parallel) two-dimensional array to store the test scores,
a parallel one-dimensional array to store grades		
*/

void create_arr(string student_name[], int student_score[][NUMBER_TEST_SCORES])
{
	ifstream inFile;
	inFile.open("ch8_Ex13Data.txt");
	
	while ( inFile )
	{ 
		for (int r = 0; r < NUMBER_STUDENTS; r++)
		{
			inFile >> student_name[r];
			for (int c = 0; c < NUMBER_TEST_SCORES; c++)
			{
				inFile >> student_score[r][c];
			}
		}
	}
}

void calc_ave_scores(string student_name[], int student_score[][NUMBER_TEST_SCORES], double student_average_grade[])
{
	double over_all_sum = 0.0;
	int sum = 0;
	
	for (int r = 0; r < NUMBER_STUDENTS; r++)
	{
		
		for (int c = 0; c < NUMBER_TEST_SCORES; c++)
		{
			over_all_sum = over_all_sum + static_cast<int>(student_score[r][c]);
			sum = sum + static_cast<int>(student_score[r][c] );
			student_average_grade[r] = sum;
		}
		sum = 0; 
	}
	for (int r = 0; r < NUMBER_STUDENTS; r++)
	{
		student_average_grade[r] = student_average_grade[r] / NUMBER_TEST_SCORES;
	}
}

char convert_into_grade(double score)
{
	char grade = ' ';
	if (score >= 90.0)
		grade = 'A';
	else if (score >= 80.0)
		grade = 'B';
	else if (score >= 70.0)
		grade = 'C';
	else if (score >= 60.0)
		grade = 'D';
	else
		grade = 'F';
	
	return grade;
}

double whole_class_average(int student_score[][NUMBER_TEST_SCORES])
{
	double average = 0.0;
	double over_all_sum = 0.0;
	int total_test_scores = NUMBER_STUDENTS * NUMBER_TEST_SCORES;

	for (int r = 0; r < NUMBER_STUDENTS; r++)
	{
		for (int c = 0; c < NUMBER_TEST_SCORES; c++)
		{
			over_all_sum = over_all_sum + static_cast<int>(student_score[r][c]);
		}
	}

	average = over_all_sum / total_test_scores;

	return average;
}

void display(string student_name[], int student_score[][NUMBER_TEST_SCORES], double student_average_grade[])
{
	cout << setprecision(2) << fixed << showpoint;

	for (int r = 0; r < NUMBER_STUDENTS; r++)
		{
			cout << student_name[r] << " - ";
			for (int c = 0; c < NUMBER_TEST_SCORES; c++)
			{
				cout << student_score[r][c] << " ";
			}
			cout << endl;
			cout << " - Average Test Score: "
				<< static_cast<double>(student_average_grade[r])
				<< " = "
				<< convert_into_grade(static_cast<double>(student_average_grade[r])) << endl;
			cout << endl;
		}
	cout << endl;
	cout << "The class average is " << whole_class_average(student_score) 
		<< " = " 
		<< convert_into_grade(static_cast<double>(whole_class_average(student_score)) )
		<< endl;
}

////////////Chapter 9 Programming Exercises #6////////////////////
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