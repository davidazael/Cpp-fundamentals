/*
Write a program to calculate students’ average test scores and their grades. You may assume the following input data:

Use three arrays:
		a one-dimensional array to store the students’ names,
		a (parallel) two-dimensional array to store the test scores,
	and a parallel one-dimensional array to store grades.
	
	Your program must contain at least the following functions:
		a function to read and store data into two arrays, 
		a function to calculate the average test score and grade, 
	and a function to output the results. Have your program also output the class average.

*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

const int NUMBER_STUDENTS = 10;
const int NUMBER_TEST_SCORES = 5;

//a function to read and store data into two arrays 
void create_arr(string student_name[], int student_score[][NUMBER_TEST_SCORES] );

void calc_ave_scores(string student_name[], int student_score[][NUMBER_TEST_SCORES], double student_average_grade[]);			//a function to calculate the average test score(100,99,50) and grade(A,B,C)

char convert_into_grade(double score);

double whole_class_average( int student_score[][NUMBER_TEST_SCORES]);

void display(string student_name[], int student_score[][NUMBER_TEST_SCORES], double student_average_grade[] );					//a function to output the results.Have your program also output the class average.
			
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
a parallel one-dimensional array to store grades					char student_letter_grade[] = { 'A' , 'B', 'C', 'D', 'F' };
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
	//cout << "arrays have been populated" << endl;
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
	//	cout << static_cast<int>(student_average_grade[r]) << endl;
	}
	for (int r = 0; r < NUMBER_STUDENTS; r++)
	{
		student_average_grade[r] = student_average_grade[r] / NUMBER_TEST_SCORES;
	//	cout << static_cast<int>(student_average_grade[r]) << endl;
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
	// output the scors and names 
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
	cout << "The whole class average is " << whole_class_average(student_score) 
		<< " = " 
		<< convert_into_grade(static_cast<double>(whole_class_average(student_score)) )
		<< endl;
}

