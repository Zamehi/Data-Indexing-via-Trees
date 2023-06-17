data_object obj;
fstream csv_file;
for (int i = 0; i < 10; i++)
{
	csv_file.open(file_paths[i]);

	while (csv_file.is_open())
	{
		obj = ReadFromFile(csv_file, obj);

		// Indexing through id 
		if (x == 1)
		{

			data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
			if (obj.id >= 1 && obj.id <= 1000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("id\\folder1\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				insert_in_txt(data_to_insert, str);
				count++;
				b.insert_Value(obj.id, str, data_to_insert);
			}
			else if (obj.id > 1000 && obj.id <= 2000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("id\\folder2\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				b.insert_Value(obj.id, str, data_to_insert);

			}
			else if (obj.id > 2000 && obj.id <= 3000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("id\\folder3\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				b.insert_Value(obj.id, str, data_to_insert);

			}
			else if (obj.id > 3000 && obj.id <= 4000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("id\\folder4\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				b.insert_Value(obj.id, str, data_to_insert);

			}
			else if (obj.id > 4000 && obj.id <= 5000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("id\\folder5\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				b.insert_Value(obj.id, str, data_to_insert);

			}
			else if (obj.id > 5000 && obj.id <= 6000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("id\\folder6\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				b.insert_Value(obj.id, str, data_to_insert);

			}
			else if (obj.id > 6000 && obj.id <= 7000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("id\\folder7\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				b.insert_Value(obj.id, str, data_to_insert);

			}
			else if (obj.id > 7000 && obj.id <= 8000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("id\\folder8\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				b.insert_Value(obj.id, str, data_to_insert);

			}
			else if (obj.id > 8000 && obj.id <= 9000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("id\\folder9\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				b.insert_Value(obj.id, str, data_to_insert);

			}
			else if (obj.id > 9000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("id\\folder10\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				b.insert_Value(obj.id, str, data_to_insert);

			}
		}

		// Indexing through cause
		else if (x == 3)
		{
			// 65   -    90
			data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
			if (obj.cause[0] >= 65 && obj.cause[0] <= 70)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("cause\\folder1\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);

				b1.insert_Value(obj.cause, str, data_to_insert);
			}
			else if (obj.cause[0] > 70 && obj.cause[0] <= 75)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("cause\\folder2\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);

				b1.insert_Value(obj.cause, str, data_to_insert);
			}
			else if (obj.cause[0] > 75 && obj.cause[0] <= 80)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("cause\\folder3\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);

				b1.insert_Value(obj.cause, str, data_to_insert);
			}
			else if (obj.cause[0] > 80 && obj.cause[0] <= 85)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("cause\\folder4\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);

				b1.insert_Value(obj.cause, str, data_to_insert);
			}
			else if (obj.cause[0] > 85)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("cause\\folder5\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);

				b1.insert_Value(obj.cause, str, data_to_insert);
			}
		}

		// Indexing with state
		else if (x == 4)
		{
			// 65   -    90
			data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
			if (obj.state[0] >= 65 && obj.state[0] <= 70)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("state\\folder1\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b1.insert_Value(obj.state, str, data_to_insert);
			}
			else if (obj.state[0] > 70 && obj.state[0] <= 75)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("state\\folder2\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b1.insert_Value(obj.state, str, data_to_insert);
			}
			else if (obj.state[0] > 75 && obj.state[0] <= 80)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("state\\folder3\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b1.insert_Value(obj.state, str, data_to_insert);
			}
			else if (obj.state[0] > 80 && obj.state[0] <= 85)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("state\\folder4\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				insert_in_txt(data_to_insert, str);
				count++;
				b1.insert_Value(obj.state, str, data_to_insert);
			}
			else if (obj.state[0] > 85)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("state\\folder5\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b1.insert_Value(obj.state, str, data_to_insert);
			}
		}

		// Indexing with year
		else if (x == 2)
		{
			data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
			if (obj.year < 2000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("year\\folder1\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b.insert_Value(obj.year, str, data_to_insert);
			}
			else if (obj.year >= 2000 && obj.year <= 2005)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("year\\folder2\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b.insert_Value(obj.year, str, data_to_insert);
			}
			else if (obj.year > 2005 && obj.year <= 2010)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("year\\folder3\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b.insert_Value(obj.year, str, data_to_insert);
			}
			else if (obj.year > 2010 && obj.year <= 2015)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("year\\folder4\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b.insert_Value(obj.year, str, data_to_insert);;
			}
			else if (obj.year > 2015)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("year\\folder5\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b.insert_Value(obj.year, str, data_to_insert);
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
					count++;
					string str = "";
					str.append(brtree);
					str.append("death\\folder1\\");//1.txt);
					str.append(to_string(count));
					str.append(".txt");
					//insert_in_txt(data_to_insert, str);
					//count++;
					b.insert_Value(obj.death, str, data_to_insert);
				}
				else if (obj.deaths > 10000 && obj.deaths <= 20000)
				{

					count++;
					string str = "";
					str.append(brtree);
					str.append("death\\folder2\\");//1.txt);
					str.append(to_string(count));
					str.append(".txt");
					//insert_in_txt(data_to_insert, str);
					//count++;
					b.insert_Value(obj.death, str, data_to_insert);
				}
			}
			else if (obj.deaths > 20000 && obj.deaths <= 40000)
			{
				if (obj.deaths <= 30000)
				{

					count++;
					string str = "";
					str.append(brtree);
					str.append("death\\folder3\\");//1.txt);
					str.append(to_string(count));
					str.append(".txt");
					//insert_in_txt(data_to_insert, str);
					//count++;
					b.insert_Value(obj.death, str, data_to_insert);
				}
				else if (obj.deaths > 30000 && obj.deaths <= 40000)
				{

					count++;
					string str = "";
					str.append(brtree);
					str.append("death\\folder4\\");//1.txt);
					str.append(to_string(count));
					str.append(".txt");
					//insert_in_txt(data_to_insert, str);
					//count++;
					b.insert_Value(obj.death, str, data_to_insert);
				}
			}
			else if (obj.deaths > 40000 && obj.deaths <= 60000)
			{
				if (obj.deaths <= 50000)
				{

					count++;
					string str = "";
					str.append(brtree);
					str.append("death\\folder5\\");//1.txt);
					str.append(to_string(count));
					str.append(".txt");
					//insert_in_txt(data_to_insert, str);
					//count++;
					b.insert_Value(obj.death, str, data_to_insert);
				}
				else if (obj.deaths > 50000 && obj.deaths <= 60000)
				{

					count++;
					string str = "";
					str.append(brtree);
					str.append("death\\folder6\\");//1.txt);
					str.append(to_string(count));
					str.append(".txt");
					//insert_in_txt(data_to_insert, str);
					//count++;
					b.insert_Value(obj.death, str, data_to_insert);
				}
			}
			else if (obj.deaths > 60000 && obj.deaths <= 80000)
			{
				if (obj.deaths <= 70000)
				{

					count++;
					string str = "";
					str.append(brtree);
					str.append("death\\folder7\\");//1.txt);
					str.append(to_string(count));
					str.append(".txt");
					//insert_in_txt(data_to_insert, str);
					//count++;
					b.insert_Value(obj.death, str, data_to_insert);
				}
				else if (obj.deaths > 70000 && obj.deaths <= 80000)
				{

					count++;
					string str = "";
					str.append(brtree);
					str.append("death\\folder8\\");//1.txt);
					str.append(to_string(count));
					str.append(".txt");
					//insert_in_txt(data_to_insert, str);
					//count++;
					b.insert_Value(obj.death, str, data_to_insert);
				}
			}
			else if (obj.deaths > 80000)
			{

				if (obj.deaths <= 100000)
				{

					count++;
					string str = "";
					str.append(brtree);
					str.append("death\\folder9\\");//1.txt);
					str.append(to_string(count));
					str.append(".txt");
					//insert_in_txt(data_to_insert, str);
					//count++;
					b.insert_Value(obj.death, str, data_to_insert);
				}
				else if (obj.deaths > 100000)
				{

					count++;
					string str = "";
					str.append(brtree);
					str.append("death\\folder10\\");//1.txt);
					str.append(to_string(count));
					str.append(".txt");
					//insert_in_txt(data_to_insert, str);
					//count++;
					b.insert_Value(obj.death, str, data_to_insert);
				}
			}
		}

		// Indexing for age adjusted death rate
		else if (x == 6)  //	Indexing through age adjusted death rate
		{

			// float age adjusted rate
			data_to_insert = insert_obj_to_string(to_string(obj.id), to_string(obj.year), (obj.cause_name13), obj.cause, (obj.state), to_string(obj.deaths), to_string(obj.age_adjusted));
			if (obj.age_adjusted >= 1 && obj.age_adjusted <= 250)
			{

				count++;
				string str = "";
				str.append(brtree);
				str.append("age\\folder1\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b2.insert_Value(obj.age_adjusted, str, data_to_insert);;
			}
			else if (obj.age_adjusted > 250 && obj.age_adjusted <= 500)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("age\\folder2\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b2.insert_Value(obj.age_adjusted, str, data_to_insert);;
			}
			else if (obj.age_adjusted > 500 && obj.age_adjusted <= 750)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("age\\folder3\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b2.insert_Value(obj.age_adjusted, str, data_to_insert);;
			}
			else if (obj.age_adjusted > 750 && obj.age_adjusted <= 1000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("age\\folder4\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b2.insert_Value(obj.age_adjusted, str, data_to_insert);;
			}
			else if (obj.age_adjusted > 1000)
			{
				count++;
				string str = "";
				str.append(brtree);
				str.append("age\\folder5\\");//1.txt);
				str.append(to_string(count));
				str.append(".txt");
				//insert_in_txt(data_to_insert, str);
				//count++;
				b2.insert_Value(obj.age_adjusted, str, data_to_insert);;
			}
		}
	}
}
