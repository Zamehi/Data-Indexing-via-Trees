#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std; 

//                                        Data object


struct data_object 
{
public :
    int id;
    int year;
    string cause_name13;
    string cause;
    string state;
    int deaths;
    float age_adjusted;
  
    //                                     Functions
    // Constructor 
    data_object(int id=0, int year= 0, string cause_name13= "", string cause= "", string state= "", int deaths= 0, float age_adjusted= 0.0)
    {
        this->id=             id ;
        this->year=           year;
        this-> cause_name13=  cause_name13;
        this-> cause=         cause ;
        this-> state=         state;
        this-> deaths=        deaths;
        this-> age_adjusted=  age_adjusted;
    }
    ~data_object()
    {

    }


};



data_object ReadFromFile(fstream &csv_file, data_object d)
{
	//data_object d;
	//ifstream csv_file;
    //csv_file.open(file_path);
	//csv_file.open("C:\\Users\\Zunaira\\Documents\\3rd Semester\\Data Structures\\Data Project\\sample.csv");
	string line = "";


	
    // 1 id 
    getline(csv_file, line, ',');
    d.id = stoi(line);
    // 2 year
    getline(csv_file, line, ',');
    d.year = stoi(line);
    // 3 cause_name13
    getline(csv_file, line, ',');
    d.cause_name13 = (line);
    // 4 cause
    getline(csv_file, line, ',');
    d.cause = (line);
    // 5 state
    getline(csv_file, line, ',');
    d.state = (line);
    // 6 deaths
    getline(csv_file, line, ',');
    d.deaths = stoi(line);
    // 7 age_adjusted death rate
    getline(csv_file, line, '\n');
    d.age_adjusted = stod(line);
	

	return d;

}

