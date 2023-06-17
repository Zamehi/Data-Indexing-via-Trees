#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "data_object.h"


using namespace std;

// Writing in a ************************* CSV
void insert_in_csv(string data_to_insert, string file_name, int index, int col)
{
	// Creating	a temporary file
	string temp_name = "C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\temp_file.csv";
	// data to insert seperated by commas 
	// ID,	Year	113 Cause Name                                       	Cause Name	              State	      Deaths	Age-adjusted Death Rate
	// 1,	2016,	Accidents (unintentional injuries) (V01-X59,Y85-Y86),	Unintentional injuries	, Alabama	, 2755	,   55.5
	string id, year, cause_name_113, cause_name, state, deaths, age;
	vector <string>data_lines;
	// opening file 
	fstream temp;
	//temp.open();
	fstream file;
	file.open(file_name, ios::out | ios::app);

	// Search for the right index to insert in 
	// Value should be greater than previous and less than next value
	if (col == 1) 
	{
		getline(cin, id, ',');


	}
	else if (col == 2) 
	{
		getline(cin, id, ',');
		getline(cin, year, ',');
	}
	else if (col == 3) 
	{
		getline(cin, id, ',');
		getline(cin, year, ',');
		getline(cin, cause_name, ',');
		getline(cin, cause_name, ',');

	}
	else if (col == 4) 
	{
		getline(cin, id, ',');
		getline(cin, year, ',');
		getline(cin, cause_name, ',');
		getline(cin, cause_name, ',');
		getline(cin, state, ',');

	}
	else if (col == 5) 
	{
		getline(cin, id, ',');
		getline(cin, year, ',');
		getline(cin, cause_name, ',');
		getline(cin, cause_name, ',');
		getline(cin, state, ',');
		getline(cin, deaths, ',');
	}
	else if (col == 6) 
	{
		getline(cin, id, ',');
		getline(cin, year, ',');
		getline(cin, cause_name, ',');
		getline(cin, cause_name, ',');
		getline(cin, state, ',');
		getline(cin, deaths, ',');
		getline(cin, age, '\n');

	}


	// After that store all data in a vector


    // Now insert data in the file 


	// Now append the data present in the vector at end of file 
	
}

void delete_in_csv(string file_name , int index) 
{

}

template<class T>
string search_in_csv(string filename, T value) 
{

}

data_object read_from_file() 
{
	data_object d;
	return d;
}
/*
int main() 
{
	ifstream csv_file;
	csv_file.open("C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\sample_file.xlsx");
	string line = "";

	

	while (getline(csv_file, line)) 
	{

	}
}*/
