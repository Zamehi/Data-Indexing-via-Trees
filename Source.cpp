
data_object obj;
fstream csv_file;
for (int i = 0; i < 10; i++)
{
	csv_file.open(file_paths[i]);

	if (csv_file.is_open())
	{
		obj = ReadFromFile(csv_file, obj);

		// Indexing through id 
		if (x == 1)
		{
			data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
			if (obj.id >= 1 && obj.id <= 1000)
			{
				string str = "";
				str.append(file);
				str.append("id\\1.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.id > 1000 && obj.id <= 2000)
			{
				string str = "";
				str.append(file);
				//str.append(a);
				str.append("id\\2.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.id > 2000 && obj.id <= 3000)
			{
				string str = "";
				str.append(file);
				str.append("id\\3.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.id > 3000 && obj.id <= 4000)
			{
				string str = "";
				str.append(file);
				str.append("id\\4.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.id > 4000 && obj.id <= 5000)
			{
				string str = "";
				str.append(file);
				str.append("id\\5.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.id > 5000 && obj.id <= 6000)
			{
				string str = "";
				str.append(file);
				//str.append(a);
				str.append("id\\6.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.id > 6000 && obj.id <= 7000)
			{
				string str = "";
				str.append(file);
				str.append("id\\7.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.id > 7000 && obj.id <= 8000)
			{
				string str = "";
				str.append(file);
				str.append("id\\8.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.id > 8000 && obj.id <= 9000)
			{
				string str = "";
				str.append(file);
				str.append("id\\9.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.id > 9000)
			{
				string str = "";
				str.append(file);
				str.append("id\\10.txt");
				insert_in_txt(data_to_insert, str);
			}
		}

		// Indexing through cause
		else if (x == 3)
		{
			// 65   -    90
			data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
			if (obj.cause[0] >= 65 && obj.cause[0] <= 70)
			{
				string str = "";
				str.append(file);
				str.append("cause\\1.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.cause[0] > 70 && obj.cause[0] <= 75)
			{
				string str = "";
				str.append(file);
				str.append("cause\\2.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.cause[0] > 75 && obj.cause[0] <= 80)
			{
				string str = "";
				str.append(file);
				str.append("cause\\3.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.cause[0] > 80 && obj.cause[0] <= 85)
			{
				string str = "";
				str.append(file);
				str.append("cause\\4.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.cause[0] > 85)
			{
				string str = "";
				str.append(file);
				str.append("cause\\5.txt");
				insert_in_txt(data_to_insert, str);
			}
		}

		// Indexing with state
		else if (x == 4)
		{
			// 65   -    90
			data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
			if (obj.state[0] >= 65 && obj.state[0] <= 70)
			{
				string str = "";
				str.append(file);
				str.append("state\\1.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.state[0] > 70 && obj.state[0] <= 75)
			{
				string str = "";
				str.append(file);
				str.append("state\\2.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.state[0] > 75 && obj.state[0] <= 80)
			{
				string str = "";
				str.append(file);
				str.append("state\\3.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.state[0] > 80 && obj.state[0] <= 85)
			{
				string str = "";
				str.append(file);
				str.append("state\\4.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.state[0] > 85)
			{
				string str = "";
				str.append(file);
				str.append("state\\5.txt");
				insert_in_txt(data_to_insert, str);
			}
		}

		// Indexing with year
		else if (x == 2)
		{
			data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
			if (obj.year < 2000)
			{
				string str = "";
				str.append(file);
				str.append("year\\1.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.year >= 2000 && obj.year <= 2005)
			{
				string str = "";
				str.append(file);
				str.append("year\\2.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.year > 2005 && obj.year <= 2010)
			{
				string str = "";
				str.append(file);
				str.append("year\\3.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.year > 2010 && obj.year <= 2015)
			{
				string str = "";
				str.append(file);
				str.append("year\\4.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.year > 2015)
			{
				string str = "";
				str.append(file);
				str.append("year\\5.txt");
				insert_in_txt(data_to_insert, str);
			}
		}

		// Indexing for death 
		else if (x == 5)
		{
			data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
			if (obj.deaths >= 1 && obj.deaths <= 20000)
			{
				if (obj.deaths <= 10000)
				{
					string str2 = "";
					string str = "folder1\\1.txt";
					str2.append(file);
					str2.append(str);
					insert_in_txt(data_to_insert, str2);
				}
				else if (obj.deaths > 10000 && obj.deaths <= 20000)
				{
					string str2 = "";
					string str = "folder1\\2.txt";
					str2.append(file);
					str2.append(str);
					insert_in_txt(data_to_insert, str2);
				}
			}
			else if (obj.deaths > 20000 && obj.deaths <= 40000)
			{
				if (obj.deaths <= 30000)
				{
					string str2 = "";
					string str = "folder2\\3.txt";
					str2.append(file);
					str2.append(str);
					insert_in_txt(data_to_insert, str2);
				}
				else if (obj.deaths > 30000 && obj.deaths <= 40000)
				{
					string str2 = "";
					string str = "folder2\\4.txt";
					str2.append(file);
					str2.append(str);
					insert_in_txt(data_to_insert, str2);
				}
			}
			else if (obj.deaths > 40000 && obj.deaths <= 60000)
			{
				if (obj.deaths <= 50000)
				{
					string str2 = "";
					string str = "folder3\\5.txt";
					str2.append(file);
					str2.append(str);
					insert_in_txt(data_to_insert, str2);
				}
				else if (obj.deaths > 50000 && obj.deaths <= 60000)
				{
					string str2 = "";
					string str = "folder3\\6.txt";
					str2.append(file);
					str2.append(str);
					insert_in_txt(data_to_insert, str2);
				}
			}
			else if (obj.deaths > 60000 && obj.deaths <= 80000)
			{
				if (obj.deaths <= 70000)
				{
					string str2 = "";
					string str = "folder4\\7.txt";
					str2.append(file);
					str2.append(str);
					insert_in_txt(data_to_insert, str2);
				}
				else if (obj.deaths > 70000 && obj.deaths <= 80000)
				{
					string str2 = "";
					string str = "folder4\\8.txt";
					str2.append(file);
					str2.append(str);
					insert_in_txt(data_to_insert, str2);
				}
			}
			else if (obj.deaths > 80000)
			{

				if (obj.deaths <= 100000)
				{
					string str2 = "";
					string str = "folder5\\9.txt";
					str2.append(file);
					str2.append(str);
					insert_in_txt(data_to_insert, str2);
				}
				else if (obj.deaths > 100000)
				{
					string str2 = "";
					string str = "folder5\\10.txt";
					str2.append(file);
					str2.append(str);
					insert_in_txt(data_to_insert, str2);
				}
			}
		}

		// Indexing for age adjusted death rate
		else if (x == 6)  //	Indexing through age adjusted death rate
		{
			string a = "age_adjusted";
			// float age adjusted rate
			data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
			if (obj.age_adjusted >= 1 && obj.age_adjusted <= 250)
			{
				string str = "";
				str.append(file);
				str.append(a);
				str.append("1.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.age_adjusted > 250 && obj.age_adjusted <= 500)
			{
				string str = "";
				str.append(file);
				str.append(a);
				str.append("2.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.age_adjusted > 500 && obj.age_adjusted <= 750)
			{
				string str = "";
				str.append(file);
				str.append(a);
				str.append("3.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.age_adjusted > 750 && obj.age_adjusted <= 1000)
			{
				string str = "";
				str.append(file);
				str.append(a);
				str.append("4.txt");
				insert_in_txt(data_to_insert, str);
			}
			else if (obj.age_adjusted > 1000)
			{
				string str = "";
				str.append(file);
				str.append(a);
				str.append("5.txt");
				insert_in_txt(data_to_insert, str);
			}
		}
	}
}
// DSBS INdexing 
int t = 0;


//  DSBS Features
cout << "Enter what do you want to do" << endl;
cout << "1. Point Search" << endl << "2. Range Search" << endl << "3. Update key, field, old value, new value" << endl;
cout << "4. Delete tuple" << endl;
cin >> t;

// Point Search and Display
if (t == 1)
{
	int x = 0;
	cout << "Enter Key with which you want to search" << endl;
	cout << "1. ID" << endl << "2. year" << endl << "3. Cause Name" << endl << "4. State" << endl << "5. Deaths" << endl << "6. Age Adjusted Death Rate" << endl;
	cin >> x;
	string value = "";
	cout << "Enter the value" << endl;
	cin >> value;
	// Indexing through id 
	if (x == 1)
	{
		//data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
		if (stoi(value) >= 1 && stoi(value) <= 1000)
		{
			string str = "";
			str.append(file);
			str.append("id\\1.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) > 1000 && stoi(value) <= 2000)
		{
			string str = "";
			str.append(file);
			str.append("id\\2.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) > 2000 && stoi(value) <= 3000)
		{
			string str = "";
			str.append(file);
			str.append("id\\3.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) > 3000 && stoi(value) <= 4000)
		{
			string str = "";
			str.append(file);
			str.append("id\\4.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) > 4000 && stoi(value) <= 5000)
		{
			string str = "";
			str.append(file);
			str.append("id\\5.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) > 5000 && stoi(value) <= 6000)
		{
			string str = "";
			str.append(file);
			str.append("id\\6.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) > 6000 && stoi(value) <= 7000)
		{
			string str = "";
			str.append(file);
			str.append("id\\7.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) > 7000 && stoi(value) <= 8000)
		{
			string str = "";
			str.append(file);
			str.append("id\\8.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) > 8000 && stoi(value) <= 9000)
		{
			string str = "";
			str.append(file);
			str.append("id\\9.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) > 9000)
		{
			string str = "";
			str.append(file);
			str.append("id\\10.txt");
			display_tuples((value), str);
		}
	}

	// Indexing through cause
	else if (x == 3)
	{
		// 65   -    90
		//data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
		if (value[0] >= 65 && value[0] <= 70)
		{
			string str = "";
			str.append(file);
			str.append("cause\\1.txt");
			display_tuples((value), str);
		}
		else if (value[0] > 70 && value[0] <= 75)
		{
			string str = "";
			str.append(file);
			str.append("cause\\2.txt");
			display_tuples((value), str);
		}
		else if (value[0] > 75 && value[0] <= 80)
		{
			string str = "";
			str.append(file);
			str.append("cause\\3.txt");
			display_tuples((value), str);
		}
		else if (value[0] > 80 && value[0] <= 85)
		{
			string str = "";
			str.append(file);
			str.append("cause\\4.txt");
			display_tuples((value), str);
		}
		else if (value[0] > 85)
		{
			string str = "";
			str.append(file);
			str.append("cause\\5.txt");
			display_tuples((value), str);
		}
	}

	// Indexing with state
	else if (x == 4)
	{
		// 65   -    90
		data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
		if (value[0] >= 65 && value[0] <= 70)
		{
			string str = "";
			str.append(file);
			str.append("state\\1.txt");
			display_tuples((value), str);
		}
		else if (value[0] > 70 && value[0] <= 75)
		{
			string str = "";
			str.append(file);
			str.append("state\\2.txt");
			display_tuples((value), str);
		}
		else if (value[0] > 75 && value[0] <= 80)
		{
			string str = "";
			str.append(file);
			str.append("state\\3.txt");
			display_tuples((value), str);
		}
		else if (value[0] > 80 && value[0] <= 85)
		{
			string str = "";
			str.append(file);
			str.append("state\\4.txt");
			display_tuples((value), str);
		}
		else if (value[0] > 85)
		{
			string str = "";
			str.append(file);
			str.append("state\\5.txt");
			display_tuples((value), str);
		}
	}

	// Indexing with year
	else if (x == 2)
	{
		//data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
		if (stoi(value) < 2000)
		{
			string str = "";
			str.append(file);
			str.append("year\\1.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) >= 2000 && stoi(value) <= 2005)
		{
			string str = "";
			str.append(file);
			str.append("year\\2.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) > 2005 && stoi(value) <= 2010)
		{
			string str = "";
			str.append(file);
			str.append("year\\3.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) > 2010 && stoi(value) <= 2015)
		{
			string str = "";
			str.append(file);
			str.append("year\\4.txt");
			display_tuples((value), str);
		}
		else if (stoi(value) > 2015)
		{
			string str = "";
			str.append(file);
			str.append("year\\5.txt");
			display_tuples((value), str);
		}
	}

	// Indexing for death 
	else if (x == 5)
	{
		//data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
		if (stoi(value) >= 1 && stoi(value) <= 20000)
		{
			if (stoi(value) <= 10000)
			{
				string str2 = "";
				string str = "folder1\\1.txt";
				str2.append(file);
				str2.append(str);
				display_tuples((value), str2);
			}
			else if (stoi(value) > 10000 && stoi(value) <= 20000)
			{
				string str2 = "";
				string str = "folder1\\2.txt";
				str2.append(file);
				str2.append(str);
				display_tuples((value), str2);
			}
		}
		else if (stoi(value) > 20000 && stoi(value) <= 40000)
		{
			if (stoi(value) <= 30000)
			{
				string str2 = "";
				string str = "folder2\\3.txt";
				str2.append(file);
				str2.append(str);
				display_tuples((value), str2);
			}
			else if (stoi(value) > 30000 && stoi(value) <= 40000)
			{
				string str2 = "";
				string str = "folder2\\4.txt";
				str2.append(file);
				str2.append(str);
				display_tuples((value), str2);
			}
		}
		else if (stoi(value) > 40000 && stoi(value) <= 60000)
		{
			if (stoi(value) <= 50000)
			{
				string str2 = "";
				string str = "folder3\\5.txt";
				str2.append(file);
				str2.append(str);
				display_tuples((value), str2);
			}
			else if (stoi(value) > 50000 && stoi(value) <= 60000)
			{
				string str2 = "";
				string str = "folder3\\6.txt";
				str2.append(file);
				str2.append(str);
				display_tuples((value), str2);
			}
		}
		else if (stoi(value) > 60000 && stoi(value) <= 80000)
		{
			if (stoi(value) <= 70000)
			{
				string str2 = "";
				string str = "folder4\\7.txt";
				str2.append(file);
				str2.append(str);
				display_tuples((value), str2);
			}
			else if (stoi(value) > 70000 && stoi(value) <= 80000)
			{
				string str2 = "";
				string str = "folder4\\8.txt";
				str2.append(file);
				str2.append(str);
				display_tuples((value), str2);
			}
		}
		else if (stoi(value) > 80000)
		{

			if (stoi(value) <= 100000)
			{
				string str2 = "";
				string str = "folder5\\9.txt";
				str2.append(file);
				str2.append(str);
				display_tuples((value), str2);
			}
			else if (stoi(value) > 100000)
			{
				string str2 = "";
				string str = "folder5\\10.txt";
				str2.append(file);
				str2.append(str);
				display_tuples((value), str2);
			}
		}
	}

	// Indexing for age adjusted death rate
	else if (x == 6)  //	Indexing through age adjusted death rate
	{
		string a = "age_adjusted";
		// float age adjusted rate
		//data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
		if (stod(value) >= 1 && stod(value) <= 250)
		{
			string str = "";
			str.append(file);
			str.append(a);
			str.append("1.txt");
			display_tuples((value), str);
		}
		else if (stod(value) > 250 && stod(value) <= 500)
		{
			string str = "";
			str.append(file);
			str.append(a);
			str.append("2.txt");
			display_tuples((value), str);
		}
		else if (stod(value) > 500 && stod(value) <= 750)
		{
			string str = "";
			str.append(file);
			str.append(a);
			str.append("3.txt");
			display_tuples((value), str);
		}
		else if (stod(value) > 750 && stod(value) <= 1000)
		{
			string str = "";
			str.append(file);
			str.append(a);
			str.append("4.txt");
			display_tuples((value), str);
		}
		else if (stod(value) > 1000)
		{
			string str = "";
			str.append(file);
			str.append(a);
			str.append("5.txt");
			display_tuples((value), str);
		}
	}


}

// Search range of tuples 
else if (t == 2)
{
	int x = 0;
	cout << "Enter Key with which you want to search" << endl;
	cout << "1. ID" << endl << "2. year" << endl << "5. Deaths" << endl << "6. Age Adjusted Death Rate" << endl;
	cin >> x;
	string value = "", value2 = "";
	cout << "Enter the starting range" << endl;
	cin >> value;
	cout << "Enter the ending range" << endl;
	cin >> value2;
	// Indexing through id 
	if (x == 1)
	{
		//data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
		if (stoi(value) >= 1 && stoi(value) <= 1000)
		{
			string str = "";
			str.append(file);
			str.append("id\\1.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) > 1000 && stoi(value) <= 2000)
		{
			string str = "";
			str.append(file);
			str.append("id\\2.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) > 2000 && stoi(value) <= 3000)
		{
			string str = "";
			str.append(file);
			str.append("id\\3.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) > 3000 && stoi(value) <= 4000)
		{
			string str = "";
			str.append(file);
			str.append("id\\4.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) > 4000 && stoi(value) <= 5000)
		{
			string str = "";
			str.append(file);
			str.append("id\\5.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) > 5000 && stoi(value) <= 6000)
		{
			string str = "";
			str.append(file);
			str.append("id\\6.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) > 6000 && stoi(value) <= 7000)
		{
			string str = "";
			str.append(file);
			str.append("id\\7.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) > 7000 && stoi(value) <= 8000)
		{
			string str = "";
			str.append(file);
			str.append("id\\8.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) > 8000 && stoi(value) <= 9000)
		{
			string str = "";
			str.append(file);
			str.append("id\\9.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) > 9000)
		{
			string str = "";
			str.append(file);
			str.append("id\\10.txt");
			display_tuples_in_range(value, value2, str);
		}
	}



	// Indexing with year
	else if (x == 2)
	{
		//data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
		if (stoi(value) < 2000)
		{
			string str = "";
			str.append(file);
			str.append("year\\1.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) >= 2000 && stoi(value) <= 2005)
		{
			string str = "";
			str.append(file);
			str.append("year\\2.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) > 2005 && stoi(value) <= 2010)
		{
			string str = "";
			str.append(file);
			str.append("year\\3.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) > 2010 && stoi(value) <= 2015)
		{
			string str = "";
			str.append(file);
			str.append("year\\4.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stoi(value) > 2015)
		{
			string str = "";
			str.append(file);
			str.append("year\\5.txt");
			display_tuples_in_range(value, value2, str);
		}
	}

	// Indexing for death 
	else if (x == 5)
	{
		//data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
		if (stoi(value) >= 1 && stoi(value) <= 20000)
		{
			if (stoi(value) <= 10000)
			{
				string str2 = "";
				string str = "folder1\\1.txt";
				str2.append(file);
				str2.append(str);
				display_tuples_in_range(value, value2, str2);
			}
			else if (stoi(value) > 10000 && stoi(value) <= 20000)
			{
				string str2 = "";
				string str = "folder1\\2.txt";
				str2.append(file);
				str2.append(str);
				display_tuples_in_range(value, value2, str2);
			}
		}
		else if (stoi(value) > 20000 && stoi(value) <= 40000)
		{
			if (stoi(value) <= 30000)
			{
				string str2 = "";
				string str = "folder2\\3.txt";
				str2.append(file);
				str2.append(str);
				display_tuples_in_range(value, value2, str2);
			}
			else if (stoi(value) > 30000 && stoi(value) <= 40000)
			{
				string str2 = "";
				string str = "folder2\\4.txt";
				str2.append(file);
				str2.append(str);
				display_tuples_in_range(value, value2, str2);
			}
		}
		else if (stoi(value) > 40000 && stoi(value) <= 60000)
		{
			if (stoi(value) <= 50000)
			{
				string str2 = "";
				string str = "folder3\\5.txt";
				str2.append(file);
				str2.append(str);
				display_tuples_in_range(value, value2, str2);
			}
			else if (stoi(value) > 50000 && stoi(value) <= 60000)
			{
				string str2 = "";
				string str = "folder3\\6.txt";
				str2.append(file);
				str2.append(str);
				display_tuples_in_range(value, value2, str2);
			}
		}
		else if (stoi(value) > 60000 && stoi(value) <= 80000)
		{
			if (stoi(value) <= 70000)
			{
				string str2 = "";
				string str = "folder4\\7.txt";
				str2.append(file);
				str2.append(str);
				display_tuples_in_range(value, value2, str2);
			}
			else if (stoi(value) > 70000 && stoi(value) <= 80000)
			{
				string str2 = "";
				string str = "folder4\\8.txt";
				str2.append(file);
				str2.append(str);
				display_tuples_in_range(value, value2, str2);
			}
		}
		else if (stoi(value) > 80000)
		{

			if (stoi(value) <= 100000)
			{
				string str2 = "";
				string str = "folder5\\9.txt";
				str2.append(file);
				str2.append(str);
				display_tuples_in_range(value, value2, str2);
			}
			else if (stoi(value) > 100000)
			{
				string str2 = "";
				string str = "folder5\\10.txt";
				str2.append(file);
				str2.append(str);
				display_tuples_in_range(value, value2, str2);
			}
		}
	}

	// Indexing for age adjusted death rate
	else if (x == 6)  //	Indexing through age adjusted death rate
	{
		string a = "age_adjusted";
		// float age adjusted rate
		//data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
		if (stod(value) >= 1 && stod(value) <= 250)
		{
			string str = "";
			str.append(file);
			str.append(a);
			str.append("1.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stod(value) > 250 && stod(value) <= 500)
		{
			string str = "";
			str.append(file);
			str.append(a);
			str.append("2.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stod(value) > 500 && stod(value) <= 750)
		{
			string str = "";
			str.append(file);
			str.append(a);
			str.append("3.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stod(value) > 750 && stod(value) <= 1000)
		{
			string str = "";
			str.append(file);
			str.append(a);
			str.append("4.txt");
			display_tuples_in_range(value, value2, str);
		}
		else if (stod(value) > 1000)
		{
			string str = "";
			str.append(file);
			str.append(a);
			str.append("5.txt");
			display_tuples_in_range(value, value2, str);
		}
	}


}
else if (t == 3)
{
	int key;
	cout << "Enter Key" << endl;
	cin >> key;
	cout << "Enter the field to modify" << endl << "1. State" << endl << "2. Year" << endl;
	cout << "4. Cause Name" << endl << "5. Deaths" << endl << "6. Age - adjusted Death Rate" << endl;
	int to_modify = 0;
	cin >> to_modify;
	// State
	if (to_modify == 1)
	{

	}
	else if (to_modify == 2)
	{

	}
	else if (to_modify == 3)
	{

	}
	else if (to_modify == 4)
	{

	}
	else if (to_modify == 5)
	{

	}
	else if (to_modify == 6)
	{

	}
}
// Delete tuple
else if (t == 4)
{


}

}