/*
Write a program that allows the user to enter the last names 
of five candidates in a local election and the number of votes
received by each candidate. The program should then output each
candidate’s name, the number of votes received, and the 
percentage of the total votes received by the candidate. 

Your program should also output the winner of the election.

*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void display();
//void display2();
void percentage_Votes();
int sum_Votes();
string winner();

const int num_Of_Canidates = 5;		

string canidate_Names[num_Of_Canidates];
double votes_Per_Canidate[num_Of_Canidates];
double percentage_Per_Canidate[num_Of_Canidates];

int main()
{
	cout << setprecision(2) << showpoint << fixed;
	
	int x = 0;
	string name;

	cout << "Enter the last names of the 5 canidates followed by the amount of votes they received: ";
	while (x < num_Of_Canidates)
	{
		cin >> canidate_Names[x];
		cin >> votes_Per_Canidate[x];
		x++;
	}

	percentage_Votes();

	cout << endl;
	cout << endl; 

	display();

	system("pause");

	return 0; 
}


int sum_Votes()
{
	int vote_Sum = 0;

	for (int i = 0; i < num_Of_Canidates; i++)
	{
		vote_Sum += votes_Per_Canidate[i];
	}

	return vote_Sum;
}

void percentage_Votes()
{
	int sum = sum_Votes();

	for (int i = 0; i < num_Of_Canidates; i++)
	{
		percentage_Per_Canidate[i] = votes_Per_Canidate[i] / sum;
		percentage_Per_Canidate[i] = percentage_Per_Canidate[i] * 100;
	}

}

void display()
{

	cout <<  " Name ";
	cout <<  " Number of Votes ";
	cout <<  " Overall Percentage ";


	for (int x = 0; x < num_Of_Canidates; x++)
	{
		cout << endl;
		cout <<  canidate_Names[x] << " " << votes_Per_Canidate[x] << " " << percentage_Per_Canidate[x];
		cout << endl;
		
	}

	cout << endl;
	cout << " Total Overall Votes: " << sum_Votes();
	cout << endl; 
	cout << "The winnder of the Election is " << winner();

}

string winner()
{
	string winner = "";
	int store_i = 0;
	int largest_AmountOfVotes = 0;

	for (int i = 0; i < num_Of_Canidates; i++)
	{
		if (largest_AmountOfVotes < votes_Per_Canidate[i])
		{
			largest_AmountOfVotes = votes_Per_Canidate[i];
			store_i = i;
		}
	}

	cout << endl;
	return winner = canidate_Names[store_i];
}




/* WAS JUST AN OUTPUT HOW HE DISPLAYED BUT STILL WRONG.... *\
/*
void display2()
{

	cout << setfill(' ') << left << setw(10) << " Name";
	cout << " | ";
	cout << setfill(' ') << left << setw(20) << " Number of Votes ";
	cout << " | ";
	cout << setfill(' ') << left << setw(10) << " Overall Percentage ";


	for (int x = 0; x < num_Of_Canidates; x++)
	{
		cout << endl;

		cout << endl;
		cout << setfill(' ') << left << setw(10) << canidate_Names[x];
		cout << setfill(' ') << left << setw(12) << " | ";
		cout << setfill(' ') << left << setw(11) << votes_Per_Canidate[x];
		cout << setfill(' ') << left << setw(10) << " | ";
		cout << setfill(' ') << left << setw(10) << percentage_Per_Canidate[x];
		cout << endl;

	}

	cout << endl;
	cout << " Total Overall Votes: " << sum_Votes();
	cout << endl;
	winner();

}*/
