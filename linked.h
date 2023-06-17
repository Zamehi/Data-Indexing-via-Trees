#include <iostream>
#include <fstream>
#include <string>

#include "csv.h"
#include "tree.h"
#include "data_object.h"
#include "function.h"

using namespace std;



int main()
{
	string file_paths[10] = { "C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\NCHS_ - _Leading_Causes_of_Death__United_States_8.csv","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\NCHS_ - _Leading_Causes_of_Death__United_States_9.csv","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\NCHS_ - _Leading_Causes_of_Death__United_States_10.csv","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\NCHS_-_Leading_Causes_of_Death__United_States_1.csv","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\NCHS_-_Leading_Causes_of_Death__United_States_2.csv","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\NCHS_-_Leading_Causes_of_Death__United_States_3.csv","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\NCHS_-_Leading_Causes_of_Death__United_States_4.csv","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\NCHS_-_Leading_Causes_of_Death__United_States_5.csv","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\NCHS_-_Leading_Causes_of_Death__United_States_6.csv","C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\NCHS_-_Leading_Causes_of_Death__United_States_7.csv" };
	string path_to_store = "";
	string file = "C:\\Users\\Zunaira\\Documents\\indexed\\folder";
	int for_folder = 1, count = 0; string node_name = "Node"; string txt = ".txt";
	string data_to_insert = "";
	// ********** ____    _____  ___   ____  ____  ***********
	// ********** |   \     |    |  \  |     |     ***********
	// ********** |___/  -  |    |__/  |__   |__   ***********
	// ********** |   \     |    |\    |     |     ***********
	// ********** |___/     |    | \   |___  |___  ***********

	// Reading from the csv file and putting in a linked list 

	cout << "********** ____    _____  ___   ____  ____  ***********" << endl;
	cout << "********** |   \\     |    |  \\  |     |     ***********" << endl;
	cout << "********** |___/  -  |    |__/  |__   |__   ***********" << endl;
	cout << "********** |   \\     |    |\\    |     |     ***********" << endl;
	cout << "********** |___/     |    | \\   |___  |___  ***********" << endl;

	int number_of_nodes = 0;
	int x;
	cout << "By which factor do you want to index your tree?" << endl;
	cout << "1. ID" << endl << "2. year" << endl << "3. Cause Name" << endl << "4. State" << endl << "5. Deaths" << endl << "6. Age Adjusted Death Rate" << endl;
	cin >> x;
	// loop for all files 
	//BTree <int>b(5);

	//                                        OPENING FILE 


	data_object obj;
	fstream csv_file;
	csv_file.open(file_paths[0]);

	while (!csv_file.end)
	{
		obj = ReadFromFile(csv_file, obj);
		if (x == 1)
		{
			// int id 
			BTree <int>b(5);
			count++;
			data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
			path_to_store = "";
			path_to_store.append(file);
			path_to_store.append(to_string(for_folder));  //  1
			path_to_store.push_back('\\');
			path_to_store.append(node_name);


			b.insert(obj.id, path_to_store, data_to_insert);   // C:\\Users\\Zunaira\\Documents\\indexed\\folder1\\Node 
			//path_to_store.push_back(count + 48);
			//path_to_store.append(txt);


		}
		else if (x == 2)
		{
			// int year
			BTree <int>b(5);
			b.insert(obj.year);
		}
		else if (x == 3)
		{
			// string cause_name
			BTree <string>b(5);
			b.insert(obj.cause);
		}
		else if (x == 4)
		{
			// string state
			BTree <string>b(5);
			b.insert(obj.state);
		}
		else if (x == 5)
		{
			// int death
			BTree <int>b(5);
			b.insert(obj.deaths);
		}
		else if (x == 6)
		{
			// float age adjusted rate
			BTree <float>b(5);
			b.insert(obj.age_adjusted);
		}
	}
	// DSBS INdexing 

	cout << "By which factor do you want to index your tree?" << endl;
	cout << "1. ID" << endl << "2. year" << endl << "3. Cause Name" << endl << "4. State" << endl << "5. Deaths" << endl << "6. Age Adjusted Death Rate" << endl;
	cin >> x;
}