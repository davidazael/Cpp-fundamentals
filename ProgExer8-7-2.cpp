#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void display();
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

	cout << "Enter the last names of the 5 canidates: ";
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


	//cout <<  "Candidate" << canidate_Names[x] << "Votes Received" << votes_Per_Canidate[x] << "% of Total Votes"<< percentage_Per_Canidate[x];;

    cout << "Candidate\s+Votes Received\s+% of Total Votes";

	for (int x = 0; x < num_Of_Canidates; x++)
	{
		cout << endl;
		cout <<  canidate_Names[x] 
            << " " 
            << votes_Per_Canidate[x] 
            << " " 
            << percentage_Per_Canidate[x];
		cout << endl;
        
        /*
		cout <<  "Candidate " << canidate_Names[x] 
            << " Votes Received " << votes_Per_Canidate[x] 
            << " Percentage of Total Votes %"<< percentage_Per_Canidate[x]
            << endl << endl;
        
        */
	}

	cout << endl;
	cout << "Total Overall Votes: " << sum_Votes();
	cout << endl; 
	cout << endl; 
	cout << "The Winner of the Election is " << winner();

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
    winner = canidate_Names[store_i];
	return winner;
}

