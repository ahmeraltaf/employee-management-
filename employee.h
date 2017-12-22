//classe and headerfiles used for the project

#include<iostream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#include<windows.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>

using namespace std;
const int max = 20;
class employee

{

	char name[20];
	long int code;
	char designation[20];
	int exp;
	int age;
public:
	void menu();
	void build();
	void  list();
	void insert();
	void deletes();
	void edit();
	void search();
	void sort();
	void sortmenu();
	void sortname();
	void sortcode();
	void sortdes();
	void sortexp();
	void sortage();
	void editmenu();
	void editname(int);
	void editcode(int);
	void editdes(int);
	void editexp(int);
	void editage(int);


};
employee e;
employee emp[max], tempemp[max], sortemp[max], sortemp1[max];