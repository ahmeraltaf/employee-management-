// Employees Management System.cpp : Defines the entry point for the console application.
//Asif Ali Sethi(01-12168-035)
//Ahmer Bin Altaf(01-12168-039)
//>>>>>>>>>>>>>>......................<<<<<<<<<<<<<<<<<<<
#include"employee.h"

int num;

void employee::menu()

{
		system("cls");

	// highvideo();

	cout << "          ";

	printf("\n*****  Employees Management System ***** ");

	//normvideo();

	cout << endl;

	cout << "             ";

	cout << "\n\t\t Press  b---->Built The Employee Table ";

	cout << "             ";

	cout << "\n\t\t Press  l---->List The Employee Table  ";

	cout << "             ";

	cout << "\n\t\t Press  i---->Insert New Entry        ";

	cout << "             ";

	cout << "\n\t\t Press  d---->Delete An Entry         ";

	cout << "             ";

	cout << "\n\t\t Press  e---->Edit An Entry           ";

	cout << "             ";

	cout << "\n\t\t Press  s---->Search Arecord          ";

	cout << "             ";

	cout << "\n\t\t Press  n---->Sort The Table          ";

	cout << "             ";

	cout << "\n\t\t Press  q---------->Quit Program              ";

	cout << "             ";

	cout << "\n\n \t\t Select Your Option Please ====> ";

}


void employee::build()

{


	system("cls");

	// highvideo();

	printf("Build The Table");

	cout << endl;

	//normvideo();

	cout << "maximum number of entries  -----  >  20" << endl;

	cout << "how many do you want    ----->";

	cin >> num;

	cout << "Enter The Following Items" << endl;

	for (int i = 0; i <= num - 1; i++)

	{

		cout << " Name  ";

		cin >> emp[i].name;

		cout << "Code  ";

		cin >> emp[i].code;

		cout << "Designation  ";

		cin >> emp[i].designation;

		cout << "Years of Experience  ";

		cin >> emp[i].exp;

		cout << "Age  ";

		cin >> emp[i].age;

	}

	cout << "going to main menu";

	Sleep(500);

}


void employee::list()

{

	system("cls");

	// highvideo();

	printf("       ********List The Table********");

	cout << endl;

	//normvideo();

	cout << "     Name     Code     Designation     Years(EXP)     Age " << endl;

	cout << "    ------------------------------------------------------" << endl;

	for (int i = 0; i <= num - 1; i++)

	{

		cout << setw(13) << emp[i].name;

		cout << setw(6) << emp[i].code;

		cout << setw(15) << emp[i].designation;

		cout << setw(10) << emp[i].exp;

		cout << setw(15) << emp[i].age;

		cout << endl;

	}

	cout << "going to main menu";

	_getch();

}

void employee::insert()

{

	system("cls");

	int i = num;

	num += 1;

	// highvideo();

	printf("Insert New Record");

	cout << endl;

	//normvideo();

	cout << "Enter The Following Items" << endl;

	cout << "Name  ";

	cin >> emp[i].name;

	cout << "Code  ";

	cin >> emp[i].code;

	cout << "Designation  ";

	cin >> emp[i].designation;

	cout << "Years of Experience  ";

	cin >> emp[i].exp;

	cout << "Age  ";

	cin >> emp[i].age;

	cout << endl << endl;

	cout << "going to main menu";

	Sleep(500);


}



void employee::deletes()

{

	system("cls");

	// highvideo();

	int code;

	int check;

	printf("Delete An Entry");

	//normvideo();

	cout << endl;

	cout << "Enter An JobCode To Delete That Entry  ";

	cin >> code;

	int i;

	for (i = 0; i <= num - 1; i++)

	{

		if (emp[i].code == code)

		{

			check = i;

		}

	}

	for (i = 0; i <= num - 1; i++)

	{

		if (i == check)

		{

			continue;

		}

		else

		{

			if (i>check)

			{

				tempemp[i - 1] = emp[i];

			}

			else

			{

				tempemp[i] = emp[i];

			}

		}

	}

	num--;


	for (i = 0; i <= num - 1; i++)

	{

		emp[i] = tempemp[i];

	}

}


void employee::edit()

{

	system("cls");

	int jobcode;

	// highvideo();

	printf("          Edit An Entry           ");

	cout << endl;

	cout << endl;

	int i;

	char option;

	//normvideo();

	cout << "Enter An jobcode To Edit An Entry----  ";

	cin >> jobcode;

	editmenu();

	for (i = 0; i <= num - 1; i++)

	{

		if (emp[i].code == jobcode)

		{


			while ((option = cin.get()) != 'q')

			{

				switch (option)

				{

				case 'n':
					e.editname(i);

					break;

				case 'c':
					e.editcode(i);

					break;

				case 'd':
					e.editdes(i);

					break;

				case 'e':
					e.editexp(i);

					break;

				case 'a':
					e.editage(i);

					break;

				}
				e.editmenu();

			}

		}

	}

}

void employee::editmenu()

{

	system("cls");

	cout << "        What Do You Want To edit";

	cout << "          n--------->Name ";

	cout << "          c--------->Code ";

	cout << "          d--------->Designation";

	cout << "          e--------->Experience ";

	cout << "          a--------->Age        ";

	cout << "              q----->QUIT                            ";

	cout << "   Options Please ---->>>  ";

}

void employee::editname(int i)

{

	cout << "Enter New Name----->  ";

	cin >> emp[i].name;

}

void employee::editcode(int i)

{

	cout << "Enter New Job Code----->  ";

	cin >> emp[i].code;

}

void employee::editdes(int i)

{

	cout << "enter new designation----->  ";

	cin >> emp[i].designation;

}

void employee::editexp(int i)

{

	cout << "Enter new Years of Experience";

	cin >> emp[i].exp;

}

void  employee::editage(int i)

{

	cout << "Enter new Age ";

	cin >> emp[i].age;

}


void employee::search()

{

	system("cls");

	// highvideo();

	printf("Welcome To Search Of Employee Database ");

	//normvideo();

	cout << endl;

	cout << endl;

	int jobcode;

	cout << "You Can Search Only By Jobcode Of An Employee";

	cout << "Enter Code Of An Employee                    ";

	cin >> jobcode;

	for (int i = 0; i <= num - 1; i++)

	{

		if (emp[i].code == jobcode)

		{


			cout << "     Name     Code     Designation     Years(EXP)     Age ";

			cout << "     ------------------------------------------------------                                  ";

			cout << setw(13) << emp[i].name;

			cout << setw(6) << emp[i].code;

			cout << setw(15) << emp[i].designation;

			cout << setw(10) << emp[i].exp;

			cout << setw(15) << emp[i].age;

			cout << endl;

		}


	}

	cout << "going to main menu";

	_getch();



}


void employee::sort()

{

	system("cls");

	// highvideo();

	printf("Sort The Databse By JobCode");

	//normvideo();

	char option;

	cout << endl;

	cout << endl;
	e.sortmenu();

	while ((option = cin.get()) != 'q')

	{

		switch (option)

		{

		case 'n':
			e.sortname();

			break;

		case 'c':
			e.sortcode();

			break;

		case 'd':
			e.sortdes();

			break;

		case 'e':
			e.sortexp();

			break;

		case 'a':
			e.sortage();

			break;

		}
		e.sortmenu();

	}

}



void employee::sortmenu()

{

	system("cls");

	cout << "          What Do You Want To edit";

	cout << "          n--------->Name         ";

	cout << "          c--------->Code         ";

	cout << "          d--------->Designation  ";

	cout << "          e--------->Experience   ";

	cout << "          a--------->Age          ";

	cout << "                               q----->QUIT            ";

	cout << "   Options Please ---->>>  ";
}




void employee::sortname()

{

	system("cls");

	int i, j;

	employee temp[max];

	for (i = 0; i <= num - 1; i++)

	{

		sortemp1[i] = emp[i];

	}

	for (i = 0; i <= num - 1; i++)

	{

		for (j = 0; j <= num - 1; j++)

		{

			if (strcmp(sortemp1[i].name, sortemp1[j].name) <= 0)

			{

				temp[i] = sortemp1[i];

				sortemp1[i] = sortemp1[j];

				sortemp1[j] = temp[i];

			}

		}

	}


	for (i = 0; i <= num - 1; i++)

	{


		cout << "     Name     Code     Designation     Years(EXP)     Age ";

		cout << "     ------------------------------------------------------                                  ";

		for (i = 0; i <= num - 1; i++)

		{

			cout << setw(13) << sortemp1[i].name;

			cout << setw(6) << sortemp1[i].code;

			cout << setw(15) << sortemp1[i].designation;

			cout << setw(10) << sortemp1[i].exp;

			cout << setw(15) << sortemp1[i].age;

			cout << endl;

		}

		cout << "Press Any Key To Go Back";

		_getch();


	}
}


void employee::sortcode()

{

	system("cls");

	int i, j;

	employee temp[max];

	for (i = 0; i <= num - 1; i++)

	{

		sortemp1[i] = emp[i];

	}

	for (i = 0; i <= num - 1; i++)

	{

		for (j = 0; j <= num - 1; j++)

		{

			if (sortemp1[i].code<sortemp1[j].code)

			{

				temp[i] = sortemp1[i];

				sortemp1[i] = sortemp1[j];

				sortemp1[j] = temp[i];

			}

		}

	}


	for (i = 0; i <= num - 1; i++)

	{


		cout << "     Name     Code     Designation     Years(EXP)     Age ";

		cout << "     ------------------------------------------------------                                  ";

		for (i = 0; i <= num - 1; i++)

		{

			cout << setw(13) << sortemp1[i].name;

			cout << setw(6) << sortemp1[i].code;

			cout << setw(15) << sortemp1[i].designation;

			cout << setw(10) << sortemp1[i].exp;

			cout << setw(15) << sortemp1[i].age;

			cout << endl;

		}

		cout << "Press Any Key To Go Back";

		_getch();


	}
}



void employee::sortdes()

{

	system("cls");

	int i, j;

	employee temp[max];

	for (i = 0; i <= num - 1; i++)

	{

		sortemp1[i] = emp[i];

	}

	for (i = 0; i <= num - 1; i++)

	{

		for (j = 0; j <= num - 1; j++)

		{

			if (strcmp(sortemp1[i].designation, sortemp1[j].designation) <= 0)

			{

				temp[i] = sortemp1[i];

				sortemp1[i] = sortemp1[j];

				sortemp1[j] = temp[i];

			}

		}

	}


	for (i = 0; i <= num - 1; i++)

	{


		cout << "     Name     Code     Designation     Years(EXP)     Age";

		cout << "     ------------------------------------------------------                                 ";

		for (i = 0; i <= num - 1; i++)

		{

			cout << setw(13) << sortemp1[i].name;

			cout << setw(6) << sortemp1[i].code;

			cout << setw(15) << sortemp1[i].designation;

			cout << setw(10) << sortemp1[i].exp;

			cout << setw(15) << sortemp1[i].age;

			cout << endl;

		}

		cout << "Press Any Key To Go Back";

		_getch();


	}
}


void employee::sortage()

{

	system("cls");

	int i, j;

	employee temp[max];

	for (i = 0; i <= num - 1; i++)

	{

		sortemp1[i] = emp[i];

	}

	for (i = 0; i <= num - 1; i++)

	{

		for (j = 0; j <= num - 1; j++)

		{

			if (sortemp1[i].age<sortemp1[j].age)

			{

				temp[i] = sortemp1[i];

				sortemp1[i] = sortemp1[j];

				sortemp1[j] = temp[i];

			}

		}

	}


	for (i = 0; i <= num - 1; i++)

	{


		cout << "     Name     Code     Designation     Years(EXP)     Age";

		cout << "     ------------------------------------------------------                                 ";

		for (i = 0; i <= num - 1; i++)

		{

			cout << setw(13) << sortemp1[i].name;

			cout << setw(6) << sortemp1[i].code;

			cout << setw(15) << sortemp1[i].designation;

			cout << setw(10) << sortemp1[i].exp;

			cout << setw(15) << sortemp1[i].age;

			cout << endl;

		}

		cout << "Press Any Key To Go Back";

		_getch();


	}
}



void employee::sortexp()

{

	system("cls");

	int i, j;

	employee temp[max];

	for (i = 0; i <= num - 1; i++)

	{

		sortemp1[i] = emp[i];

	}

	for (i = 0; i <= num - 1; i++)

	{

		for (j = 0; j <= num - 1; j++)

		{

			if (sortemp1[i].exp<sortemp1[j].exp)

			{

				temp[i] = sortemp1[i];

				sortemp1[i] = sortemp1[j];

				sortemp1[j] = temp[i];

			}

		}

	}


	for (i = 0; i <= num - 1; i++)

	{


		cout << "     Name     Code     Designation     Years(EXP)     Age ";

		cout << "  ------------------------------------------------------ ";

		for (i = 0; i <= num - 1; i++)

		{

			cout << setw(13) << sortemp1[i].name;

			cout << setw(6) << sortemp1[i].code;

			cout << setw(15) << sortemp1[i].designation;

			cout << setw(10) << sortemp1[i].exp;

			cout << setw(15) << sortemp1[i].age;

			cout << endl;

		}

		cout << "Press Any Key To Go Back";

		_getch();


	}
}
void intro()
{
	system("COLOR 9f");
	/*cout<<"\n\n\n\t\t\t  EMPLOYEE";
	cout<<"\n\n\t\t\tMANAGEMENT";
	cout<<"\n\n\t  \t\tSYSTEM";*/
	cout << "\n\n\n\n\n\n\t\t\t WELCOME TO EMPLOYEE MANAGEMENT SYSTEM\n";
	cout << "\n\n\n\nMADE BY : \tAsif Ali Sethi\n\t\tAhmer Altaf\n";
	cout << "\n\nBahria University Islamabad : BCE-3";
	cin.get();
}
int main()

{

	system("cls");
	char option;
	intro();
	e.menu();

	while ((option = cin.get()) != 'q')

	{

		switch (option)

		{

		case 'b':
			e.build();

			break;

		case 'l':
			e.list();

			break;

		case 'i':
			e.insert();

			break;

		case 'd':
			e.deletes();

			break;

		case 'e':
			e.edit();

			break;

		case 's':
			e.search();

			break;

		case 'n':
			e.sort();

			break;

		}
		e.menu();

	}
	system("pause");
	return 0;

}
