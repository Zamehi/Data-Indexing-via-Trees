#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


// ***************************************************************
// Display Vector
template <class T>
void display(vector<T>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
}


// ***********************************************************************************************
// OUTPUT STRING overloading
ostream& operator<<(ostream& os, string& msg)
{
	os << msg.c_str();

	return os;
}


// **************************************************************
// Insert data in the txt file 
void insert_in_txt(string data, string path)
{
	data.push_back('\n');

	ofstream myfile;
	if (!myfile)
	{
		cout << "Cannot open file.\n";
	}
	myfile.open(path, ios::app);
	if (myfile.is_open())
	{
		myfile << data;
	}

	myfile.close();

}


// **************************************************************
// Search index in string 
vector<int> search_string_in_txt(string data, string path)
{
	vector <int>lines;
	string search;
	int offset;
	string str;
	int line_number = 0;
	ifstream Myfile;
	Myfile.open(path);

	if (Myfile.is_open())
	{
		while (!Myfile.eof())
		{
			getline(Myfile, str);
			line_number++;
			if ((offset = str.find(data, 0)) != string::npos)
			{
				cout << "The word has been found " << search << endl;
				lines.push_back(line_number);

			}
		}
		Myfile.close();
	}
	else
	{
		cout << "File opening error" << endl;
		system("pause");
		//return 0;
	}
	return lines;
}


// **************************************************************
// Display
void display_tuples(string data, string path) 
{

	// Search on which line number the data is present 
	vector<int> line_number = search_string_in_txt(data, path);// The line where data to be deleted is present 

	display(line_number);
	// Read file contents
	fstream read_file;
	read_file.open(path);
	vector <string> lines;
	string line;
	// If file doesnot exist
	if (read_file.fail())
	{
		cout << "Error" << endl;
	}
	else
	{

		while (getline(read_file, line))
		{
			lines.push_back(line);
		}
	}
	display(lines);
	// size of vector tells nomber of lines in the file 
	//string deleted = "";
	vector<string>deleted;

	// Again opening trhe file and inserting required the lines in the file
	ifstream write_file;
	int check = 0;
	write_file.open(path);
	if (write_file.fail())
	{
		cout << "Error opening the file" << endl;
	}
	else
	{

		for (int i = 0; i < lines.size(); i++)
		{
			for (int t = 0; t < line_number.size(); t++)  // number of the lines t obe removed
			{
				if (i != line_number[t] - 1)
				{
					check = 1;
				}
				else
				{
					// Contains all enteries with the specific number 
					cout << (lines[i]);
					//deleted.push_back(lines[i]);
					check = 0;
					break;
				}
			}
		}
	}
	write_file.close();
}


// **************************************************************
// Display
// Only using for integer and float variable 
template <class T>
void display_tuples_in_range(T data, T data2, string path)
{
	vector <int>lines;
	string search;
	int offset;
	string str;
	int line_number = 0;
	ifstream Myfile;
	Myfile.open(path);
	T i = data;
	if (Myfile.is_open())
	{
		while (!Myfile.eof())
		{
			
			getline(Myfile, str);
			
			line_number++;
			while (i >= data && i <= data2) 
			{
				if ((offset = str.find(i, 0)) != string::npos)
				{
					cout << str;
					//cout << "The word has been found " << search << endl;
					//lines.push_back(line_number);
				}
				//i++;
			}
			
		}
		Myfile.close();
	}
	else
	{
		cout << "File opening error" << endl;
		system("pause");
		//return 0;
	}
	
}



// **************************************************************
// Delete the line in txt and return 
vector<string> delete_line(string data, string path)
{
	// Search on which line number the data is present 
	vector<int> line_number = search_string_in_txt(data, path);// The line where data to be deleted is present 

	display(line_number);
	// Read file contents
	fstream read_file;
	read_file.open(path);
	vector <string> lines;
	string line;
	// If file doesnot exist
	if (read_file.fail())
	{
		cout << "Error" << endl;
	}
	else
	{

		while (getline(read_file, line))
		{
			lines.push_back(line);
		}
	}
	display(lines);
	// size of vector tells nomber of lines in the file 
	//string deleted = "";
	vector<string>deleted;

	// Again opening trhe file and inserting required the lines in the file
	ofstream write_file;
	int check = 0;
	write_file.open(path);
	if (write_file.fail())
	{
		cout << "Error opening the file" << endl;
	}
	else
	{

		for (int i = 0; i < lines.size(); i++)
		{
			for (int t = 0; t < line_number.size(); t++)  // number of the lines t obe removed
			{
				if (i != line_number[t] - 1)
				{
					check = 1;
				}
				else
				{
					// Contains all enteries with the specific number 
					deleted.push_back(lines[i]);
					check = 0;
					break;
				}
			}
			if (check == 1)
			{
				write_file << lines[i] << endl;
			}


		}
	}
	write_file.close();
	return deleted;

}


string insert_obj_to_string(string a, string b, string c, string d, string e, string f, string g)
{
	string str = "";
	str.append(a);
	str.append(",");
	str.append(b);
	str.append(",");
	str.append(c);
	str.append(",");
	str.append(d);
	str.append(",");
	str.append(e);
	str.append(",");
	str.append(f);
	str.append(",");
	str.append(g);
	str.append("\n");
	return str;
}