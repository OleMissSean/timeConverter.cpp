/*
Sean Staz
CSC 2134
Program Name: timeConverter.cpp
Program Description: This program will translate military time into english time.
*/

#include <iostream>


using namespace std;
	int hour;	
	int minute;
	int ampm;
	
	void retreive()
		{
		cout << "This program will translate military time into english time." << endl;
		cout << "First enter the hour. (If hour is one digit, preceed with a zero." << endl;
		
		cin >> hour;
		
		cout << "Now enter the minutes. (If minute is one digit, preceed with a zero." << endl;
		
		cin >> minute;
	
		}	
		
	int main ()
{
	retreive();
	
	switch (hour)
	{	
		case 1 : cout << "One" << endl;
			break;
		case 2 : cout << "Two" << endl;
			break;
		case 3 : cout << "Three" << endl;
			break;
		case 4 : cout << "Four" << endl;
			break;
		case 5 : cout << "Five" << endl;
			break;
		case 6 : cout << "Six" << endl;
			break;
		case 7 : cout << "Seven" << endl;
			break;
		case 8 : cout << "Eight" << endl;
			break;
		case 9 : cout << "Nine" << endl;
			break;
		case 10 : cout << "Ten" << endl;
			break;
		case 11 : cout << "Eleven" << endl;
			break;
		case 12 : cout << "Twelve" << endl;
			break;
		case 13 : cout << "One" << endl;
			break;
		case 14 : cout << "Two" << endl;
			break;
		case 15 : cout << "Three" << endl;
			break;
		case 16 : cout << "Four" << endl;
			break;
		case 17 : cout << "Five" << endl;
			break;
		case 18 : cout << "Six" << endl;
			break;
		case 19 : cout << "Seven" << endl;
			break;
		case 20 : cout << "Eight" << endl;
			break;
		case 21 : cout << "Nine" << endl;
			break;
		case 22 : cout << "Ten" << endl;
			break;
		case 23 : cout << "Eleven" << endl;
			break;
		case 24 : cout << "Twelve" << endl;
			break;
	}
	
	switch (minute)
	{
		case 0 : cout << "" << endl;
			break;
		case 1 : cout << "One" << endl;
			break;
		case 2 : cout << "Two" << endl;
			break;
		case 3 : cout << "Three" << endl;
			break;
		case 4 : cout << "Four" << endl;
			break;
		case 5 : cout << "Five" << endl;
			break;
		case 6 : cout << "Six" << endl;
			break;
		case 7 : cout << "Seven" << endl;
			break;
		case 8 : cout << "Eight" << endl;
			break;
		case 9 : cout << "Nine" << endl;
			break;
		case 10 : cout << "Ten" << endl;
			break;
		case 11 : cout << "Eleven" << endl;
			break;
		case 12 : cout << "Twelve" << endl;
			break;
		case 13 : cout << "Thirteen" << endl;
			break;
		case 14 : cout << "Fourteen" << endl;
			break;
		case 15 : cout << "Fifteen" << endl;
			break;
		case 16 : cout << "Sixteen" << endl;
			break;
		case 17 : cout << "Seventeen" << endl;
			break;
		case 18 : cout << "Eighteen" << endl;
			break;
		case 19 : cout << "Nineteen" << endl;
			break;
		case 20 : cout << "Twenty" << endl;
			break;
		case 21 : cout << "Twenty-One" << endl;
			break;
		case 22 : cout << "Twenty-Two" << endl;
			break;
		case 23 : cout << "Twenty-Three" << endl;
			break;
		case 24 : cout << "Twenty-Four" << endl;
			break;
		case 25 : cout << "One" << endl;
			break;
		case 26 : cout << "Two" << endl;
			break;
		case 27 : cout << "Three" << endl;
			break;
		case 28 : cout << "Four" << endl;
			break;
		case 29 : cout << "Five" << endl;
			break;
		case 30 : cout << "Six" << endl;
			break;
		case 31 : cout << "Seven" << endl;
			break;
		case 32 : cout << "Eight" << endl;
			break;
		case 33 : cout << "Nine" << endl;
			break;
		case 34 : cout << "Ten" << endl;
			break;
		case 35 : cout << "Eleven" << endl;
			break;
		case 36 : cout << "Twelve" << endl;
			break;
		case 37 : cout << "Thirteen" << endl;
			break;
		case 38 : cout << "Fourteen" << endl;
			break;
		case 39 : cout << "Fifteen" << endl;
			break;
		case 40 : cout << "Sixteen" << endl;
			break;
		case 41 : cout << "Seventeen" << endl;
			break;
		case 42 : cout << "Eighteen" << endl;
			break;
		case 43 : cout << "Nineteen" << endl;
			break;
		case 44 : cout << "Twenty" << endl;
			break;
		case 45 : cout << "Twenty-One" << endl;
			break;
		case 46 : cout << "Twenty-Two" << endl;
			break;
		case 47 : cout << "Twenty-Three" << endl;
			break;
		case 48 : cout << "Twenty-Four" << endl;
			break;
		case 49 : cout << "Seventeen" << endl;
			break;
		case 50 : cout << "Eighteen" << endl;
			break;
		case 51 : cout << "Nineteen" << endl;
			break;
		case 52 : cout << "Twenty" << endl;
			break;
		case 53 : cout << "Twenty-One" << endl;
			break;
		case 54 : cout << "Twenty-Two" << endl;
			break;
		case 55 : cout << "Twenty-Three" << endl;
			break;
		case 56 : cout << "Twenty-Four" << endl;
			break;
		case 57 : cout << "Twenty-One" << endl;
			break;
		case 58 : cout << "Twenty-Two" << endl;
			break;
		case 59 : cout << "Twenty-Three" << endl;
			break;
		case 60 : cout << "Twenty-Four" << endl;
			break;
	}
	
		switch (ampm)
	{	
		case 1 : cout << "am" << endl;
			break;
		case 2 : cout << "am" << endl;
			break;
		case 3 : cout << "am" << endl;
			break;
		case 4 : cout << "am" << endl;
			break;
		case 5 : cout << "am" << endl;
			break;
		case 6 : cout << "am" << endl;
			break;
		case 7 : cout << "am" << endl;
			break;
		case 8 : cout << "am" << endl;
			break;
		case 9 : cout << "am" << endl;
			break;
		case 10 : cout << "am" << endl;
			break;
		case 11 : cout << "am" << endl;
			break;
		case 12 : cout << "am" << endl;
			break;
		case 13 : cout << "pm" << endl;
			break;
		case 14 : cout << "pm" << endl;
			break;
		case 15 : cout << "pm" << endl;
			break;
		case 16 : cout << "pm" << endl;
			break;
		case 17 : cout << "pm" << endl;
			break;
		case 18 : cout << "pm" << endl;
			break;
		case 19 : cout << "pm" << endl;
			break;
		case 20 : cout << "pm" << endl;
			break;
		case 21 : cout << "pm" << endl;
			break;
		case 22 : cout << "pm" << endl;
			break;
		case 23 : cout << "pm" << endl;
			break;
		case 24 : cout << "pm" << endl;
			break;
	}
	
	cout << hour << minute << ampm;

    return 0;
}

