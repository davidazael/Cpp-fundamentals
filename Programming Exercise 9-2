/*
	Write a program that reads students’ names followed by their test scores. 
	The program should output each student’s name followed by the test scores 
	and the relevant grade. It should also find and print the highest test 
	score and the name of the students having the highest test score.

	Student data should be stored in a struct variable of type studentType,
	which has four components: 
		studentFName and studentLName of type string,
		testScore of type int (testScore is between 0 and 100), and 
		grade of type char. 
	
	Suppose that the class has 20 students. Use an array of 20 
	components of type studentType. Your program must contain at least
	the following functions:

		A function to read the students’ data into the array.
		A function to assign the relevant grade to each student.
		A function to find the highest test score.
		A function to print the names of the students having the highest test score.

	*Your program must output each student’s name in this form:
	-	last name followed by a comma, followed by a space, 
	--		followed by the first name; the name must be left justified.
	
	Moreover, other than declaring the variables and opening the input and output files,
	the function main should only be a collection of function calls.

**Your program should accept no input and save the output to Ch9_Ex2Out.txt.**

*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int NUMBER_OF_STUDENTS = 20;

//A function to read the students’ data into the array.
void populate_Arr(ifstream& indata, studentType);
//A function to assign the relevant grade to each student.
void assign_Relevant_Letter_Grade(ifstream& indata);
//A function to find the highest test score.
void find_Highest_Score(ifstream& indata);
//A function to print the names of the students having the highest test score.
void display_Students_With_Highest_Scores(ifstream& indata);


struct studentType
{
	string studentFName[NUMBER_OF_STUDENTS];
	string studentLName[NUMBER_OF_STUDENTS];
	int testScore[NUMBER_OF_STUDENTS];
	char grade;
};


int main()
{
	ifstream infile;
	ofstream outfile;

	string input_File_Name;
	string output_File_Name;
	

	return 0;
}

