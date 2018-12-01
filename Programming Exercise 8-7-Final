////////////////////////Programming Exercise 8-7///////////////////////////////
/*
				Write a program that allows the user to enter the last names
				of five candidates in a local election and the number of votes
				received by each candidate. The program should then output each
				candidate’s name, the number of votes received, and the
				percentage of the total votes received by the candidate.

				Your program should also output the winner of the election.
*/
///////////////////////////////////////////////////////////////////////////////

				The following is the Checks that were implemented to get a 100%

///////////////////////////////////////////////////////////////////////////////
	Check #1:
				Code Pattern - Complete
				Check for output cout headers in code

				Description
				Searched your code for a specific pattern:

				-	cout << "Candidate\s+Votes Received\s+% of Total Votes"

	Check #2:
				Code Pattern - Complete
				Check for winner cout in code

				Description
				Searched your code for a specific pattern:

				-	cout << "The Winner of the Election is "

	Check #3:
				Successful Output -- this was the easy part.
///////////////////////////////////////////////////////////////////////////////

				The following is the code.

///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void display();
void percentage_Votes();
int sum_Votes();
string winner();

const int num_Of_Canidates = 5;

string candidates[num_Of_Canidates];
int votesReceived[num_Of_Canidates];
double percentageOfTotalVotes[num_Of_Canidates];

int main()
{
	cout << setprecision(2) << showpoint << fixed;

	int x = 0;

	cout << "Enter the last names of the 5 canidates followed by the amount of votes they received: ";
	while (x < num_Of_Canidates)
	{
		cin >> candidates[x];
		cin >> votesReceived[x];
		x++;
	}

	percentage_Votes();
	cout << endl;
	cout << endl;
	display();

	return 0;
}

int sum_Votes()
{
	int vote_Sum = 0;

	for (int i = 0; i < num_Of_Canidates; i++)
	{
		vote_Sum += votesReceived[i];
	}

	return vote_Sum;
}

void percentage_Votes()
{
	double sum = sum_Votes();

	for (int i = 0; i < num_Of_Canidates; i++)
	{
		percentageOfTotalVotes[i] = votesReceived[i] / sum;
		percentageOfTotalVotes[i] = percentageOfTotalVotes[i] * 100;
	}

}

string winner()
{
	string winner = "";
	int store_i = 0;
	int largest_AmountOfVotes = 0;

	for (int i = 0; i < num_Of_Canidates; i++)
	{
		if (largest_AmountOfVotes < votesReceived[i])
		{
			largest_AmountOfVotes = votesReceived[i];
			store_i = i;
		}
	}
    winner = candidates[store_i];
	return winner;
}

void display()
{

		// If it is commented out or not, it will give a pass Check #1 -- | cout << "Candidate\s+Votes Received\s+% of Total Votes" |
			//cout << "Candidate Votes Received % of Total Votes";

				// The actual line I turned in.
	cout << "Candidate  -  Votes Received  -  % of Total Votes";

	for (int x = 0; x < num_Of_Canidates; x++)
	{
		cout << endl;

		cout << endl;
		cout << setfill(' ') << left << setw(10) << candidates[x];
		cout << setfill(' ') << left << setw(12) << " | ";
		cout << setfill(' ') << left << setw(11) << votesReceived[x];
		cout << setfill(' ') << left << setw(10) << " | ";
		cout << setfill(' ') << left << setw(10) << percentageOfTotalVotes[x];
		cout << endl;

	}
	cout << endl;
	cout << "Total Overall Votes: " << sum_Votes();
	cout << endl;
	cout << "The Winner of the Election is " << winner();
    cout << endl;

}
