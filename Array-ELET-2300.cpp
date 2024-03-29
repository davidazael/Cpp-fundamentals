#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


// Initialize Functions
void position(int rand_arr[], int size);
void reverse(int rand_arr[], int size);
double average(int rand_arr[], int size);												// from int to double data type
string search(int rand_arr[], int size, int search_num);


int main()
{
	const int size = 15; 						// declares const int which will be the array list size
	int rand_int_arr[size];					// random integer array is called with the size  of 15
	int rand_int;										// stores random integer
	char request;										// this is the parameter that is read to see what function to call or to exit the program
	int search_int;									// the integer number entered by user that is looked for in the array


	cout << " The following is an Array of random integers: " << endl;
	// print array full of random integers between 15-20
	for (int x = 0; x < size; x++)
	{
		rand_int = rand() % 5 + 15;

		rand_int_arr[x] = rand_int;

		cout << "[ " << rand_int_arr[x] << " ]  ";
	}

	cout << endl;
	cout << endl;


// Prints out options user can use. - his input will equal char(request)

	cout << " [P]osition, [R]everse, [A]verage, [S]earch, [Q]uit " << endl;
	cout << endl << "Please select an option: ";

	cin >> request;

	while (request != 'q' && request != 'Q')		// while request doesn't == lowercase q or uppercase Q
	{
		switch (request)
		{
		case 'q':
		case 'Q':	cout << "The program will now exit.";
			return 0;
			break;
		case 'P':
		case 'p':	cout << endl;
					position(rand_int_arr, size);																																				// Calls the Position function
				  break;
		case 'r':
		case 'R':	cout << endl;
					reverse(rand_int_arr, size);																																				// Calls the Reverse the array function
			break;
		case 'a':
		case 'A':	cout << "The average of the Array is " << average(rand_int_arr, size) << endl;									// Calls int average function and prints out the average
		break;																																																			// MIGHT BE WRONG -- turn it into a double
		case 's':
		case 'S':	cout << "Enter an integer number: ";
					cin >> search_int;
					cout << search(rand_int_arr, size, search_int);																											// Calls the search_int function and passes parameters and extra parameter the number that needs to be searched
					cout << endl;
			break;
		default:	cout << "Wrong input. Try again..." << endl;																										// if input doesn't match one of the parameters, it request for Try again
			break;
		}
		cout << " [P]osition, [R]everse, [A]verage, [S]earch, [Q]uit " << endl;
		cout << endl << "Please select an option: ";
		cin >> request;

	}

	cout << endl;

	return 0;
}

// returns the elements and the index that they are at
void position(int rand_arr[], int size)
{
	cout << "Will print out the Elements with their position bellow." << endl;
	cout << "Elem : ";
	for (int i = 0; i < size; i++)
	{
		cout << "[ " << rand_arr[i] << " ] ";
	}

	cout << endl;
	cout << "Posi : ";
	for (int i = 0; i < size; i++)
	{
		if (i < 10)
		{
			cout << setw(3) << "[" << i << "] ";
		}
		else
		{
		cout << setw(2) << "[" << i << "] ";
		}
	}
	cout << endl;
	cout << endl;
}

// prints the array from the last one to the first one (in reverse order)
void reverse(int rand_arr[], int size)
{
	cout << endl;

	cout << "The Array in reverse form is displayed bellow: " << endl;
	cout << endl;

	for (int i = size-1; i >= 0; i--)
	{
		cout << "[ " << rand_arr[i] << " ]  ";
	}
	cout << endl;
	cout << endl;
}

// adds all the integers and divides them by the total
// from int to double
double average(int rand_arr[], int size)
{
	int average_of_arr;
	int sum = 0;


	for (int i = 0; i < size; i++)
	{
		sum += rand_arr[i];

	}

	average_of_arr = sum / size;


	return average_of_arr;

}

// accepts the integer the user wants to find, prints out the indexs of where that integer is located. 
string search(int rand_arr[], int size, int search_num)
{
	int store_index[15];
	int count = 0;


	string num_found = " ";

	// is number in the list?
	for (int i = 0; i < size; i++)
	{
		if (search_num == rand_arr[i])
		{
			store_index[count] = i;
			count++;
		}

	}

	if(  count != 0 )
	{
		if (count == 1)
			num_found += "The integer was found at index: ";
		else
			num_found += "The integer was found at these indexes: ";

		for (int z = 0; z < count; z++)
			{
				num_found += to_string(store_index[z]) + " ";
			}
	}
	return num_found;

}
