/* ************************************************************************************ */
/* ************************************************************************************ */
/* ************************************** HEADER FILES ******************************** */
/* ************************************************************************************ */
/* ************************************************************************************ */

#include<iostream>  //input-output stream --> used to invoke the functions cout, cin etc;
#include<conio.h>   //console input-output functions --> use to invoke the function clrscr(), getch(), getche(), cgets(), cputs() etc; 
#include<windows.h> //header file for windows API --> use to invoke the header files ctype.h, string.h, function gotoxy() etc;
#include<fstream>   //file stream --> use for creating files, writing in files, reading from files etc;
#include<iomanip>  //provides paramateric manipulators --> use to invoke funciton setfill(), setprecision(), setw() etc;
#include<cstring>  //declars function to work with string --> use to invoke function strcat(), strchr(), strcmp() etc;
#include<time.h>
#include<cstdlib>
#include<sstream>
#include<ctype.h>

/* ************************************************************************************ */
/* ************************************************************************************ */
/* *********************************** GLOBAL VARIABLES ******************************* */
/* ************************************************************************************ */
/* ************************************************************************************ */

using namespace std;

/* ************************************************************************************ */
/* ************************************************************************************ */
/* ********************************** DEFINED DECLERATION ***************************** */
/* ************************************************************************************ */
/* ************************************************************************************ */

#define enter 13
#define tab 9
#define backspace 8

/* ************************************************************************************ */
/* ************************************************************************************ */
/* *********************************** Class DECLERATION ****************************** */
/* ************************************************************************************ */
/* ************************************************************************************ */
class variable;

/* ************************************************************************************ */
/* ************************************************************************************ */
/* ********************************* FUNCTION DECLERATION ***************************** */
/* ************************************************************************************ */
/* ************************************************************************************ */
void MenuScreen();
void Doctor_info();
void Hospital_info();
void Staff_info();
void Patient_info();
void Existing_Acc();
/* ************************************************************************************ */
/* ************************************************************************************ */
/* ************************************ Class Expansion ******************************* */
/* ************************************************************************************ */
/* ************************************************************************************ */
/* ********************************************************************************* */
/* ********************************** CLASS EXPANSION ****************************** */
/* ********************************************************************************* */
class Variable
{
	private:
		
		//string Username;
		//char Password[20];		-->>
		//string Original_username;
		//string Original_password;
		//int ch;
		//----------diogonis-----
		string Charge;
		string Hiv_test;
		string Blood_pressure_test;
		string Liver_test;
		string Heart_test;
		string Disease_Name;
		string AD;
		string day;
		string month;
		string year;
		string hour;
		string minute;
		string Blood_group;
		string Id;
		string Patient_First_Name;
		string Patient_Last_Name;
		string Patient_Address;
		string Original_id;
		string Original_Patient_name;
		string Original_Patient_First_Name;
		string Original_Patient_Last_Name;
		string *days,*months,*years;
		string *hours, *minutes;
		//----------------------
		string Username;
		string Password;
		string Original_username;
		string Original_password;
		int c;
		int d;
		int i;
		int e;
		int a;
		int b;
		char ch;
		int valid;
		int Age;
		string Original_Age;
		string Contact_no;
		string Original_Contact_no;
		string Original_Doctors_city;
		string Original_Specialisation;
		string Doctor_First_Name;
		string Doctor_Last_Name;
		string Doctors_city;
		string Specialisation;
		string Specialisations;
		//string Original_id;
		string Original_doctor_name;
		string Original_doctor_First_Name;
		string Original_doctor_Last_Name;
		//----------------added----------------
		string Original_Hospital_city;
		string Hospital_Full_Name;
		string Hospital_city;
		string Original_Hospital_name;
		string Original_Hospital_Full_Name;
		//-----------till here------------------
		string Original_staff_First_Name;
		string Original_staff_Last_Name;
		string Staff_city;
		string Staff_First_Name;
		string Staff_Last_Name;
		
	
		
	public:
		int row;
		int column;
		void WelcomeScreen();//WelcomeScreen function decleration
		void Title();//Title function decleration
			/*--------Doctor-----------*/
			void Title_add_doctor();
			void Title_update_doctor();
			void Title_delete_doctor();
			/*--------Hospital-----------*/
			void Title_add_hospital();
			void Title_update_hospital();
			void Title_delete_hospital();
			/*--------Staff-----------*/
			void Title_add_staff();
			void Title_update_staff();
			void Title_delete_staff();
			/*--------Patient-----------*/
			void Title_add_patient_record();
			void Title_update_patient_record();
			void Title_delete_patient_record();
			void Title_add_patient_report();
			void Title_update_patient_report();
			void Title_view_patient_information();
			void Title_view_hospital_information();
		void MainMenu();//MainMenu function decleration
		void LoginScreen();//LoginScreen function decleration
		void gotoxy(short x, short y);
		
		
		void AccessScreen();
		void Admin();
			void Admin_menu();
				void Doctor_menu();
					void Add_doctor_information();
						string Specialization_add_doctor();
							string Specialization();
					void Update_doctor_information();
						string Specialization_update_doctor();
					void Delete_doctor_information();
		void View_Hospital_information();			
		void Staff();
			void Staff_existing_account();
			void New_Acc();
				void Staff_new_account();
		void Public();
			void Public_existing_account();
			void Public_new_account();
		void Staff_menu();
			void New_patient_record();
			//void Diagnosis_information();
			//void Patient_information();
		void ex_it();
		
		void Hospital_data();
		void Patient_data();
		
		void New_Acc_Creation();
		void Existing_Acc_Creation();
		string Password_chunk();
		
		int count_array_in_files();
		//----------------------added--------------------
		void Hospital_menu();
			void Add_Hospital_information();
				string Specializations();
			void Delete_Hospital_information();
			void Update_Hospital_information();
		int count_array_in_Hospital_files();
		//---------------------till here---------------------
		//---------diagonis-------------
		//void Staff_info();
			void Patient_record();
				void Add_patient_record();
				void Delete_patient_record();
				void Update_patient_record();
			void Diagnosis_information();
				void Diagnosis_report();
					void Add_diagnosis_report();
					void Update_diagnosis_report();
			void Patient_information();
		int count_array_in_patient_files();
		int count_array_in_diagnosis_files();
		int count_array_in_hospital_files();
		void date();
		void time();
		void store_date(string*, string* , string*);
		void store_time(string* ,string* );
		//void Patient_info();
		//----------------------
		void Patient();
		
		//New added files
		void Add_staff_information();
		void Update_staff_information();
		void Delete_staff_information();
			
			int count_array_in_staff_files();
				//new added
		string convert(string );
};
/* ************************************************************************************ */
/* ************************************************************************************ */
/* ********************************** CODE EXECUTION ********************************** */
/* ************************************************************************************ */
/* ************************************************************************************ */

int main()
{
	//system("mode 650");												//for full screen console(output screen)
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);						//for full screen console(output screen)
	system("color A");
	MenuScreen();
}
/* ********************************************************************************* */
/* ********************************************************************************* */
/* ********************************** MENU SCREEN ********************************** */
/* ********************************************************************************* */
/* ********************************************************************************* */
void MenuScreen()
{
	Variable v;
	v.WelcomeScreen();//Use to call Welcome_Screen function
	v.Title();//Use to call Title function
	v.AccessScreen();//Use to call Login function
}
/* ************************************************************************************************************** */
/* ************************************************************************************************************** */
/* ************************************************* WELCOME SCREEN ********************************************* */
/* ************************************************************************************************************** */
/* ************************************************************************************************************** */
void Variable :: WelcomeScreen()
{
	row=19;
	column=70;
	gotoxy(column-1,row-1);
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
	gotoxy(column-1,row);
	printf("@@_________________________________________________@@");
	gotoxy(column-1,row+1);
	printf("@@|");
	gotoxy(column+2,row+1);
	printf("-----------------------------------------------");
	gotoxy(column+49,row+1);
	printf("|@@");
	gotoxy(column-1,row+2);
	printf("@@|!");
	gotoxy(column+48,row+2);
	printf("!|@@");
	gotoxy(column-1,row+3);
	printf("@@|!");
	gotoxy(column+48,row+3);
	printf("!|@@");
	gotoxy(column-1,row+4);
	printf("@@|!");
	gotoxy(column+48,row+4);
	printf("!|@@");
	gotoxy(column-1,row+5);
	printf("@@|!");
	gotoxy(column+48,row+5);
	printf("!|@@");
	gotoxy(column-1,row+6);
	printf("@@|!");
	gotoxy(column+48,row+6);
	printf("!|@@");
	gotoxy(column-1,row+7);
	printf("@@|!");
	gotoxy(column+48,row+7);
	printf("!|@@");
	gotoxy(column-1,row+8);
	printf("@@|!");
	gotoxy(column+48,row+8);
	printf("!|@@");
	gotoxy(column-1,row+9);
	printf("@@|");
	gotoxy(column+49,row+9);
	printf("|@@");
	gotoxy(column+2,row+9);
	printf("-----------------------------------------------");
	gotoxy(column-1,row+10);
	printf("@@_________________________________________________@@");
	gotoxy(column-1,row+11);
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
	gotoxy(column+17,row+3);
	printf("Welcome To");
	gotoxy(column+10,row+5);
	printf("Hospital Management System");
	gotoxy(column+25,row+8);
	printf("Brought to you by ASSR");
	gotoxy(210,52);
	getch();
	system("cls");
}

/* ************************************************************************************************************ */
/* ************************************************************************************************************ */
/* ************************************************* TITLE SCREEN ********************************************* */
/* ************************************************************************************************************ */
/* ************************************************************************************************************ */

void Variable :: Title()
{
	row=4;
	column=0;
	gotoxy(column,row);
	cout<<"   ----------------------------------------------------------------------------------------------------------------------------------------------------------------------";
	gotoxy(column+65,row+1);
	cout<<"HOSPITAL MANAGEMENT SYSTEM BROUGHT TO YOU BY ASSR";	
	gotoxy(column,row+2);
	cout<<"   ----------------------------------------------------------------------------------------------------------------------------------------------------------------------";
}

/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */
/* ************************************************* TITLE SCREEN ADD DOCTOR ********************************************* */
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */

void Variable :: Title_add_doctor()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+40,row+1);
	cout<<"ADD DOCTOR AND DOCTOR INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* ************************************************************************************************************************** */
/* ************************************************************************************************************************** */
/* ************************************************* TITLE SCREEN UPDATE DOCTOR ********************************************* */
/* ************************************************************************************************************************** */
/* ************************************************************************************************************************** */

void Variable :: Title_update_doctor()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+40,row+1);
	cout<<"UPDATE DOCTOR AND DOCTOR INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* ************************************************************************************************************************** */
/* ************************************************************************************************************************** */
/* ************************************************* TITLE SCREEN DELETE DOCTOR ********************************************* */
/* ************************************************************************************************************************** */
/* ************************************************************************************************************************** */

void Variable :: Title_delete_doctor()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+40,row+1);
	cout<<"DELETE DOCTOR AND DOCTOR INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */
/* ************************************************* TITLE SCREEN ADD HOSPITAL ********************************************* */
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */

void Variable :: Title_add_hospital()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+46,row+1);
	cout<<"ADD HOSPITAL INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* **************************************************************************************************************************** */
/* **************************************************************************************************************************** */
/* ************************************************* TITLE SCREEN UPDATE HOSPITAL ********************************************* */
/* **************************************************************************************************************************** */
/* **************************************************************************************************************************** */

void Variable :: Title_update_hospital()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+44,row+1);
	cout<<"UPDATE HOSPITAL INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* **************************************************************************************************************************** */
/* **************************************************************************************************************************** */
/* ************************************************* TITLE SCREEN DELETE HOSPITAL ********************************************* */
/* **************************************************************************************************************************** */
/* **************************************************************************************************************************** */
void Variable :: Title_delete_hospital()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+44,row+1);
	cout<<"DELETE HOSPITAL INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */
/* ************************************************* TITLE SCREEN ADD STAFF ********************************************* */
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */
void Variable :: Title_add_staff()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+45,row+1);
	cout<<"ADD STAFF INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* ************************************************************************************************************************** */
/* ************************************************************************************************************************** */
/* ************************************************* TITLE SCREEN UPDATE STAFF ********************************************* */
/* ************************************************************************************************************************** */
/* ************************************************************************************************************************** */

void Variable :: Title_update_staff()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+45,row+1);
	cout<<"UPDATE STAFF INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* ************************************************************************************************************************* */
/* ************************************************************************************************************************* */
/* ************************************************* TITLE SCREEN DELETE STAFF ********************************************* */
/* ************************************************************************************************************************* */
/* ************************************************************************************************************************* */
void Variable :: Title_delete_staff()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+45,row+1);
	cout<<"DELETE STAFF INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */
/* ************************************************* TITLE SCREEN ADD PATIENT ********************************************* */
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */
void Variable :: Title_add_patient_record()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+45,row+1);
	cout<<"ADD PATIENT INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */
/* ************************************************* TITLE SCREEN UPDATE PATIENT ********************************************* */
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */
void Variable :: Title_update_patient_record()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+45,row+1);
	cout<<"UPDATE PATIENT INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */
/* ************************************************* TITLE SCREEN DELETE PATIENT ********************************************* */
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */
void Variable :: Title_delete_patient_record()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+45,row+1);
	cout<<"DELETE PATIENT INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */
/* ************************************************* TITLE VIEW PATIENT INFORMATION ********************************************* */
/* *********************************************************************************************************************** */
/* *********************************************************************************************************************** */
void Variable :: Title_view_patient_information()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+45,row+1);
	cout<<"VIEW PATIENT INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";
}
/* ******************************************************************************************************************************* */
/* ******************************************************************************************************************************* */
/* ************************************************* TITLE SCREEN ADD PATIENT REPORT ********************************************* */
/* ******************************************************************************************************************************* */
/* ******************************************************************************************************************************* */
void Variable :: Title_add_patient_report()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+45,row+1);
	cout<<"ADD PATIENT INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";	
}
/* ******************************************************************************************************************************* */
/* ******************************************************************************************************************************* */
/* ************************************************* TITLE SCREEN UPDATE PATIENT REPORT ********************************************* */
/* ******************************************************************************************************************************* */
/* ******************************************************************************************************************************* */
void Variable :: Title_update_patient_report()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+45,row+1);
	cout<<"UPDATE PATIENT INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";	
}
/* ******************************************************************************************************************************* */
/* ******************************************************************************************************************************* */
/* ************************************************* TITLE SCREEN VIEW HOSPITAL INFORMATION ********************************************* */
/* ******************************************************************************************************************************* */
/* ******************************************************************************************************************************* */
void Variable :: Title_view_hospital_information()
{
	row=15;
	column=40;
	gotoxy(column+20,row);
	cout<<"-----------------------------------------------------------------------------------";
	gotoxy(column+45,row+1);
	cout<<"VIEW HOSPITAL INFORMATION";	
	gotoxy(column+20,row+2);
	cout<<"-----------------------------------------------------------------------------------";	
}
/* ************************************************************************************************************ */
/* ************************************************************************************************************ */
/* ************************************************* ACCESS SCREEN ******************************************** */
/* ************************************************************************************************************ */
/* ************************************************************************************************************ */
void Variable :: AccessScreen()
{
	system("cls");
	Title();
	row=25;
	column=88;
	int ch;
	gotoxy(column,row);
	cout<<"1. Admin";
	gotoxy(column,row+2);
	cout<<"2. Staff";
	gotoxy(column,row+4);
	cout<<"3. Patient";
	gotoxy(column,row+6);
	cout<<"4. Exit";
	gotoxy(column,row+8);
	cin>>ch;
	switch(ch)
	{
		case 1:
			Admin();
			break;
		case 2:
			Staff();
			break;
		case 3:
			Patient();
			break;
		case 4:
			ex_it();
			break;
		default:
			gotoxy(column,row+10);
			cout<<"Invaid input (Press Enter :)";
			getch();
			AccessScreen();
			break;
			
	}
}

/* **************************************************************************************************** */
/* ************************************************* ADMIN ******************************************** */
/* **************************************************************************************************** */

void Variable :: Admin()
{
	system("cls");
	Title();
	row=24;
	column=86;
	int e=0;
	Original_username="Hospital";
	Original_password="hospital123";
	do
	{
		system("cls");
		Title();
		row=20;
		column=85;
		gotoxy(column,row+3);
		cout<<"Username :: ";
		cin>>Username;
		Username=convert(Username); //Username[0]=toupper(Username[0]);
		gotoxy(column,row+6);
		cout<<"Password :: ";
		Password=Password_chunk();
		Original_username=convert(Original_username);
		if((Username==Original_username) && (Password==Original_password))   //.c_str convetrs pointer to an array. i.e strings are in pointers format in c++ and it converts it into array format or C style format
		{
			gotoxy(column,row+9);
			cout<<"Password matched... (Press Any Key :)";
			gotoxy(210,52);
			getch();
			system("cls");
			Admin_menu();
			break;
		}
		else
		{
			gotoxy(column,row+9);
			cout<<"Password Incorrect (Try Again: ) \n";
			gotoxy(column,row+10);
			getch();
			system("cls");
			Title();
			e++;
		}
	}while(e<=2);
	if(e>2)
	{
		row=20;
		column=76;
		gotoxy(column,row+4);
		cout<<"You have exceed the limit (System Locked: :)";
		getch();
		AccessScreen();
	}
}

/* ********************************************************************************************************* */
/* ************************************************* ADMIN MENU ******************************************** */
/* ********************************************************************************************************* */
void Variable :: Admin_menu()
{
	system("cls");
	Title();
	int ch;
	row=21;
	column=86;
	gotoxy(column,row);
	cout<<"1. Doctor Information";
	gotoxy(column,row+2);
	cout<<"2. Hospital Information";
	gotoxy(column,row+4);
	cout<<"3. Back";
	gotoxy(column,row+6);
	cout<<"4. Exit";
	gotoxy(column,row+8);
	cin>>ch;
	switch(ch)
	{
		case 1:
			Doctor_info();
			break;
		case 2:
			Hospital_info();
			break;
		case 3:
			AccessScreen();
			break;
		case 4:
			ex_it();
			break;
		default:
			cout<<"Invaid input (Press Enter :)";
			getch();
			Admin_menu();
			break;
	}
	
}

/* ************************************************************************************ */
/* ********************************** Doctor Information ****************************** */
/* ************************************************************************************ */
void Doctor_info()
{
	system("cls");
	Variable v;
	v.Title();
	int ch;
	int r=21;
	int c=86;
	v.gotoxy(c,r);
	cout<<"1. Add Doctor Information";
	v.gotoxy(c,r+2);
	cout<<"2. Update Doctor Information";
	v.gotoxy(c,r+4);
	cout<<"3. Delete Doctor Information";
	v.gotoxy(c,r+6);
	cout<<"4. Back";
	v.gotoxy(c,r+8);
	cout<<"5. Exit";
	v.gotoxy(c,r+10);
	cin>>ch;
	switch(ch)
	{
		case 1:
			v.Add_doctor_information();
			break;
		case 2:
			v.Update_doctor_information();
			break;
		case 3:
			v.Delete_doctor_information();
			break;
		case 4:
			v.Admin_menu();
			break;
		case 5:
			v.ex_it();
			break;
		default:
			v.gotoxy(c,r+12);
			cout<<"Invalid (Press Enter to Return Back :) ";
			v.gotoxy(210,52);
			getch();
			Doctor_info();
			break;
	}
}
/* **************************************************************************** */
/* ********************************** ADD DOCTOR ****************************** */
/* **************************************************************************** */
void Variable :: Add_doctor_information()
{
	system("cls");
	Title();
	A:
		Title_add_doctor();
	c=0;
	d=0;
	valid=0;
	ofstream off;
	off.open("Doctor_info.txt",ios::app);
	if(off)
	{
		/* **************************************************************************** */
		/* ********************************** DOCTOR ID ******************************* */
		/* **************************************************************************** */
		S:
			Title_add_doctor();
			gotoxy(column+45,row+7);
			cout<<"Doctor's ID: ";
			cin>>Id;
			if(strlen(Id.c_str())!=8)
			{
				gotoxy(column+45,row+9);
				cout<<"Invalid :(The range of Doctor id is 8 :)";
				gotoxy(210,52);
				getch();
				system("cls");
				Title();
				goto S;
			}
			else
			{
				off.close();
				ifstream ins("Doctor_info.txt");
				ins>>Original_id;
				ins>>Original_doctor_First_Name;
				ins>>Original_doctor_Last_Name;	
				ins>>Age;
				ins>>Contact_no;
				ins>>Doctors_city;
					ins>>Specialisation;
				while(!ins.eof())
				{
					if((Id==Original_id)==1)
					{
						gotoxy(column+45,row+9);
						cout<<"Id Already Taken.( Press Enter :)";
						gotoxy(210,52);
						getch();
						Add_doctor_information();
					}
					else
					{
						d=d+1;
					}
					ins>>Original_id;
					ins>>Original_doctor_First_Name;
					ins>>Original_doctor_Last_Name;	
					ins>>Age;
					ins>>Contact_no;
					ins>>Doctors_city;
					ins>>Specialisation;
				}
				if(d>=1)
				{
					ins.close();
				}
			}	
		/* **************************************************************************** */
		/* ********************************** FIRST NAME ****************************** */
		/* **************************************************************************** */
		B:
			system("cls");
			Title();
			Title_add_doctor();
			gotoxy(column+45,row+7);
			cout<<"First Name: ";
			cin>>Doctor_First_Name;
			Doctor_First_Name[0]=toupper(Doctor_First_Name[0]);
			if(strlen(Doctor_First_Name.c_str())>20||strlen(Doctor_First_Name.c_str())<2)
 			{
 				gotoxy(column+45,row+9);
				cout<<"Invalid :(The max range for first name is 20 and min range is 2 :)";
				gotoxy(210,52);
				getch();
				goto B;
			}
			else
			{
				for (b=0;b<strlen(Doctor_First_Name.c_str());b++)
				{
					if (isalpha(Doctor_First_Name[b]))
					{
						valid=1;
					}
					else
					{
						valid=0;
						break;
					}
				}
				if(valid==0)
				{
					gotoxy(column+45,row+9);
					cout<<"First name contain Invalid character :(  Enter again :)";
					gotoxy(210,52);
					getch();
					goto B;
				}
			}
		/* *************************************************************************** */
		/* ********************************** LAST NAME ****************************** */
		/* **************************************************************************** */
		C:
			system("cls");
			Title();
			Title_add_doctor();
			gotoxy(column+45,row+7);
			cout<<"Last Name: ";
    		cin>>Doctor_Last_Name;
    		Doctor_Last_Name[0]=toupper(Doctor_Last_Name[0]);
    		if(strlen(Doctor_Last_Name.c_str())>20||strlen(Doctor_Last_Name.c_str())<2)
			{
				gotoxy(column+45,row+9);
				cout<<"Invalid :( The max range for last name is 20 and min range is 2 :)";
				getch();
				system("cls");
				Title();
				goto C;
			}
			else
			{
				for (b=0;b<strlen(Doctor_Last_Name.c_str());b++)
				{
					if (isalpha(Doctor_Last_Name[b]))
					{
						valid=1;
					}
					else
					{
						valid=0;
						break;
					}
				}
				if(valid==0)
				{
					gotoxy(column+45,row+9);
					cout<<"Last name contain Invalid character :(  Enter again :)";
					getch();
					system("cls");
					Title();
					goto C;
				}
			}
		/* ********************************************************************* */
		/* ********************************** AGE ****************************** */	
		/* ********************************************************************* */
			system("cls");
			Title();
			Title_add_doctor();
			gotoxy(column+45,row+7);
    		cout<<"Age:";
    		cin>>Age;   
    	/* ***************************************************************************** */
		/* ********************************** CONTACT NO. ****************************** */
		/* ****************************************************************************** */
		do
		{
			D:
				system("cls");
				Title();
				Title_add_doctor();
				gotoxy(column+45,row+7);
		    	cout<<"Contact no: ";
		    	cin>>Contact_no;
		    	if(strlen(Contact_no.c_str())>10||strlen(Contact_no.c_str())!=10)
				{
					gotoxy(column+45,row+9);
					cout<<"Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)";
					getch();
					goto D;
				}
				else
				{
					for (b=0;b<strlen(Contact_no.c_str());b++)
					{
						if (isdigit(Contact_no[b]))
						{
							valid=1;
						}
						else
						{
							valid=0;
							break;
						}
					}
					if(valid==0)
					{
						gotoxy(column+45,row+9);
						cout<<"Contact no. contain Invalid character :(  Enter again :)";
						gotoxy(210,52);
						getch();
						goto D;
					}
					if(valid==1)
					{
						break;
					}
				}
		}while(valid==0);
		/* ******************************************************************************** */
		/* ********************************** Doctor's City' ****************************** */  
		/* ******************************************************************************** */
	    do
	    {
		    E:
		    	system("cls");
				Title();
				Title_add_doctor();
				gotoxy(column+45,row+7);
		    	cout<<"Address: ";
		    	cin>>Doctors_city;
		   		Doctors_city[0]=toupper(Doctors_city[0]);
		    	if(strlen(Doctors_city.c_str())>30||strlen(Doctors_city.c_str())<4)
				{
					gotoxy(column+45,row+9);
					cout<<"Invalid :(The max range for address is 20 and min range is 4 :)";
					valid=1;
					goto E;
				}
		}while(valid==0);//(!valid);
		/* ************************************************************************************************* */
		/* **************************************** SPECIALISATION  ***************************************** */
		/* ************************************************************************************************* */
		Specialisation=Specialization_add_doctor();
		
		/* ******************************************************************************** */
		/* ********************************* WRITING IN FILE ****************************** */  
		/* ******************************************************************************** */
		off.open("Doctor_info.txt",ios::app);
		off<<Id<<endl;
		off<<Doctor_First_Name<<endl;
		off<<Doctor_Last_Name<<endl;
		off<<Age<<endl;
		off<<Contact_no<<endl;
		off<<Doctors_city<<endl;
		off<<Specialisation<<endl;
		off.close();
		system("cls");
		Title();
		Title_add_doctor();
		gotoxy(column+45,row+13);
		cout<<"Data Entered Successfully. Thank you :)";
		gotoxy(210,52);
		getch();
	}
	system("cls");
	Title();
	char ch;
	column=85;
	row=26;
	gotoxy(column,row);
	cout<<"Do you want to add more record ::[Y/N]::";
	gotoxy(column,row+2);
	ch=getche();
	if(ch=='Y'||ch=='y')
	{
		getch();
		Add_doctor_information();
	}
	else
	{
		getch();
		Admin_menu();
	}
}
/* ******************************************************************************* */
/* ********************************** Update DOCTOR ****************************** */
/* ******************************************************************************* */
void Variable :: Update_doctor_information()
{
	system("cls");
	Title();
	int i;
	int d;
	ifstream in("Doctor_info.txt");
	d=count_array_in_files();
	string new_id[d];
	string new_First_Name[d];
	string new_Last_Name[d];
	string new_Age[d];
	string new_Contact_no[d];
	string new_city[d];
	string new_Specialisation[d];
	for(i=0;i<d;i++)
	{
		in>>new_id[i];
		in>>new_First_Name[i];
		in>>new_Last_Name[i];
		in>>new_Age[i];
		in>>new_Contact_no[i];
		in>>new_city[i];
		in>>new_Specialisation[i];
	}
	back:
		cin.ignore();
		system("cls");
		Title();
		Title_update_doctor();
		gotoxy(column+45,row+8);
		cout<<"Doctor's ID: :: ";
		getline(cin,Id);
		bool islogin=false;
		for(i=0;i<d;i++)
		{
			if(Id == new_id[i])
			{
				int ch;
				system("cls");
				Title();
				Title_update_doctor();
				gotoxy(column+45,row+8);
				cout<<"Found ID (:)";
				gotoxy(column+45,row+10);
				cout<<"You want to update Doctor Information ";
				gotoxy(column+45,row+12);
				cout<<"1. Yes";
				gotoxy(column+45,row+14);
				cout<<"2. No";
				gotoxy(column+45,row+16);
				cin>>ch;
				if(ch!=1)
				{
					Admin_menu();
				}
				else if(ch==1)
				{
					/* **************************************************************************** */
					/* ********************************** FIRST NAME ****************************** */
					/* **************************************************************************** */
					B:
						system("cls");
						Title();
						Title_update_doctor();
						gotoxy(column+45,row+8);
						cout<<"First Name: ";
						cin>>Doctor_First_Name;
						Doctor_First_Name[0]=toupper(Doctor_First_Name[0]);
						if(strlen(Doctor_First_Name.c_str())>20||strlen(Doctor_First_Name.c_str())<2)
 						{
 							gotoxy(column+45,row+10);
							cout<<"Invalid :( The max range for first name is 20 and min range is 2 :)";
							gotoxy(210,52);
							getch();
							goto B;
						}
						else
						{
							for (b=0;b<strlen(Doctor_First_Name.c_str());b++)
							{
								if (isalpha(Doctor_First_Name[b]))
								{
									valid=1;
								}
								else
								{
									valid=0;	
									break;
								}
							}
							if(valid==0)
							{
								gotoxy(column+45,row+10);
								cout<<"First name contain Invalid character :(  Enter again :)";
								gotoxy(210,52);
								getch();
								goto B;
							}
							new_First_Name[i]=Doctor_First_Name;
						}
					/* *************************************************************************** */
					/* ********************************** LAST NAME ****************************** */
					/* **************************************************************************** */
					C:
						system("cls");
						Title();
						Title_update_doctor();
						gotoxy(column+45,row+8);
						cout<<"Last Name: ";
    					cin>>Doctor_Last_Name;
    					Doctor_Last_Name[0]=toupper(Doctor_Last_Name[0]);
    					if(strlen(Doctor_Last_Name.c_str())>20||strlen(Doctor_Last_Name.c_str())<2)
						{
							gotoxy(column+45,row+10);
							cout<<"Invalid :( The max range for last name is 20 and min range is 2 :)";
							gotoxy(210,52);
							getch();
							goto C;
						}
						else
						{
							for (b=0;b<strlen(Doctor_Last_Name.c_str());b++)
							{
								if (isalpha(Doctor_Last_Name[b]))
								{
									valid=1;
								}
								else
								{
									valid=0;
									break;
								}
							}
							if(valid==0)
							{
								gotoxy(column+45,row+10);
								cout<<"Last name contain Invalid character :(  Enter again :)";
								gotoxy(210,52);
								getch();
								goto C;
							}
							new_Last_Name[i]=Doctor_Last_Name;
						}
					/* ********************************************************************* */
					/* ********************************** AGE ****************************** */	
					/* ********************************************************************* */
					system("cls");
					Title();
					Title_update_doctor();
					gotoxy(column+45,row+8);
    				cout<<"Age: ";
    				cin>>new_Age[i];  
					
					/* ***************************************************************************** */
					/* ********************************** CONTACT NO. ****************************** */
					/* ****************************************************************************** */
					do
					{
						D:
							system("cls");
							Title();
							Title_update_doctor();
							gotoxy(column+45,row+8);
							int valid=0;
						    cout<<"Contact no: ";
					    	cin>>Contact_no;
					    	if(strlen(Contact_no.c_str())>10||strlen(Contact_no.c_str())!=10)
							{
								gotoxy(column+45,row+10);
								cout<<"Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)";
								gotoxy(210,52);
								getch();
								goto D;
							}
							else
							{
								for (b=0;b<strlen(Contact_no.c_str());b++)
								{
									if (isdigit(Contact_no[b]))
									{
										valid=1;
									}
									else
									{
										valid=0;
										break;
									}
								}
								if(valid==0)
								{
									gotoxy(column+45,row+10);
									cout<<"Contact no. contain Invalid character :(  Enter again :)";
									gotoxy(210,52);
									getch();
									goto D;
								}
								else
								{
									new_Contact_no[i]=Contact_no;
								}
							}
					}while(valid==0);
					/* ******************************************************************************** */
					/* ********************************** Doctor's City' ****************************** */  
					/* ******************************************************************************** */
				    do
				    {
					    E:
					    	system("cls");
							Title();
							Title_update_doctor();
							gotoxy(column+45,row+8);
					    	cout<<"Address: ";
			    			cin>>Doctors_city;
					    	Doctors_city[0]=toupper(Doctors_city[0]);
					    	new_city[i]=Doctors_city;
					    	if(strlen(new_city[i].c_str())>30||strlen(new_city[i].c_str())<4)
							{
								gotoxy(column+45,row+10);
								cout<<"Invalid :( The max range for address is 20 and min range is 4 :)";
								gotoxy(210,52);
								getch();
								valid=1;
								goto E;
							}
					}while(valid==0);//(!valid);
					/* ************************************************************************************************* */
					/* **************************************** SPECIALISATION  ***************************************** */
					/* ************************************************************************************************* */
					new_Specialisation[i]=Specialization_update_doctor();	
					//file update
					ofstream out("temp.txt");
					for(i=0;i<d;i++)
					{
						out<<new_id[i]<<endl;
						out<<new_First_Name[i]<<endl;
						out<<new_Last_Name[i]<<endl;
						out<<new_Age[i]<<endl;
						out<<new_Contact_no[i]<<endl;
						out<<new_city[i]<<endl;
						out<<new_Specialisation[i]<<endl;
					}
					out.close();
					in.close();
					remove("Doctor_info.txt");
					rename("temp.txt","Doctor_info.txt");
					system("cls");
					Title();
					Title_update_doctor();
					gotoxy(column+45,row+11);
					cout<<")Updated Successfully(";
					gotoxy(210,52);
					getch();
					system("cls");
					Admin_menu();
				}
				islogin=true;  
				break;
			}
			else
			{
				islogin=false;
			}
		}	
	if(!islogin)
	{
		gotoxy(column+45,row+8);
		cout<<"Invalid ID (Press Enter :)";
		gotoxy(210,52);
		goto back;
	}
}

/* ******************************************************************************* */
/* ********************************** Delete DOCTOR ****************************** */
/* ******************************************************************************* */
void Variable :: Delete_doctor_information()
{
	system("cls");
	Title();
	int i;
	int d;
	back:
	d=count_array_in_files();
	string new_id[d];
	string new_First_Name[d];
	string new_Last_Name[d];
	string new_Age[d];
	string new_Contact_no[d];
	string new_city[d];
	string new_Specialisation[d];
	ifstream in("Doctor_info.txt");
	for(i=0;i<d;i++)
	{
		in>>new_id[i];
		in>>new_First_Name[i];
		in>>new_Last_Name[i];
		in>>new_Age[i];
		in>>new_Contact_no[i];
		in>>new_city[i];
		in>>new_Specialisation[i];
	}
		cin.ignore();
		system("cls");
		Title();
		Title_delete_doctor();
		gotoxy(column+45,row+8);
		cout<<"Doctor's ID: :: ";
		getline(cin,Id);
		bool islogin=false;
		for(i=0;i<d;i++)
		{
			if(Id == new_id[i])
			{
				int del=i;
				int ch;
				system("cls");
				Title();
				Title_delete_doctor();
				gotoxy(column+45,row+8);
				cout<<"Doctor's ID Found in the database :)";
				gotoxy(column+45,row+10);
				cout<<"You want to Delete Doctor Information ";
				gotoxy(column+45,row+12);
				cout<<"1. Yes";
				gotoxy(column+45,row+14);
				cout<<"2. NO";
				gotoxy(column+45,row+16);
				cin>>ch;
				if(ch!=1)
				{
					Doctor_info();
				}
				else if(ch==1)
				{
					ofstream out("temp.txt",ios::app);
					for(int i=0;i<d;i++)
					{
						if(i!=del)
						{
							
							out<<new_id[i]<<endl;
							out<<new_First_Name[i]<<endl;
							out<<new_Last_Name[i]<<endl;
							out<<new_Age[i]<<endl;
							out<<new_Contact_no[i]<<endl;
							out<<new_city[i]<<endl;
							out<<new_Specialisation[i]<<endl;
							//out.close();
						}
					}
					out.close();
					in.close();
					remove("Doctor_info.txt");
					rename("temp.txt","Doctor_info.txt");
					system("cls");
					Title();
					Title_delete_doctor();
					gotoxy(column+49,row+11);
					cout<<")Deleted Successfully(";
					gotoxy(210,52);
					getch();
					Admin_menu();
				}
				islogin=true;  
				if(islogin)
				{
					break;
				}
			}
			else
			{
				islogin=false;
			}
		}	
	if(!islogin)
	{
		system("cls");
		Title();
		Title_delete_doctor();
		gotoxy(column+45,row+8);
		cout<<"Invalid ID (Press Enter :)";
		gotoxy(210,52);
		//getch();
		//Delete_doctor_information();
		goto back;
	}
}
/* ************************************************************************************ */
/* ********************************* Hospital Information ***************************** */
/* ************************************************************************************ */
void Hospital_info()
{
	//----added-----
	system("cls");
	Variable v;
	v.Title();
	int ch;
	int r=21;
	int c=86;
	v.gotoxy(c,r);
	cout<<"1. Add Hospital Information"<<endl;
	v.gotoxy(c,r+2);
	cout<<"2. Update Hospital Information"<<endl;
	v.gotoxy(c,r+4);
	cout<<"3. Delete Hospital Information"<<endl;
	v.gotoxy(c,r+6);
	cout<<"4. View Hospital information"<<endl;
	v.gotoxy(c,r+8);
	cout<<"5. Back";
	v.gotoxy(c,r+10);
	//------till here-----
	cin>>ch;
	switch(ch)
	{
		case 1:
			v.Add_Hospital_information();
			break;
		case 2:
			v.Update_Hospital_information();
			break;
		case 3:
			v.Delete_Hospital_information();
			break;
		case 4:
			v.View_Hospital_information();
		case 5:
			v.Admin_menu();
		default:
			v.gotoxy(c,r+12);
			cout<<"Invalid (Press Enter to Return Back :) ";
			getch();
			Hospital_info();
			break;
	}
}
/* **************************************************************************** */
/* ********************************* ADD Hospital ***************************** */
/* **************************************************************************** */
void Variable :: Add_Hospital_information()
{
	system("cls");
	Title();
	Title_add_hospital();
	A:
	c=0;
	d=0;
	valid=0;
	ofstream off;
	off.open("Hospital_info.txt",ios::app);
	if(off)
	{
		/* **************************************************************************** */
		/* ********************************* Hospital ID ****************************** */
		/* **************************************************************************** */
		S:
			system("cls");
			Title();
			Title_add_hospital();
			gotoxy(column+45,row+7);
			cout<<"Hospital's ID: ";
			cin>>Id;
			if(strlen(Id.c_str())!=8)
			{
				gotoxy(column+45,row+9);
				cout<<"Invalid :(  The range of Hospital id is 8 :)";
				gotoxy(210,52);
				getch();
				goto S;
			}
			else
			{
				off.close();
				ifstream ins("Hospital_info.txt");
				ins>>Original_id;
				ins>>Original_Hospital_Full_Name;
				ins>>Contact_no;
				ins>>Hospital_city;
				ins>>Specialisations;
				while(!ins.eof())
				{
					if((Id==Original_id)==1)
					{
						c=c+1;
					}
					else
					{
						d=d+1;
					}
					ins>>Original_id;
					ins>>Original_Hospital_Full_Name;
					ins>>Contact_no;
					ins>>Hospital_city;
					ins>>Specialisations;
				}
				if(c==1)
				{
					system("cls");
					Title();
					Title_add_hospital();
					gotoxy(column+45,row+7);
					cout<<"Id Already Taken. Enter a new id ( Press Enter :)";
					gotoxy(210,52);
					getch();
					c=0;
					goto A;
				}
				else
				{
					ins.close();
				}
			}
		/* **************************************************************************** */
		/* **********************************  NAME ****************************** */
		/* **************************************************************************** */
		B:
			system("cls");
			Title();
			Title_add_hospital();
			gotoxy(column+45,row+7);
			cout<<"Hospital Name: ";
			cin>>Hospital_Full_Name;
			Hospital_Full_Name[0]=toupper(Hospital_Full_Name[0]);
			if(strlen(Hospital_Full_Name.c_str())>40||strlen(Hospital_Full_Name.c_str())<2)
 			{
 				gotoxy(column+45,row+9);
				cout<<"Invalid :( The max range for hospital name is 40 and min range is 2 :)";
				gotoxy(210,52);
				getch();
				goto B;
			}
			else
			{
				for (b=0;b<strlen(Hospital_Full_Name.c_str());b++)
				{
					if (isalpha(Hospital_Full_Name[b]))
					{
						valid=1;
					}
					else
					{
						valid=0;
						break;
					}
				}
				if(valid==0)
				{
					gotoxy(column+45,row+9);
					cout<<"First name contain Invalid character :(  Enter again :)";
					gotoxy(210,52);
					getch();
					goto B;
				}
			}  
    	/* ***************************************************************************** */
		/* ********************************** CONTACT NO. ****************************** */
		/* ****************************************************************************** */
		do
		{
			D:
				system("cls");
				Title();
				Title_add_hospital();
				gotoxy(column+45,row+7);
		    	cout<<"Contact no: ";
		    	cin>>Contact_no;
		    	if(strlen(Contact_no.c_str())>10||strlen(Contact_no.c_str())!=10)
				{
					gotoxy(column+45,row+9);
					cout<<"Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)";
					gotoxy(210,52);
					getch();
					goto D;
				}
				else
				{
					for (b=0;b<strlen(Contact_no.c_str());b++)
					{
						if (isdigit(Contact_no[b]))
						{
							valid=1;
						}
						else
						{
							valid=0;
							break;
						}
					}
					if(valid==0)
					{
						gotoxy(column+45,row+9);
						cout<<"Contact no. contain Invalid character :(  Enter again :)";
						gotoxy(210,52);
						getch();
						goto D;
					}
				}
		}while(valid==0);
		/* ******************************************************************************** */
		/* **********************************Hospital's City' ****************************** */  
		/* ******************************************************************************** */
	    do
	    {
		    E:
		    	system("cls");
				Title();
				Title_add_hospital();
				gotoxy(column+45,row+7);
		    	cout<<"Address: ";
		    	cin>>Hospital_city;
				Hospital_city[0]=toupper(Hospital_city[0]);
		   		if(strlen(Hospital_city.c_str())>30||strlen(Hospital_city.c_str())<4)
				{
					gotoxy(column+45,row+9);
					cout<<"Invalid :( The max range for address is 20 and min range is 4 :)";
					gotoxy(210,52);
					getch();
					valid=1;
					goto E;
				}
		}while(valid==0);//(!valid);
		/* ************************************************************************************************* */
		/* **************************************** SPECIALISATION  ***************************************** */
		/* ************************************************************************************************* */
		Specialisations=Specializations();
		
		/* ******************************************************************************** */
		/* ********************************* WRITING IN FILE ****************************** */  
		/* ******************************************************************************** */
		off.open("Hospital_info.txt",ios::app);
		off<<Id<<endl;
		off<<Hospital_Full_Name<<endl;
		off<<Contact_no<<endl;
		off<<Hospital_city<<endl;
		off<<Specialisations<<endl;
		off.close();
		system("cls");
		Title();
		Title_add_hospital();
		gotoxy(column+45,row+13);
		cout<<"Data Entered Successfully. Thank you :)";
		gotoxy(210,52);
		getch();
		Hospital_info();
	}
}
/* ******************************************************************************** */
/* ********************************** SPECIALISATION ****************************** */
/* ******************************************************************************** */
string Variable :: Specializations()
{
	system("cls");
	Title();
	row=18;
	column=82;
	int ch;
	gotoxy(column,row);
	cout<<"Hospital Specilization ( Choose :) :: ";
	gotoxy(column,row+2);
	cout<<"1. Children_Hospital";
	gotoxy(column,row+4);
	cout<<"2. Psychiatric_Hospital";
	gotoxy(column,row+6);
	cout<<"3. Rehabilitation";
	gotoxy(column,row+8);
	cout<<"4. Eye_and_Ear_Hospital";
	gotoxy(column,row+10);
	cout<<"5. Arthritis_Hospital";
	gotoxy(column,row+12);
	cout<<"6. Tuberclosis_Hospital";	
	gotoxy(column,row+14);
	cout<<"7. Cancer_Hospital";
	gotoxy(column,row+16);
	cin>>ch;
	switch(ch)
	{
		case 1:
			Specialisations="Children_Hospital";
			break;
		case 2:
			Specialisations="Psychiatric_Hospital";
			break;
		case 3:
			Specialisations="Rehabilitation";
			break;
		case 4:
			Specialisations="Eye_and_Ear_Hospital";
			break;
		case 5:
			Specialisations="Arthritis_Hospital";
			break;
		case 6:
			Specialisations="Tuberclosis_Hospital";
			break;
		case 7:
			Specialisations="Cancer_Hospital";
			break;
		default:
			gotoxy(column,row+18);
			cout<<"Invalid (Press Enter To Return :)";
			gotoxy(210,52);
			getch();
			Specializations();
			break;
	}
	return Specialisations;
}
/* ******************************************************************************* */
/* ********************************* UPDATE Hospital ***************************** */
/* ******************************************************************************* */
void Variable :: Update_Hospital_information()
{
	system("cls");
	Title();
	Title_update_hospital();
	int i;
	int d;
	ifstream in("Hospital_info.txt");
	d=count_array_in_Hospital_files();
	string new_id[d];
	string new_First_Name[d];
	string new_Contact_no[d];
	string new_city[d];
	string new_Specialisations[d];
	for(i=0;i<d;i++)
	{
		in>>new_id[i];
		in>>new_First_Name[i];
		in>>new_Contact_no[i];
		in>>new_city[i];
		in>>new_Specialisations[i];
	}
	in.close();
	back:
		cin.ignore();
		system("cls");
		Title();
		Title_update_hospital();
		gotoxy(column+45,row+7);
		cout<<"Hospital id :: ";
		getline(cin,Id);
		bool islogin=false;
		for(i=0;i<d;i++)
		{
			if(Id == new_id[i])
			{
				int ch;
				system("cls");
				Title();
				Title_update_hospital();
				gotoxy(column+45,row+7);
				cout<<"Hospital's ID Found in the database :)";
				gotoxy(column+45,row+9);
				cout<<"You want to update Hospital Information ";
				gotoxy(column+45,row+11);
				cout<<"1. Yes";
				gotoxy(column+45,row+13);
				cout<<"2. NO";
				gotoxy(column+45,row+15);
				cin>>ch;
				if(ch!=1)
				{
					Hospital_info();
				}
				else if(ch==1)
				{
					/* **************************************************************************** */
					/* ********************************** FIRST NAME ****************************** */
					/* **************************************************************************** */
					B:
						system("cls");
						Title();
						Title_update_hospital();
						gotoxy(column+45,row+7);
						cout<<"First Name: ";
						cin>>Hospital_Full_Name;
						Hospital_Full_Name[0]=toupper(Hospital_Full_Name[0]);
						if(strlen(Hospital_Full_Name.c_str())>20||strlen(Hospital_Full_Name.c_str())<2)
 						{
 							system("cls");
							Title();
							Title_update_hospital();
							gotoxy(column+45,row+7);
							cout<<"Invalid :( The max range for first name is 20 and min range is 2 :)";
							gotoxy(210,52);
							getch();
							goto B;
						}
						else
						{
							for (b=0;b<strlen(Hospital_Full_Name.c_str());b++)
							{
								if (isalpha(Hospital_Full_Name[b]))
								{
									valid=1;
								}
								else
								{
									valid=0;	
									break;
								}
							}
							if(valid==0)
							{
								system("cls");
								Title();
								Title_update_hospital();
								gotoxy(column+45,row+7);
								cout<<"First name contain Invalid character :(  Enter again :)";
								gotoxy(210,52);
								getch();
								goto B;
							}
							new_First_Name[i]=Hospital_Full_Name;
						}
					/* ***************************************************************************** */
					/* ********************************** CONTACT NO. ****************************** */
					/* ****************************************************************************** */
					do
					{
						D:
							system("cls");
							Title();
							Title_update_hospital();
							int valid=0;
							gotoxy(column+45,row+7);
					    	cout<<"Contact no: ";
					   		cin>>Contact_no;
					   		if(strlen(Contact_no.c_str())>10||strlen(Contact_no.c_str())!=10)
							{
								system("cls");
								Title();
								Title_update_hospital();
								gotoxy(column+45,row+7);
								cout<<"Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)";
								gotoxy(210,52);
								getch();
								goto D;
							}
							else
							{
								for (b=0;b<strlen(Contact_no.c_str());b++)
								{
									if (isdigit(Contact_no[b]))
									{
										valid=1;
									}
									else
									{
										valid=0;
										break;
									}
								}
								if(valid==0)
								{
									system("cls");
									Title();
									Title_update_hospital();
									gotoxy(column+45,row+7);
									cout<<"Contact no. contain Invalid character :(  Enter again :)";
									gotoxy(210,52);
									getch();
									goto D;
								}
								else
								{
									new_Contact_no[i]=Contact_no;
								}
							}
					}while(valid==0);
					/* ******************************************************************************** */
					/* ********************************** Hospital's City' ****************************** */  
					/* ******************************************************************************** */
				    do
				    {
					    E:
							system("cls");
							Title();
							Title_update_hospital();
							gotoxy(column+45,row+7);
						    cout<<"Address: ";
				    		cin>>Hospital_city;
						    Hospital_city[0]=toupper(Hospital_city[0]);
						    new_city[i]=Hospital_city;
						    if(strlen(new_city[i].c_str())>30||strlen(new_city[i].c_str())<4)
							{
								system("cls");
								Title();
								Title_update_hospital();
								gotoxy(column+45,row+7);
								cout<<"Invalid :(  The max range for address is 20 and min range is 4 :)";
								gotoxy(210,52);
								getch();
								valid=1;
								goto E;
							}
					}while(valid==0);
					/* ************************************************************************************************* */
					/* **************************************** SPECIALISATION  ***************************************** */
					/* ************************************************************************************************* */
					new_Specialisations[i]=Specializations();	
					//file update
					ofstream out("temp.txt");
					for(i=0;i<d;i++)
					{
						out<<new_id[i]<<endl;
						out<<new_First_Name[i]<<endl;
						out<<new_Contact_no[i]<<endl;
						out<<new_city[i]<<endl;
						out<<new_Specialisations[i]<<endl;
					}
					out.close();
					in.close();
					remove("Hospital_info.txt");
					rename("temp.txt","Hospital_info.txt");
					system("cls");
					Title();
					Title_update_hospital();
					gotoxy(column+45,row+13);
					cout<<")Updated Successfully(";
					gotoxy(210,52);
					getch();
					system("cls");
					Hospital_info();
				}
				islogin=true;  
				break;
			}
			else
			{
				islogin=false;
			}
		}	
	if(!islogin)
	{
		system("cls");
		Title();
		Title_update_hospital();
		gotoxy(column+45,row+7);
		cout<<"Invalid ID (Press Enter :)";
		gotoxy(210,52);
		//getch();
		goto back;
	}
}
/* ******************************************************************************* */
/* ********************************** Delete Hospital ****************************** */
/* ******************************************************************************* */
void Variable :: Delete_Hospital_information()
{
	system("cls");
	Title();
	Title_delete_hospital();
	int i;
	int d;
	back:
	d=count_array_in_Hospital_files();
	string new_id[d];
	string new_First_Name[d];
	string new_Contact_no[d];
	string new_city[d];
	string new_Specialisations[d];
	ifstream in("Hospital_info.txt");
	for(i=0;i<d;i++)
	{
		in>>new_id[i];
		in>>new_First_Name[i];
		in>>new_Contact_no[i];
		in>>new_city[i];
		in>>new_Specialisations[i];
	}
	
		cin.ignore();
		system("cls");
		Title();
		Title_delete_hospital();
		gotoxy(column+45,row+7);
		cout<<"Hospital id :: ";
		getline(cin,Id);
		bool islogin=false;
		for(i=0;i<d;i++)
		{
			if(Id == new_id[i])
			{
				int del=i;
				int ch;
				system("cls");
				Title();
				Title_delete_hospital();
				gotoxy(column+45,row+7);
				cout<<"Hospital's ID Found in the database :)";
				gotoxy(column+45,row+9);
				cout<<"You want to Delete Hospital Information ";
				gotoxy(column+45,row+11);
				cout<<"1. Yes";
				gotoxy(column+45,row+13);
				cout<<"2. NO";
				gotoxy(column+45,row+15);
				cin>>ch;
				if(ch!=1)
				{
					system("cls");
					Title();
					Title_delete_hospital();
					gotoxy(column+45,row+7);
					Hospital_info();
				}
				else if(ch==1)
				{
					for(int i=0;i<d;i++)
					{
						if(i!=del)
						{
							ofstream out("temp.txt",ios::app);
							out<<new_id[i]<<endl;
							out<<new_First_Name[i]<<endl;
							out<<new_Contact_no[i]<<endl;
							out<<new_city[i]<<endl;
							out<<new_Specialisations[i]<<endl;
							out.close();
						}
					}
					in.close();
					remove("Hospital_info.txt");
					rename("temp.txt","Hospital_info.txt");
					system("cls");
					Title();
					Title_delete_hospital();
					gotoxy(column+45,row+13);
					cout<<")Deleted Successfully(";
					gotoxy(210,52);
					getch();
					system("cls");
					Hospital_info();
				}
				islogin=true;  
				if(islogin)
				{
					break;
				}
			}
			else
			{
				islogin=false;
			}
		}	
	if(!islogin)
	{
		system("cls");
		Title();
		Title_delete_hospital();
		gotoxy(column+45,row+7);
		cout<<"Invalid ID (Press Enter :)";
		gotoxy(210,52);
		//getch();
		goto back;
	}
}
/* ******************************************************************************* */
/* ********************************** view Hospital ****************************** */
/* ******************************************************************************* */
void Variable :: View_Hospital_information()
{
	system("cls");
	Title();
	row=25;
	column=88;
	A:
	c=0;
	d=0;
	valid=0;
	int e;
	ofstream off;
	off.open("Hospital_info.txt",ios::app);
	off.close();
	if(off)
	{
		off.close();
		e=count_array_in_hospital_files();
		//getch();
		string new_Original_id[e];
		string new_Original_Hospital_Ful_Name[e];
		string new_Contact_no[e];
		string new_Hospital_city[e];
		string new_Specialisations[e];
		int charges;
		charges=1500;
		ifstream ins("Hospital_info.txt");
		for(i=0;i<e;i++)
		{
			ins>>new_Original_id[i];
			ins>>new_Original_Hospital_Ful_Name[i];
			ins>>new_Contact_no[i];
			ins>>new_Hospital_city[i];
			ins>>new_Specialisations[i];
		}
		back:
			//cin.ignore();
			system("cls");
			Title();
			Title_view_hospital_information();
			column=55;
			gotoxy(column+5,row+6);
			cout<<"|";
			gotoxy(column+8,row+6);
			cout<<"Id";
			gotoxy(column+14,row+6);
			cout<<"|";
			gotoxy(column+17,row+6);
			cout<<"Hospital Name";
			gotoxy(column+30,row+6);
			cout<<"|";
			gotoxy(column+34,row+6);
			cout<<"Contact No.";
			gotoxy(column+45,row+6);
			cout<<"|";
			gotoxy(column+50,row+6);
			cout<<"Address";
			gotoxy(column+58,row+6);
			cout<<"|";
			gotoxy(column+62,row+6);
			cout<<"Specialisations";
			gotoxy(column+82,row+6);
			cout<<"|";
			gotoxy(column+85,row+6);
			cout<<"CPB"; 
			gotoxy(column+92,row+6);
			cout<<"|";
			gotoxy(column-45,row+8);
			cout<<" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
			for(i=0;i<e;i++)
			{
				gotoxy(column+5,row+10);
				cout<<"|";
				gotoxy(column+6,row+10);
				cout<<new_Original_id[i];
				gotoxy(column+14,row+10);
				cout<<"|";
				gotoxy(column+16,row+10);
				cout<<new_Original_Hospital_Ful_Name[i];
				gotoxy(column+30,row+10);
				cout<<"|";
				gotoxy(column+32,row+10);
				cout<<new_Contact_no[i];
				gotoxy(column+45,row+10);
				cout<<"|";
				gotoxy(column+47,row+10);
				cout<<new_Hospital_city[i];
				gotoxy(column+58,row+10);
				cout<<"|";
				gotoxy(column+61,row+10);
				cout<<new_Specialisations[i];
				gotoxy(column+82,row+10);
				cout<<"|";
				gotoxy(column+83,row+10);
				cout<<"Rs.";
				gotoxy(column+87,row+10);
				cout<<charges;
				gotoxy(column+92,row+10);
				cout<<"|";
				gotoxy(column+5,row+10);
				charges=charges+100;
				row=row+2;
			}
			ins.close();
			gotoxy(210,52);
			getch();
			Hospital_info();
	}
	else
	{
		system("cls");
		Title();
		Title_add_patient_report();
		gotoxy(column+45,row+6);
		cout<<"There is no data in Hospital_info file";
		gotoxy(column+46,row+8);
		cout<<"Press Enter to return back ";
		getch();
		system("cls");
		Hospital_info();
	}
}
/* ************************************************************************************************ */
/* ********************************** COUNT ARRAY IN HOSPITAL FILES ****************************** */
/* ************************************************************************************************ */
int Variable ::  count_array_in_Hospital_files()
{
	int c=0,d;
	string line;
	ifstream in("Hospital_info.txt");
	while(getline(in,line))
	{
		c=c+1;
	}
	d=c/5;
	return d;
}
/* **************************************************************************************************** */
/* ************************************************* STAFF ******************************************** */
/* **************************************************************************************************** */

void Variable:: Staff()
{
	system("cls");
	Title();
	row=25;
	column=88;
	int ch;
	gotoxy(column,row);
	cout<<"1. Existing Account";
	gotoxy(column,row+2);
	cout<<"2. New Account";
	gotoxy(column,row+4);
	cout<<"3. Back";
	gotoxy(column,row+6);
	cin>>ch;
	switch(ch)
	{
		case 1:
			Existing_Acc();
			break;
		case 2:
			New_Acc();
			break;
		case 3:
			AccessScreen();
			break;
		default:
			gotoxy(column,row+8);
			cout<<"Invalid Input (Press Enter :)";
			gotoxy(210,52);
			getch();
			Staff();
			break;
	}
}
/* ***************************************************************************** */
/* ********************************** NEW ACCOUNT ****************************** */
/* ***************************************************************************** */
void Variable :: New_Acc()
{
	system("cls");
	Title();
	row=24;
	column=86;
	int e=0;
	Original_username="Hospital";
	Original_password="hospital123";
	do
	{
		system("cls");
		Title();
		row=20;
		column=85;
		gotoxy(column,row+3);
		cout<<"Admin Username :: ";
		cin>>Username;
		Username=convert(Username);//Username[0]=toupper(Username[0]);
		gotoxy(column,row+6);
		cout<<"Admin Password :: ";
		Password=Password_chunk();
		Original_username=convert(Original_username);
		if((Username==Original_username) && (Password==Original_password))   //.c_str convetrs pointer to an array. i.e strings are in pointers format in c++ and it converts it into array format or C style format
		{
			gotoxy(column,row+9);
			cout<<"Password matched... (Press Any Key :)";
			gotoxy(210,52);
			getch();
			system("cls");
			New_Acc_Creation();
			break;
		}
		else
		{
			gotoxy(column,row+9);
			cout<<"Password Incorrect (Try Again: ) \n";
			gotoxy(column,row+10);
			getch();
			system("cls");
			Title();
			e++;
		}
	}while(e<=2);
	if(e>2)
	{
		row=20;
		column=76;
		gotoxy(column,row+4);
		cout<<"You have exceed the limit (System Locked: :)";
		getch();
		AccessScreen();
	}
}
/* ********************************************************************************** */
/* ********************************** EXISTING ACCOUNT ****************************** */
/* ********************************************************************************** */
void Existing_Acc()
{
	Variable v;
	v.Existing_Acc_Creation();
}
/* *************************************************************************************** */
/* ********************************** NEW ACCOUNT CREATION ****************************** */
/* ************************************************************************************** */
void Variable :: New_Acc_Creation()
{
	system("cls");
	Title();
	row=25;
	column=88;
	c=0;
	d=0;
	string Usernames;
	ofstream out("Staff_username.txt",ios::app);
	gotoxy(column,row);
	cout<<"New Username :: ";
	cin>>Usernames;
	Username=convert(Usernames);
	gotoxy(column,row+2);
	cout<<"New Password :: ";
	Password=Password_chunk();
	if(out)			//checks there is file or not
	{
		out.close();
		ifstream ifs("Staff_username.txt");
		ifs>>Original_username;
		Original_username=convert(Original_username);
		ifs>>Original_password;
		while(!ifs.eof())
		{
			if((Username==Original_username)==1)
			{
				c=c+1;
			}
			else
			{
				d=d+1;
			}
			ifs>>Original_username;
			ifs>>Original_password;
		}
		if(c==1)
		{
			gotoxy(column,row+4);
			cout<<"Username Already Taken. (Press Enter ):)";
			gotoxy(210,52);
			getch();
			New_Acc_Creation();
		}
		else
		{
			ifs.close();
			out.open("Staff_username.txt",ios::app);
			out<<Username<<endl;
			out<<Password<<endl;
			out.close();
			gotoxy(column,row+4);
			cout<<"Account Created Successfully. Thank you :)";
			gotoxy(210,52);
			getch();
			system("cls");
			Staff_menu();
		}
	}
}
/* ******************************************************************************************* */
/* ********************************** EXISTING ACCOUNT CREATION ****************************** */
/* ******************************************************************************************* */
void Variable :: Existing_Acc_Creation()
{
	system("cls");
	Title();
	row=25;
	column=88;
	c=0;
	d=0;
	e=0;
	a=0;
	char ch;
	ifstream ifs("Staff_username.txt");
	if(ifs)
	{
		
		gotoxy(column,row);
		cout<<"Username :: ";
		cin>>Username;
		Username=convert(Username);
		gotoxy(column,row+2);
		cout<<"Password :: ";
		Password=Password_chunk();
		ifs>>Original_username;
		Original_username=convert(Original_username);
		ifs>>Original_password;
		while(!ifs.eof())
		{
			if((Username==Original_username)==1) //&& (password==original_password)==1)
			{
				a=a+1;
				if((Password==Original_password)==1)
				{
					gotoxy(column,row+4);
					cout<<"Password matched (Access Granted :)";
					gotoxy(250,52);
					getch();
					Staff_menu();
					c=c+1;
					break;
				}
				else
				{
					d=d+1;
				}
			}
			else
			{
				e=e+1;
			}
			ifs>>Original_username;
			ifs>>Original_password;
		}
		if(e>=0 && a==0)
		{
			gotoxy(column,row+4);
			cout<<"Account not found :)";
			gotoxy(210,52);
			getch();
			Staff();
		}
		else
		{
			gotoxy(column,row+4);
			cout<<"Accoun password isn't correct";
			gotoxy(210,52);
			getch();
			Existing_Acc_Creation();
		}
		ifs.close();
	}
	else
	{
		ifs.close();
		gotoxy(column,row+4);
		cout<<"No File IN The System :)";
		gotoxy(210,52);
		getch();
		Staff();
	}
}
/* ****************************************************************************************** */
/* ****************************************************************************************** */
/* ************************************* STAFF MENU ***************************************** */
/* ****************************************************************************************** */
/* ****************************************************************************************** */

void Variable:: Staff_menu()
{
	system("cls");
	Title();
	row=25;
	column=88;
	int ch;
	gotoxy(column,row);
	cout<<"1. Staff Data";
	gotoxy(column,row+2);
	cout<<"2. Patient Data";
	gotoxy(column,row+4);
	cout<<"3. Back";
	gotoxy(column,row+6);
	cout<<"4. Exit";
	gotoxy(column,row+8);
	cin>>ch;
	switch(ch)
	{
		case 1:
			Staff_info();
			break;
		case 2:
			Patient_info();
			break;
		case 3:
			Staff();
			break;
		case 4:
			ex_it();
			break;
		default:
			gotoxy(column,row+12);
			cout<<"Invalid (Press Enter To Return :)";
			gotoxy(210,52);
			getch();
			Staff_menu();
			break;
	}
}
/* ************************************************************************************ */
/* ********************************** STAFFF Information ****************************** */
/* ************************************************************************************ */
void Staff_info()
{
	system("cls");
	Variable v;
	v.Title();
	int ch;
	int r=21;
	int c=86;
	v.gotoxy(c,r);
	cout<<"1. Add Staff Information";
	v.gotoxy(c,r+2);
	cout<<"2. Update Staff Information";
	v.gotoxy(c,r+4);
	cout<<"3. Delete Staff Information";
	v.gotoxy(c,r+6);
	cout<<"4. Back";
	v.gotoxy(c,r+8);
	cout<<"5. Exit";
	v.gotoxy(c,r+10);
	cin>>ch;
	switch(ch)
	{
		case 1:
			v.Add_staff_information();
			break;
		case 2:
			v.Update_staff_information();
			break;
		case 3:
			v.Delete_staff_information();
			break;
		case 4:
			v.Staff_menu();
			break;
		case 5:
			v.ex_it();
			break;
		default:
			v.gotoxy(c,r+12);
			cout<<"Invalid (Press Enter to Return Back :) ";
			v.gotoxy(210,52);
			getch();
			Staff_info();
			break;
	}
}
/* **************************************************************************** */
/* ********************************** ADD STAFF ****************************** */
/* **************************************************************************** */
void Variable :: Add_staff_information()
{
	system("cls");
	Title();
	A:
		Title_add_staff();
	c=0;
	d=0;
	valid=0;
	ofstream off;
	off.open("Staff_info.txt",ios::app);
	if(off)
	{
		/* **************************************************************************** */
		/* ********************************** DOCTOR ID ******************************* */
		/* **************************************************************************** */
		S:
			system("cls");
			Title();
			Title_add_staff();
			gotoxy(column+45,row+6);
			cout<<"Staff's ID: ";
			cin>>Id;
			if(strlen(Id.c_str())!=8)
			{
				gotoxy(column+45,row+8);
				cout<<"Invalid :(The range of Staff id is 8 :)";
				gotoxy(210,52);
				getch();
				goto S;
			}
			else
			{
				off.close();
				ifstream ins("Staff_info.txt");
				ins>>Original_id;
				ins>>Original_staff_First_Name;
				ins>>Original_staff_Last_Name;	
				ins>>Age;
				ins>>Contact_no;
				ins>>Staff_city;
				while(!ins.eof())
				{
					if((Id==Original_id)==1)
					{
						c=c+1;
					}
					else
					{
						d=d+1;	
					}	
					ins>>Original_id;
					ins>>Original_staff_First_Name;
					ins>>Original_staff_Last_Name;	
					ins>>Age;
					ins>>Contact_no;
					ins>>Staff_city;
				}
				if(c==1)
				{
					gotoxy(column+45,row+8);
					cout<<"Id Already Taken.( Press Enter ):)";
					gotoxy(210,52);
					getch();
					system("cls");
					Title();
					Title_add_staff();
					c=0;
					goto A;
				}
				else
				{
					ins.close();
				}
			}
		/* **************************************************************************** */
		/* ********************************** FIRST NAME ****************************** */
		/* **************************************************************************** */
		B:
			system("cls");
			Title();
			Title_add_staff();
			gotoxy(column+45,row+6);
			cout<<"First Name: ";
			cin>>Staff_First_Name;
			Staff_First_Name[0]=toupper(Staff_First_Name[0]);
			if(strlen(Staff_First_Name.c_str())>20||strlen(Staff_First_Name.c_str())<2)
 			{
 				gotoxy(column+45,row+8);
				cout<<"Invalid :(The max range for first name is 20 and min range is 2 :)";
				gotoxy(210,52);
				getch();
				goto B;
			}
			else
			{
				for (b=0;b<strlen(Staff_First_Name.c_str());b++)
				{
					if (isalpha(Staff_First_Name[b]))
					{
						valid=1;
					}
					else
					{
						valid=0;
						break;
					}
				}
				if(valid==0)
				{
					gotoxy(column+45,row+8);
					cout<<"First name contain Invalid character :(  Enter again :)";
					gotoxy(210,52);
					getch();
					goto B;
				}
			}
		/* *************************************************************************** */
		/* ********************************** LAST NAME ****************************** */
		/* **************************************************************************** */
		C:
			system("cls");
			Title();
			Title_add_staff();
			gotoxy(column+45,row+6);
			cout<<"Last Name: ";
    		cin>>Staff_Last_Name;
    		Staff_Last_Name[0]=toupper(Staff_Last_Name[0]);
    		if(strlen(Staff_Last_Name.c_str())>20||strlen(Staff_Last_Name.c_str())<2)
			{
				gotoxy(column+45,row+8);
				cout<<"Invalid :( The max range for last name is 20 and min range is 2 :)";
				gotoxy(210,52);
				getch();
				goto C;
			}
			else
			{
				for (b=0;b<strlen(Staff_Last_Name.c_str());b++)
				{
					if (isalpha(Staff_Last_Name[b]))
					{
						valid=1;
					}
					else
					{
						valid=0;
						break;
					}
				}
				if(valid==0)
				{
					gotoxy(column+45,row+8);
					cout<<"Last name contain Invalid character :(  Enter again :)";
					gotoxy(210,52);
					getch();
					system("cls");
					Title();
					goto C;
				}
			}
		/* ********************************************************************* */
		/* ********************************** AGE ****************************** */	
		/* ********************************************************************* */
		system("cls");
		Title();
		Title_add_staff();
		gotoxy(column+45,row+6);
    	cout<<"Age:";
    	cin>>Age;   
    	/* ***************************************************************************** */
		/* ********************************** CONTACT NO. ****************************** */
		/* ****************************************************************************** */
		do
		{
			D:
				system("cls");
				Title();
				Title_add_staff();
				gotoxy(column+45,row+6);
		    	cout<<"Contact no: ";
				cin>>Contact_no;
				if(strlen(Contact_no.c_str())>10||strlen(Contact_no.c_str())!=10)
				{
					gotoxy(column+45,row+8);
					cout<<"Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)";
					gotoxy(210,52);
					getch();
					goto D;
				}
				else
				{
					for (b=0;b<strlen(Contact_no.c_str());b++)
					{
						if (isdigit(Contact_no[b]))
						{
							valid=1;
						}
						else
						{
							valid=0;
							break;
						}
					}
					if(valid==0)
					{
						gotoxy(column+45,row+8);
						cout<<"Contact no. contain Invalid character :(  Enter again :)";
						gotoxy(210,52);
						getch();
						goto D;
					}
				}
		}while(valid==0);
		/* ******************************************************************************** */
		/* ********************************** Doctor's City' ****************************** */  
		/* ******************************************************************************** */
	    do
	    {
		    E:
		    	system("cls");
				Title();
				Title_add_staff();
				gotoxy(column+45,row+6);
		    	cout<<"Address: ";
		    	cin>>Staff_city;
		   		Staff_city[0]=toupper(Staff_city[0]);
		    	if(strlen(Staff_city.c_str())>30||strlen(Staff_city.c_str())<4)
				{
					gotoxy(column+45,row+8);
					cout<<"Invalid :(The max range for address is 20 and min range is 4 :)";
					gotoxy(210,52);
					valid=1;
					getch();
					goto E;
				}
		}while(valid==0);
		
		/* ******************************************************************************** */
		/* ********************************* WRITING IN FILE ****************************** */  
		/* ******************************************************************************** */
		off.open("Staff_info.txt",ios::app);
		off<<Id<<endl;
		off<<Staff_First_Name<<endl;
		off<<Staff_Last_Name<<endl;
		off<<Age<<endl;
		off<<Contact_no<<endl;
		off<<Staff_city<<endl;
		off.close();
		//getch();
		system("cls");
		Title();
		gotoxy(column+85,row+22);
		cout<<"Data Entered Successfully. Thank you :)";
		gotoxy(210,52);
		getch();
	}
	system("cls");
	Title();
	Title_add_staff();
	gotoxy(column+45,row+6);
	cout<<"Do you want to add more record ::[Y/N]::";
	gotoxy(column+45,row+8);
	ch=getche();
	if(ch=='Y'||ch=='y')
	{
		getch();
		Add_staff_information();
	}
	else
	{
		getch();
		Staff_menu();
	}
	
}
/* ******************************************************************************* */
/* ********************************** Update Staff ****************************** */
/* ******************************************************************************* */
void Variable :: Update_staff_information()
{
	system("cls");
	Title();
	int i;
	int d;
	ifstream in("Staff_info.txt");
	d=count_array_in_staff_files();
	string new_id[d];
	string new_First_Name[d];
	string new_Last_Name[d];
	string new_Age[d];
	string new_Contact_no[d];
	string new_city[d];
	for(i=0;i<d;i++)
	{
		in>>new_id[i];
		in>>new_First_Name[i];
		in>>new_Last_Name[i];
		in>>new_Age[i];
		in>>new_Contact_no[i];
		in>>new_city[i];
	}
	back:
		cin.ignore();
		system("cls");
		Title();
		Title_update_staff();
		gotoxy(column+45,row+6);
		cout<<"Staff's ID: :: ";
		getline(cin,Id);
		bool islogin=false;
		for(i=0;i<d;i++)
		{
			if(Id == new_id[i])
			{
				int ch;
				system("cls");
				Title();
				Title_update_staff();
				gotoxy(column+45,row+6);
				cout<<"Found ID (:)";
				gotoxy(column+45,row+8);
				cout<<"You want to update Staff Information ";
				gotoxy(column+45,row+10);
				cout<<"1. Yes";
				gotoxy(column+45,row+12);
				cout<<"2. No";
				gotoxy(column+45,row+14);
				cin>>ch;
				if(ch!=1)
				{
					Staff_menu();
				}
				else if(ch==1)
				{
					/* **************************************************************************** */
					/* ********************************** FIRST NAME ****************************** */
					/* **************************************************************************** */
					B:
						system("cls");
						Title();
						Title_update_staff();
						gotoxy(column+45,row+6);
						cout<<"First Name: ";
						cin>>Staff_First_Name;
						Doctor_First_Name[0]=toupper(Doctor_First_Name[0]);
						if(strlen(Staff_First_Name.c_str())>20||strlen(Staff_First_Name.c_str())<2)
 						{
 							gotoxy(column+45,row+8);
							cout<<"Invalid :( The max range for first name is 20 and min range is 2 :)";
							gotoxy(210,52);
							getch();
							goto B;
						}
						else
						{
							for (b=0;b<strlen(Staff_First_Name.c_str());b++)
							{
								if (isalpha(Staff_First_Name[b]))
								{
									valid=1;
								}
								else
								{
									valid=0;	
									break;
								}
							}
							if(valid==0)
							{
								gotoxy(column+45,row+8);
								cout<<"First name contain Invalid character :(  Enter again :)";
								gotoxy(210,52);
								getch();
								goto B;
							}
							new_First_Name[i]=Staff_First_Name;
						}
					/* *************************************************************************** */
					/* ********************************** LAST NAME ****************************** */
					/* **************************************************************************** */
					C:
						system("cls");
						Title();
						Title_update_staff();
						gotoxy(column+45,row+6);
						cout<<"Last Name: ";
    					cin>>Staff_Last_Name;
    					Staff_Last_Name[0]=toupper(Staff_Last_Name[0]);
    					if(strlen(Staff_Last_Name.c_str())>20||strlen(Staff_Last_Name.c_str())<2)
						{
							gotoxy(column+45,row+8);
							cout<<"Invalid :( The max range for last name is 20 and min range is 2 :)";
							gotoxy(210,52);
							getch();
							goto C;
						}
						else
						{
							for (b=0;b<strlen(Staff_Last_Name.c_str());b++)
							{
								if (isalpha(Staff_Last_Name[b]))
								{
									valid=1;
								}
								else
								{
									valid=0;
									break;
								}
							}
							if(valid==0)
							{
								gotoxy(column+45,row+8);
								cout<<"Last name contain Invalid character :(  Enter again :)";
								gotoxy(210,52);
								getch();
								goto C;
							}
							new_Last_Name[i]=Staff_Last_Name;
						}
					/* ********************************************************************* */
					/* ********************************** AGE ****************************** */	
					/* ********************************************************************* */
					system("cls");
					Title();
					Title_update_staff();
					gotoxy(column+45,row+6);
    				cout<<"Age:";
    				cin>>new_Age[i];  
					
					/* ***************************************************************************** */
					/* ********************************** CONTACT NO. ****************************** */
					/* ****************************************************************************** */
					do
					{
						D:
							system("cls");
							Title();
							Title_update_staff();
							gotoxy(column+45,row+6);
							int valid=0;
					    	cout<<"Contact no: ";
					    	cin>>Contact_no;
					   		if(strlen(Contact_no.c_str())>10||strlen(Contact_no.c_str())!=10)
							{
								gotoxy(column+45,row+8);
								cout<<"Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)";
								gotoxy(210,45);
								getch();
								goto D;
							}	
							else
							{
								for (b=0;b<strlen(Contact_no.c_str());b++)
								{
									if (isdigit(Contact_no[b]))
									{
										valid=1;
									}
									else
									{
										valid=0;
										break;
									}
								}
								if(valid==0)
								{
									gotoxy(column+45,row+8);
									cout<<"Contact no. contain Invalid character :(  Enter again :)";
									gotoxy(210,52);
									getch();
									goto D;
								}
								else
								{
									new_Contact_no[i]=Contact_no;
								}
							}
					}while(valid==0);
					/* ******************************************************************************** */
					/* ********************************** Doctor's City' ****************************** */  
					/* ******************************************************************************** */
				    do
				    {
					    E:
					    	system("cls");
							Title();
							Title_update_staff();
							gotoxy(column+45,row+6);
						    cout<<"Address: ";
			    			cin>>Staff_city;
							Staff_city[0]=toupper(Staff_city[0]);
						    new_city[i]=Staff_city;
						    if(strlen(new_city[i].c_str())>30||strlen(new_city[i].c_str())<4)
							{
								gotoxy(column+45,row+8);
								cout<<"Invalid :( The max range for address is 20 and min range is 4 :)";
								gotoxy(210,52);
								getch();
								valid=1;
								goto E;
							}
					}while(valid==0);	
					//file update
					ofstream out("temp.txt");
					for(i=0;i<d;i++)
					{
						out<<new_id[i]<<endl;
						out<<new_First_Name[i]<<endl;
						out<<new_Last_Name[i]<<endl;
						out<<new_Age[i]<<endl;
						out<<new_Contact_no[i]<<endl;
						out<<new_city[i]<<endl;
					}
					out.close();
					in.close();
					remove("Staff_info.txt");
					rename("temp.txt","Staff_info.txt");
					system("cls");
					Title();
					Title_update_staff();
					gotoxy(column+45,row+13);
					cout<<")Updated Successfully(";
					getch();
					system("cls");
					Staff_menu();
				}
				islogin=true;  
				break;
			}
			else
			{
				islogin=false;
			}
		}	
	if(!islogin)
	{
		system("cls");
		Title();
		Title_update_staff();
		gotoxy(column+45,row+6);
		cout<<"Invalid ID (Press Enter :)";
		gotoxy(210,52);
		goto back;
	}
}
/* ******************************************************************************* */
/* ********************************** Delete Staff ****************************** */
/* ******************************************************************************* */
void Variable :: Delete_staff_information()
{
	system("cls");
	Title();
	int i;
	int d;
	back:
	d=count_array_in_staff_files();
	string new_id[d];
	string new_First_Name[d];
	string new_Last_Name[d];
	string new_Age[d];
	string new_Contact_no[d];
	string new_city[d];
	ifstream in("Staff_info.txt");
	for(i=0;i<d;i++)
	{
		in>>new_id[i];
		in>>new_First_Name[i];
		in>>new_Last_Name[i];
		in>>new_Age[i];
		in>>new_Contact_no[i];
		in>>new_city[i];
	}
		cin.ignore();
		system("cls");
		Title();
		Title_delete_staff();
		gotoxy(column+45,row+6);
		cout<<"Staff ID: :: ";
		getline(cin,Id);
		bool islogin=false;
		for(i=0;i<d;i++)
		{
			if(Id == new_id[i])
			{
				int del=i;
				int ch;
				system("cls");
				Title();
				Title_delete_staff();
				gotoxy(column+45,row+6);
				cout<<"Staff's ID Found in the database :)";
				gotoxy(column+45,row+8);
				cout<<"You want to Delete Staff Information ";
				gotoxy(column+45,row+10);
				cout<<"1. Yes";
				gotoxy(column+45,row+12);
				cout<<"2. NO";
				gotoxy(column+45,row+14);
				cin>>ch;
				if(ch!=1)
				{
					Staff_info();
				}
				else if(ch==1)
				{
					ofstream out("temp.txt",ios::app);
					for(int i=0;i<d;i++)
					{
						if(i!=del)
						{
							out<<new_id[i]<<endl;
							out<<new_First_Name[i]<<endl;
							out<<new_Last_Name[i]<<endl;
							out<<new_Age[i]<<endl;
							out<<new_Contact_no[i]<<endl;
							out<<new_city[i]<<endl;
						}
					}
					out.close();
					in.close();
					remove("Staff_info.txt");
					rename("temp.txt","Staff_info.txt");
					system("cls");
					Title();
					Title_delete_staff();
					gotoxy(column+45,row+13);
					cout<<")Deleted Successfully(";
					gotoxy(210,52);
					getch();
					system("cls");
					Staff_menu();
				}
				islogin=true;  
				if(islogin)
				{
					break;
				}
			}
			else
			{
				islogin=false;
			}
		}	
	if(!islogin)
	{
		system("cls");
		Title();
		Title_delete_staff();
		gotoxy(column+45,row+6);
		cout<<"Invalid ID (Press Enter :)";
		gotoxy(210,52);
		goto back;
	}
}
/* ************************************************************************************ */
/* ********************************** PATIENT Information ******************************* */
/* ************************************************************************************ */
void  Patient_info()
{
	system("cls");
	int ch;
	Variable v;
	v.Title();
	v.row=25;
	v.column=88;
	v.gotoxy(v.column,v.row);
	cout<<"1. Patient Record";
	v.gotoxy(v.column,v.row+2);
	cout<<"2. Diagnosis Report";
	v.gotoxy(v.column,v.row+4);
	cout<<"3. Patient Information";
	v.gotoxy(v.column,v.row+6);
	cout<<"4. Back";
	v.gotoxy(v.column,v.row+8);
	cout<<"5. Exit";
	v.gotoxy(v.column,v.row+10);
	cin>>ch;
	switch(ch)
	{
		case 1:
			v.Patient_record();
			break;
		case 2:
			v.Diagnosis_report();
			break;
		case 3:
			v.Patient_information();
			break;
		case 4:
			v.Staff_menu();
			break;
		case 5:
			v.ex_it();
			break;
		default:
			v.gotoxy(v.column,v.row+12);
			cout<<"Invalid (Press Enter to Return Back :) ";
			v.gotoxy(210,52);
			getch();
			system("cls");
			Patient_info();
			break;
	}
}
/* ************************************************************************************ */
/* ********************************** PATIENT RECORDS ********************************* */
/* ************************************************************************************ */
void  Variable :: Patient_record()
{
	system("cls");
	Title();
	row=25;
	column=88;
	int ch;
	gotoxy(column,row);
	cout<<"1. Add Patient Record";
	gotoxy(column,row+2);
	cout<<"2. Update Patient Record";
	gotoxy(column,row+4);
	cout<<"3. Delete Patient Record";
	gotoxy(column,row+6);
	cout<<"4. Back";
	gotoxy(column,row+8);
	cout<<"5. Exit";
	gotoxy(column,row+10);
	cin>>ch;
	switch(ch)
	{
		case 1:
			Add_patient_record();
			break;
		case 2:
			Update_patient_record();
			break;
		case 3:
			Delete_patient_record();
			break;
		case 4:
			Patient_info();
			break;
		case 5:
			ex_it();
			break;
		default:
			gotoxy(column,row+13);
			cout<<"Invalid (Press Enter to Return Back :) ";
			getch();
			system("cls");
			Patient_record();
			break;
	}
}
/* ************************************************************************************ */
/* ********************************** NEW PATIENT RECORD ****************************** */
/* ************************************************************************************ */
void Variable :: Add_patient_record()
{
	A:
		system("cls");
		Title();
		Title_add_patient_record();
		c=0;
		d=0;
		valid=0;
		ofstream off;
		off.open("Patient_info.txt",ios::app);
		if(off)
		{
			/* ***************************************************************************** */
			/* ********************************** PATIENT ID ******************************* */
			/* ***************************************************************************** */
			S:
				system("cls");
				Title();
				Title_add_patient_record();	
				gotoxy(column+45,row+6);
				cout<<"Patient's ID: ";
				cin>>Id;
				if(strlen(Id.c_str())!=8)
				{
					gotoxy(column+45,row+8);
					cout<<"Invalid :( The range of Patient id is 8 :)";
					gotoxy(210,52);
					getch();
					goto S;
				}
				else
				{
					off.close();
					ifstream ins("Patient_info.txt");
					ins>>Original_id;
					ins>>Original_Patient_First_Name;
					ins>>Original_Patient_Last_Name;	
					ins>>Age;
					ins>>Contact_no;
					ins>>Patient_Address;
					ins>>day;
					ins>>month;
					ins>>year;
					ins>>hour;
					ins>>minute;
					while(!ins.eof())
					{
						if((Id==Original_id)==1)
						{
							c=c+1;
						}
						else
						{
							d=d+1;
						}
						ins>>Original_id;
						ins>>Original_Patient_First_Name;
						ins>>Original_Patient_Last_Name;	
						ins>>Age;
						ins>>Contact_no;
						ins>>Patient_Address;
						ins>>day;
						ins>>month;
						ins>>year;	
						ins>>hour;
						ins>>minute;
					}
					if(c==1)
					{
						gotoxy(column+45,row+8);
						cout<<"Id Already Taken. Enter a new id (Press Enter :)";
						gotoxy(210,52);
						getch();
						c=0;
						goto A;
					}
					else
					{
						ins.close();
					}
				}
			/* **************************************************************************** */
			/* ********************************** FIRST NAME ****************************** */
			/* **************************************************************************** */
			B:
				system("cls");
				Title();
				Title_add_patient_record();
				gotoxy(column+45,row+6);
				cout<<"First Name: ";
				cin>>Patient_First_Name;
				Patient_First_Name[0]=toupper(Patient_First_Name[0]);
				if(strlen(Patient_First_Name.c_str())>20||strlen(Patient_First_Name.c_str())<2)
 				{
 					gotoxy(column+45,row+8);
					cout<<"Invalid :(The max range for first name is 20 and min range is 2 :)";
					gotoxy(210,52);
					getch();
					goto B;
				}
				else
				{
					for (b=0;b<strlen(Patient_First_Name.c_str());b++)
					{
						if (isalpha(Patient_First_Name[b]))
						{
							valid=1;
						}
						else
						{
							valid=0;
							break;
						}
					}
					if(valid==0)
					{
						gotoxy(column+45,row+8);
						cout<<"First name contain Invalid character :(  Enter again :)";
						gotoxy(210,52);
						getch();
						goto B;
					}
				}
			/* *************************************************************************** */
			/* ********************************** LAST NAME ****************************** */
			/* **************************************************************************** */
			C:
				system("cls");
				Title();
				Title_add_patient_record();	
				gotoxy(column+45,row+6);
				cout<<"Last Name: ";
		    	cin>>Patient_Last_Name;
    			Patient_Last_Name[0]=toupper(Patient_Last_Name[0]);
    			if(strlen(Patient_Last_Name.c_str())>20||strlen(Patient_Last_Name.c_str())<2)
				{
					gotoxy(column+45,row+8);
					cout<<"Invalid :(The max range for last name is 20 and min range is 2 :)";
					gotoxy(210,52);
					getch();
					goto C;
				}
				else
				{
					for (b=0;b<strlen(Patient_Last_Name.c_str());b++)
					{
						if (isalpha(Patient_Last_Name[b]))
						{
							valid=1;
						}
						else
						{
							valid=0;
							break;
						}
					}
					if(valid==0)
					{
						gotoxy(column+45,row+8);
						cout<<"Last name contain Invalid character :(  Enter again :)";
						gotoxy(210,52);
						getch();
						goto C;
					}
				}
			/* ********************************************************************* */
			/* ********************************** AGE ****************************** */	
			/* ********************************************************************* */
			system("cls");
			Title();
			Title_add_patient_record();	
			gotoxy(column+45,row+6);
    		cout<<"Age:";
    		cin>>Age;   
    		/* ***************************************************************************** */
			/* ********************************** CONTACT NO. ****************************** */
			/* ****************************************************************************** */
			do
			{
				D:
					system("cls");
					Title();
					Title_add_patient_record();	
					gotoxy(column+45,row+6);
			    	cout<<"Contact no: ";
			    	cin>>Contact_no;
			    	if(strlen(Contact_no.c_str())>10||strlen(Contact_no.c_str())!=10)
					{
						gotoxy(column+45,row+8);
						cout<<"Invalid. ( Contact no. must contain 10 numbers. Enter again :)";
						gotoxy(210,52);
						getch();
						goto D;
					}
					else
					{
						for (b=0;b<strlen(Contact_no.c_str());b++)
						{
							if (isdigit(Contact_no[b]))
							{
								valid=1;
							}
							else
							{
								valid=0;
								break;
							}
						}	
						if(valid==0)
						{
							gotoxy(column+45,row+8);
							cout<<"Contact no. contain Invalid character :( Enter again :)";
							gotoxy(210,52);
							getch();
							goto D;
						}
					}
			}while(valid==0);
			/* ********************************************************************************* */
			/* ********************************** PATIENT ADDRESS ****************************** */  
			/* ********************************************************************************* */
	    	do
	    	{
			    E:
			    	system("cls");
					Title();
					Title_add_patient_record();
					gotoxy(column+45,row+6);
				    cout<<"Address: ";
					cin>>Patient_Address;
		   			Patient_Address[0]=toupper(Patient_Address[0]);
		   			if(strlen(Patient_Address.c_str())>30||strlen(Patient_Address.c_str())<4)
					{
						gotoxy(column+45,row+8);
						cout<<"Invalid :(The max range for address is 20 and min range is 4 :)";
						gotoxy(210,52);
						getch();
						valid=1;
						goto E;
					}
			}while(valid==0);//(!valid);
			/* **************************************************************************************** */
			/* **************************************** DATE  ***************************************** */
			/* **************************************************************************************** */
			date();
			day=*days;
			month=*months;
			year=*years;
			/* **************************************************************************************** */
			/* **************************************** TIME  ***************************************** */
			/* **************************************************************************************** */
			gotoxy(column,row);
			time();
			hour=*hours;
			minute=*minutes;
			/* ******************************************************************************** */
			/* ********************************* WRITING IN FILE ****************************** */  
			/* ******************************************************************************** */
			off.open("Patient_info.txt",ios::app);
			off<<Id<<endl;
			off<<Patient_First_Name<<endl;
			off<<Patient_Last_Name<<endl;
			off<<Age<<endl;
			off<<Contact_no<<endl;
			off<<Patient_Address<<endl;
			off<<day<<endl;
			off<<month<<endl;
			off<<year<<endl;
			off<<hour<<endl;
			off<<minute<<endl;	
			off.close();
			system("cls");
			Title();
			Title_add_patient_record();	
			gotoxy(column+45,row+6);
			cout<<"Data Entered Successfully. Thank you :)";
			gotoxy(210,52);
			getch();
			system("cls");
			Patient_record();
		}
}

/* ******************************************************************************** */
/* ********************************** UPDATE PATIENT ****************************** */
/* ******************************************************************************** */
void Variable :: Update_patient_record()
{
	system("cls");
	Title();
	Title_update_patient_record();
	int i;
	int d;
	ifstream in("Patient_info.txt");
	d=count_array_in_patient_files();
	string new_id[d];
	string new_First_Name[d];
	string new_Last_Name[d];
	string new_Age[d];
	string new_Contact_no[d];
	string new_city[d];
	string new_day[d];
	string new_month[d];
	string new_year[d];
	string new_hour[d];
	string new_minute[d];
	for(i=0;i<d;i++)
	{
		in>>new_id[i];
		in>>new_First_Name[i];
		in>>new_Last_Name[i];
		in>>new_Age[i];
		in>>new_Contact_no[i];
		in>>new_city[i];
		in>>new_day[i];
		in>>new_month[i];
		in>>new_year[i];
		in>>new_hour[i];
		in>>new_minute[i];
	}
	back:
		cin.ignore();
		system("cls");
		Title();
		Title_update_patient_record();
		gotoxy(column+45,row+6);
		cout<<"Patient id :: ";
		getline(cin,Id);
		bool islogin=false;
		for(i=0;i<d;i++)
		{
			if(Id == new_id[i])
			{
				int ch;
				system("cls");
				Title();
				Title_update_patient_record();
				gotoxy(column+45,row+6);
				cout<<"Patient's ID Found in the database :)";
				gotoxy(column+45,row+8);
				cout<<"You want to update Patient Information ";
				gotoxy(column+45,row+10);
				cout<<"1. Yes";
				gotoxy(column+45,row+12);
				cout<<"2. NO";
				gotoxy(column+45,row+14);
				cin>>ch;
				if(ch!=1)
				{
					//gotoxy(column,row+16);
					Patient_record();
					//exit(0);
				}
				else if(ch==1)
				{
					/* **************************************************************************** */
					/* ********************************** FIRST NAME ****************************** */
					/* **************************************************************************** */
					B:
						system("cls");
						Title();
						Title_update_patient_record();
						gotoxy(column+45,row+6);
						cout<<"First Name: ";
						cin>>Patient_First_Name;
						Patient_First_Name[0]=toupper(Patient_First_Name[0]);
						if(strlen(Patient_First_Name.c_str())>20||strlen(Patient_First_Name.c_str())<2)
 						{
 							gotoxy(column+45,row+8);
							cout<<"Invalid :( The max range for first name is 20 and min range is 2 :)";
							gotoxy(210,52);
							getch();
							goto B;
						}
						else
						{
							for (b=0;b<strlen(Patient_First_Name.c_str());b++)
							{
								if (isalpha(Patient_First_Name[b]))
								{
									valid=1;
								}
								else
								{
									valid=0;	
									break;
								}
							}
							if(valid==0)
							{
								gotoxy(column+45,row+8);
								cout<<"First name contain Invalid character :(  Enter again :)";
								gotoxy(210,52);
								getch();
								goto B;
							}
							new_First_Name[i]=Patient_First_Name;
						}
					/* *************************************************************************** */
					/* ********************************** LAST NAME ****************************** */
					/* **************************************************************************** */
					C:
						system("cls");
						Title();
						Title_update_patient_record();
						gotoxy(column+45,row+6);
						cout<<"Last Name: ";
    					cin>>Patient_Last_Name;
    					Patient_Last_Name[0]=toupper(Patient_Last_Name[0]);
    					if(strlen(Patient_Last_Name.c_str())>20||strlen(Patient_Last_Name.c_str())<2)
						{
							gotoxy(column+45,row+8);
							cout<<"Invalid :( The max range for last name is 20 and min range is 2 :)";
							gotoxy(210,52);
							getch();
							goto C;
						}
						else
						{
							for (b=0;b<strlen(Patient_Last_Name.c_str());b++)
							{
								if (isalpha(Patient_Last_Name[b]))
								{
									valid=1;
								}
								else
								{
									valid=0;
									break;
								}
							}
							if(valid==0)
							{
								gotoxy(column+45,row+8);
								cout<<"Last name contain Invalid character :(  Enter again :)";
								gotoxy(210,52);
								getch();
								goto C;
							}
							new_Last_Name[i]=Patient_Last_Name;
						}
					/* ********************************************************************* */
					/* ********************************** AGE ****************************** */	
					/* ********************************************************************* */
					system("cls");
					Title();
					Title_update_patient_record();
					gotoxy(column+45,row+6);
    				cout<<"Age:";
    				cin>>new_Age[i];  
					
					/* ***************************************************************************** */
					/* ********************************** CONTACT NO. ****************************** */
					/* ****************************************************************************** */
					do
					{
						D:
							system("cls");
							Title();
							Title_update_patient_record();
							gotoxy(column+45,row+6);
							int valid=0;
						    cout<<"Contact no: ";
						    cin>>Contact_no;
						    if(strlen(Contact_no.c_str())>10||strlen(Contact_no.c_str())!=10)
							{
								gotoxy(column+45,row+8);
								cout<<"Invalid. (Contact no. must contain 10 numbers. Enter again :)";
								gotoxy(210,52);
								getch();
								goto D;
							}
							else
							{
								for (b=0;b<strlen(Contact_no.c_str());b++)
								{
									if (isdigit(Contact_no[b]))
									{
									valid=1;
									}
									else
									{
										valid=0;
										break;
									}
								}
								if(valid==0)
								{
									gotoxy(column+45,row+8);
									cout<<"Contact no. contain Invalid character :(  Enter again :)";
									gotoxy(210,52);
									getch();
									goto D;
								}
								else
								{
									new_Contact_no[i]=Contact_no;
								}
							}
					}while(valid==0);
					/* ********************************************************************************* */
					/* ********************************** PATIENT ADDRESS ****************************** */  
					/* ********************************************************************************* */
				    do
				    {
					    E:
					    	system("cls");
							Title();
							Title_update_patient_record();
							gotoxy(column+45,row+6);
					    	cout<<"Address: ";
			    			cin>>Patient_Address;
						    Patient_Address[0]=toupper(Patient_Address[0]);
						    new_city[i]=Patient_Address;
					  		if(strlen(new_city[i].c_str())>30||strlen(new_city[i].c_str())<4)
							{
								gotoxy(column+45,row+8);
								cout<<"Invalid :( The max range for address is 20 and min range is 4 :)";
								gotoxy(210,52);
								getch();
								valid=1;
								goto E;
							}
					}while(valid==0);//(!valid);
					/* **************************************************************************************** */
					/* **************************************** DATE  ***************************************** */
					/* **************************************************************************************** */
					date();
					new_day[i]=*days;
					new_month[i]=*months;
					new_year[i]=*years;
					/* **************************************************************************************** */
					/* **************************************** TIME  ***************************************** */
					/* **************************************************************************************** */
					time();
					new_hour[i]=*hours;
					new_minute[i]=*minutes;	
					//file update
					ofstream out("temp.txt");
					for(i=0;i<d;i++)
					{
						out<<new_id[i]<<endl;
						out<<new_First_Name[i]<<endl;
						out<<new_Last_Name[i]<<endl;
						out<<new_Age[i]<<endl;
						out<<new_Contact_no[i]<<endl;
						out<<new_city[i]<<endl;
						out<<new_day[i]<<endl;
						out<<new_month[i]<<endl;
						out<<new_year[i]<<endl;
						out<<new_hour[i]<<endl;
						out<<new_minute[i]<<endl;
						getch();
					}
					out.close();
					in.close();
					remove("Patient_info.txt");
					rename("temp.txt","Patient_info.txt");
					system("cls");
					Title();
					Title_update_patient_record();
					gotoxy(column+45,row+6);
					cout<<")Updated Successfully(";
					gotoxy(210,52);
					getch();
					Patient_record();
				}
				islogin=true;  
				break;
			}
			else
			{
				islogin=false;
			}
		}	
	if(!islogin)
	{
		system("cls");
		Title();
		Title_update_patient_record();
		gotoxy(column+45,row+6);
		cout<<"Invalid ID (Press Enter :)";
		gotoxy(210,52);
		goto back;
	}
}
/* ******************************************************************************** */
/* ********************************** DELETE PATIENT ****************************** */
/* ******************************************************************************** */
void Variable :: Delete_patient_record()
{
	system("cls");
	int i;
	int d;
	back:
	d=count_array_in_patient_files();
	string new_id[d];
	string new_First_Name[d];
	string new_Last_Name[d];
	string new_Age[d];
	string new_Contact_no[d];
	string new_city[d];
	string new_day[d];
	string new_month[d];
	string new_year[d];
	string new_hour[d];
	string new_minute[d];
	ifstream in("Patient_info.txt");
	for(i=0;i<d;i++)
	{
		in>>new_id[i];
		in>>new_First_Name[i];
		in>>new_Last_Name[i];
		in>>new_Age[i];
		in>>new_Contact_no[i];
		in>>new_city[i];
		in>>new_day[i];
		in>>new_month[i];
		in>>new_year[i];
		in>>new_hour[i];
		in>>new_minute[i];
	}
	
		cin.ignore();
		system("cls");
		Title();
		Title_update_patient_record();
		gotoxy(column+45,row+6);
		cout<<"Patient id :: ";
		getline(cin,Id);
		bool islogin=false;
		for(i=0;i<d;i++)
		{
			if(Id == new_id[i])
			{
				int del=i;
				int ch;
				system("cls");
				Title();
				Title_update_patient_record();
				gotoxy(column+45,row+6);
				cout<<"Patient's ID Found in the database :)";
				gotoxy(column+45,row+8);
				cout<<"You want to Delete Patient Information ";
				gotoxy(column+45,row+10);
				cout<<"1. Yes";
				gotoxy(column+45,row+12);
				cout<<"2. NO";
				gotoxy(column+45,row+14);
				cin>>ch;
				if(ch!=1)
				{
					Patient_record();
				}
				else if(ch==1)
				{
					for(int i=0;i<d;i++)
					{
						if(i!=del)
						{
							ofstream out("temp.txt",ios::app);
							out<<new_id[i]<<endl;
							out<<new_First_Name[i]<<endl;
							out<<new_Last_Name[i]<<endl;
							out<<new_Age[i]<<endl;
							out<<new_Contact_no[i]<<endl;
							out<<new_city[i]<<endl;
							out<<new_day[i]<<endl;
							out<<new_month[i]<<endl;
							out<<new_year[i]<<endl;
							out<<new_hour[i]<<endl;
							out<<new_minute[i]<<endl;
							out.close();
						}
					}
					in.close();
					remove("Patient_info.txt");
					rename("temp.txt","Patient_info.txt");
					system("cls");
					Title();
					Title_update_patient_record();
					gotoxy(column+45,row+6);
					cout<<")Deleted Successfully(";
					gotoxy(210,52);
					getch();
					Patient_record();
				}
				islogin=true;  
				if(islogin)
				{
					break;
				}
			}
			else
			{
				islogin=false;
			}
		}	
	if(!islogin)
	{
		system("cls");
		Title();
		Title_update_patient_record();
		gotoxy(column+45,row+6);
		cout<<"Invalid ID (Press Enter :)";
		gotoxy(210,52);
		goto back;
	}
}
/* ******************************************************************************************* */
/* ********************************** DIAGONOSIS INFORMATION ********************************* */
/* ******************************************************************************************* */
void Variable :: Diagnosis_report()
{
	system("cls");
	Title();
	int ch;
	row=25;
	column=88;
	gotoxy(column,row);
	gotoxy(column,row+2);
	cout<<"1. Add Diagnosis Report";
	gotoxy(column,row+4);
	cout<<"2. Update Diagnosis Report";
	gotoxy(column,row+6);
	cout<<"3. Back";
	gotoxy(column,row+8);
	cout<<"4. Exit";
	gotoxy(column,row+10);
	cin>>ch;
	switch(ch)
	{
		case 1:
			Add_diagnosis_report();
			break;
		case 2:
			Update_diagnosis_report();
			break;
		case 3:
			Patient_info();
			break;
		case 4:
			ex_it();
			break;
		default:
			gotoxy(column,row+12);
			cout<<"Invalid Input(Press Enter ):)";
			getch();
			system("cls");
			Diagnosis_report();
			break;
	}
}
/* ****************************************************************************************** */
/* ********************************** ADD DIAGONOSIS REPORT ********************************* */
/* ****************************************************************************************** */
void Variable :: Add_diagnosis_report()
{
	system("cls");
	Title();
	Title_add_patient_report();
	gotoxy(column+45,row+6);
	A:
	c=0;
	d=0;
	e=0;
	int a;
	valid=0;
	ofstream off;
	off.open("Patient_info.txt",ios::app);
	if(off)
	{
		/* ***************************************************************************** */
		/* ********************************** PATIENT ID ******************************* */
		/* ***************************************************************************** */
		S:
			system("cls");
			Title();
			Title_add_patient_report();
			gotoxy(column+45,row+6);
			cout<<"Patient's ID: ";
			cin>>Id;
			if(strlen(Id.c_str())!=8)
			{
				gotoxy(column+45,row+8);
				cout<<"Invalid :( The range of Patient id is 8 :)";
				gotoxy(210,52);
				getch();
				goto S;
			}
			else
			{
				off.close();
				string new_id;
				string new_Blood_group;
				string new_Hiv_test;
				string new_Blood_pressure_test;
				string new_Liver_test;
				string new_Heart_test;
				string new_Disease_Name;
				string new_AD;
				string new_Charge;
				ifstream ins("Patient_info.txt");
				ins>>Original_id;	
				ins>>Original_Patient_First_Name;
				ins>>Original_Patient_Last_Name;	
				ins>>Age;
				ins>>Contact_no;
				ins>>Patient_Address;
				ins>>day;
				ins>>month;
				ins>>year;
				ins>>hour;
				ins>>minute;
				while(!ins.eof())
				{
					if((Id==Original_id)==1)
					{
						a=a+1;
						ofstream outfile("Diagnosis_info.txt",ios::app);
						outfile.close();
						ifstream infile("Diagnosis_info.txt");
						infile>>new_id;	
						infile>>new_Blood_group;
						infile>>new_Hiv_test;
						infile>>new_Blood_pressure_test;
						infile>>new_Liver_test;
						infile>>new_Heart_test;
						infile>>new_Disease_Name;
						infile>>new_AD;
						infile>>new_Charge;
						while(!infile.eof())
						{
							if((Id==new_id)==1)
							{
								cout<<"The given id is "<<Id<<" the patient id is "<<Original_id<<" The diagnosis id is "<<new_id;
								c=c+1;
								break;
							}
							else
							{
								e=e+1;
							}
							infile>>new_id;
							infile>>new_Blood_group;
							infile>>new_Hiv_test;
							infile>>new_Blood_pressure_test;
							infile>>new_Liver_test;
							infile>>new_Heart_test;
							infile>>new_Disease_Name;
							infile>>new_AD;
							infile>>new_Charge;
						}
						break;
					}
					else
					{
						d=d+1;
					}
					ins>>Original_id;
					ins>>Original_Patient_First_Name;
					ins>>Original_Patient_Last_Name;	
					ins>>Age;
					ins>>Contact_no;
					ins>>Patient_Address;
					ins>>day;
					ins>>month;
					ins>>year;
					ins>>hour;
					ins>>minute;
				}
				if(a==1 && c!=1)
				{
					gotoxy(column+45,row+8);
					cout<<"Id Found In The Database. Enter Report (Press Enter ):)";
					gotoxy(210,52);
					getch();
				/* **************************************************************************** */
				/* ********************************** BLOOD GROUP ****************************** */
				/* **************************************************************************** */
				B:
					int ch;
					system("cls");
					Title();
					Title_add_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Blood Group: ";
					gotoxy(column+45,row+8);
					cout<<"1. A+";
					gotoxy(column+45,row+10);
					cout<<"2. A-";
					gotoxy(column+45,row+12);
					cout<<"3. B+";
					gotoxy(column+45,row+14);
					cout<<"4. B-";
					gotoxy(column+45,row+16);
					cout<<"5. AB+";
					gotoxy(column+45,row+18);
					cout<<"6. AB-";
					gotoxy(column+45,row+20);
					cout<<"7. O+:";
					gotoxy(column+45,row+22);
					cout<<"8. O- ";
					gotoxy(column+45,row+24);
					cin>>ch;
					switch(ch)
					{
						case 1:
							Blood_group="A+";
							break;
						case 2:
							Blood_group="A-";
							break;
						case 3:
							Blood_group="B+";
							break;
						case 4:
							Blood_group="B-";
							break;
						case 5:
							Blood_group="AB+";
							break;
						case 6:
							Blood_group="AB-";
							break;
						case 7:
							Blood_group="O+";
							break;
						case 8:
							Blood_group="O-";
							break;
						default:
							gotoxy(column,row+26);
							cout<<"Invalid Input (Press Enter :)";
							gotoxy(210,52);
							getch();
							goto B;
					}
				/* *************************************************************************** */
				/* ********************************** TESTS ****************************** */
				/* **************************************************************************** */
				C:
					char chr;
					system("cls");
					Title();
					Title_add_patient_report();
					gotoxy(column+45,row+6);
					cout<<"HIV Test[P/N] ";
					cin>>chr;
					chr=toupper(chr);
					switch(chr)
					{
						case 'P':
							Hiv_test="Positive";
							break;
						case 'N':
							Hiv_test="Negative";
							break;
						default:
							gotoxy(column+45,row+8);
							cout<<"Invalid Input (Press Enter :)";
							gotoxy(210,52);
							getch();
							goto C;
							break;
					}
				D:
					system("cls");
					Title();
					Title_add_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Blood Pressure Test[A/N] ";
					cin>>chr;
					chr=toupper(chr);
					switch(chr)
					{
						case 'A':
							Blood_pressure_test="Abnormal";
							break;
						case 'N':
							Blood_pressure_test="Normal";
							break;
						default:
							gotoxy(column+45,row+8);
							cout<<"Invalid Input (Press Enter :)";
							gotoxy(210,52);
							getch();
							goto D;
							break;
					}
				E:
					system("cls");
					Title();
					Title_add_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Liver Test[A/N] ";
					cin>>chr;
					chr=toupper(chr);
					switch(chr)
					{
						case 'A':
							Liver_test="Abnormal";
							break;
						case 'N':
							Liver_test="Normal";
							break;
						default:
							gotoxy(column+45,row+8);
							cout<<"Invalid Input (Press Enter :)";
							gotoxy(210,52);
							getch();
							goto E;
							break;
					}
    			F:
					system("cls");
					Title();
					Title_add_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Heart Test[A/N]";
					cin>>chr;
					chr=toupper(chr);
					switch(chr)
					{
						case 'A':
							Heart_test="Abnormal";
							break;
						case 'N':
							Heart_test="Normal";
							break;
						default:
							gotoxy(column+45,row+8);
							cout<<"Invalid Input (Press Enter :)";
							gotoxy(210,52);
							getch();
							goto F;
							break;
					}
				/* ************************************************************************** */
				/* ********************************** DISEASES ****************************** */	
				/* ************************************************************************** */
				cin.ignore();
					system("cls");
					Title();
					Title_add_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Disease Name: ";
					getline(cin,Disease_Name);
					//cin>>Disease_Name;
    			/* ******************************************************************************** */
				/* ********************************** PATIENT STATUS ****************************** */
				/* ********************************************************************************* */
				G:
					system("cls");
					Title();
					Title_add_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Alive or Dead [A/D] ";
					cin>>chr;
					chr=toupper(chr);
					switch(chr)
					{
						case 'A':
							AD="Alive";
							break;
						case 'D':
							AD="Dead";
							break;
						default:
							gotoxy(column+45,row+8);
							cout<<"Invalid Input (Press Enter :)";
							gotoxy(210,52);
							getch();
							goto F;
							break;
					}
				/* ************************************************************************** */
				/* ********************************** CHARGES ****************************** */	
				/* ************************************************************************** */
				system("cls");
				Title();
				Title_add_patient_report();
				gotoxy(column+45,row+6);
				cout<<"Charges ::";
				cin>>Charge;
					/* ******************************************************************************** */
					/* ********************************* WRITING IN FILE ****************************** */  
					/* ******************************************************************************** */
					off.open("Diagnosis_info.txt",ios::app);
					off<<Id<<endl;
					off<<Blood_group<<endl;
					off<<Hiv_test<<endl;
					off<<Blood_pressure_test<<endl;
					off<<Liver_test<<endl;
					off<<Heart_test<<endl;
					off<<Disease_Name<<endl;
					off<<AD<<endl;
					off<<Charge<<endl;
					off.close();
					system("cls");
					Title();
					Title_add_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Data Entered Successfully. Thank you :)";
					gotoxy(210,52);
					getch();
					Diagnosis_report();
			}
			else if(a==1 && c==1)
			{
				system("cls");
				Title();
				Title_add_patient_report();
				gotoxy(column+45,row+6);
				cout<<"Id is already entered in the database. (Press Enter To Update The Report ):)";
				gotoxy(210,52);
				getch();
				Update_diagnosis_report();
			}
			else
			{
				system("cls");
				Title();
				Title_add_patient_report();
				gotoxy(column+45,row+6);
				cout<<"Id Not Found In Patient Record.(Press Enter ):)";
				gotoxy(210,52);
				getch();
				Add_diagnosis_report();
			}
		}
	}
}

/* ****************************************************************************************** */
/* ********************************** UPDATE DIAGONOSIS REPORT ****************************** */
/* ****************************************************************************************** */
void Variable :: Update_diagnosis_report()
{
	system("cls");
	Title();
	int i;
	int d;
	ifstream in("Diagnosis_info.txt");
	d=count_array_in_diagnosis_files();
	string new_id[d];
	string new_Blood_group[d];
	string new_Hiv_test[d];
	string new_Blood_pressure_test[d];
	string new_Liver_test[d];
	string new_Heart_test[d];
	string new_Disease_Name[d];
	string new_AD[d];
	string new_Charge[d];
	for(i=0;i<d;i++)
	{
		in>>new_id[i];
		in>>new_Blood_group[i];
		in>>new_Hiv_test[i];
		in>>new_Blood_pressure_test[i];
		in>>new_Liver_test[i];
		in>>new_Heart_test[i];
		in>>new_Disease_Name[i];
		in>>new_AD[i];
		in>>new_Charge[i];
	}
	in.close();
	back:
		cin.ignore();
		system("cls");
		Title();
		Title_update_patient_report();
		gotoxy(column+45,row+6);
		cout<<"Patient id :: ";
		getline(cin,Id);
		bool islogin=false;
		for(i=0;i<d;i++)
		{
			if(Id == new_id[i])
			{
				int ch;
				system("cls");
				Title();
				Title_update_patient_report();
				gotoxy(column+45,row+6);
				cout<<"Patient's ID Found in the database :)";
				gotoxy(column+45,row+8);
				cout<<"You want to Update Patient Diagnosis Report ";
				gotoxy(column+45,row+10);
				cout<<"1. Yes";
				gotoxy(column+45,row+12);
				cout<<"2. NO";
				gotoxy(column+45,row+14);
				cin>>ch;
				if(ch!=1)
				{
					Patient_record();
				}
				else if(ch==1)
				{
					/* **************************************************************************** */
				/* ********************************** BLOOD GROUP ****************************** */
				/* **************************************************************************** */
				B:
					int ch;
					system("cls");
					Title();
					Title_update_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Blood Group: ";
					gotoxy(column+45,row+8);
					cout<<"1. A+";
					gotoxy(column+45,row+10);
					cout<<"2. A-";
					gotoxy(column+45,row+12);
					cout<<"3. B+";
					gotoxy(column+45,row+14);
					cout<<"4. B-";
					gotoxy(column+45,row+16);
					cout<<"5. AB+";
					gotoxy(column+45,row+18);
					cout<<"6. AB-";
					gotoxy(column+45,row+20);
					cout<<"7. O+:";
					gotoxy(column+45,row+22);
					cout<<"8. O- ";
					gotoxy(column+45,row+24);
					cin>>ch;
					switch(ch)
					{
						case 1:
							Blood_group="A+";
							break;
						case 2:
							Blood_group="A-";
							break;
						case 3:
							Blood_group="B+";
							break;
						case 4:
							Blood_group="B-";
							break;
						case 5:
							Blood_group="AB+";
							break;
						case 6:
							Blood_group="AB-";
							break;
						case 7:
							Blood_group="O+";
							break;
						case 8:
							Blood_group="O-";
							break;
						default:
							gotoxy(column,row+26);
							cout<<"Invalid Input (Press Enter :)";
							gotoxy(210,52);
							getch();
							system("cls");
							goto B;
					}
					new_Blood_group[i]=Blood_group;
				/* *************************************************************************** */
				/* ********************************** TESTS ****************************** */
				/* **************************************************************************** */
				C:
					char chr;
					system("cls");
					Title();
					Title_update_patient_report();
					gotoxy(column+45,row+6);
					cout<<"HIV Test[A/N] ";
					cin>>chr;
					chr=toupper(chr);
					switch(chr)
					{
						case 'A':
							Hiv_test="Abnormal";
							break;
						case 'N':
							Hiv_test="Normal";
							break;
						default:
							gotoxy(column+45,row+8);
							cout<<"Invalid Input (Press Enter :)";
							gotoxy(210,52);
							getch();
							goto C;
							break;
					}
					new_Hiv_test[i]=Hiv_test;
				D:
					system("cls");
					Title();
					Title_update_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Blood Pressure Test[A/N] ";
					cin>>chr;
					chr=toupper(chr);
					switch(chr)
					{
						case 'A':
							Blood_pressure_test="Abnormal";
							break;
						case 'N':
							Blood_pressure_test="Normal";
							break;
						default:
							gotoxy(column+45,row+8);
							cout<<"Invalid Input (Press Enter :)";
							getch();
							goto D;
							break;
					}
					new_Blood_pressure_test[i]=Blood_pressure_test;
				E:
					system("cls");
					Title();
					Title_update_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Liver Test[A/N] ";
					cin>>chr;
					chr=toupper(chr);
					switch(chr)
					{
						case 'A':
							Liver_test="Abnormal";
							break;
						case 'N':
							Liver_test="Normal";
							break;
						default:
							gotoxy(column+45,row+8);
							cout<<"Invalid Input (Press Enter :)";
							getch();
							goto E;
							break;
					}
					new_Liver_test[i]=Liver_test;
    			F:
					system("cls");
					Title();
					Title_update_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Heart Test[A/N]";
					cin>>chr;
					chr=toupper(chr);
					switch(chr)
					{
						case 'A':
							Heart_test="Abnormal";
							break;
						case 'N':
							Heart_test="Normal";
							break;
						default:
							gotoxy(column+45,row+8);
							cout<<"Invalid Input (Press Enter :)";
							getch();
							goto F;
							break;
					}
					new_Heart_test[i]=Heart_test;
				/* ************************************************************************** */
				/* ********************************** DISEASES ****************************** */	
				/* ************************************************************************** */
				cin.ignore();
				system("cls");
					Title();
					Title_update_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Disease Name: ";
					cin>>Disease_Name;
					new_Disease_Name[i]=Disease_Name;
    			/* ******************************************************************************** */
				/* ********************************** PATIENT STATUS ****************************** */
				/* ********************************************************************************* */
				G:
					system("cls");
					Title();
					Title_update_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Alive or Dead [A/D] ";
					cin>>chr;
					chr=toupper(chr);
					switch(chr)
					{
						case 'A':
							AD="Alive";
							break;
						case 'D':
							AD="Dead";
							break;
						default:
							gotoxy(column+45,row+8);
							cout<<"Invalid Input (Press Enter :)";
							getch();
							goto F;
							break;
					}
					new_AD[i]=AD;
					/* ************************************************************************** */
					/* ********************************** CHARGES ****************************** */	
					/* ************************************************************************** */
				//H:
					system("cls");
					Title();
					Title_update_patient_report();
					gotoxy(column+45,row+6);
					cout<<"Charges :: ";
					cin>>Charge;
					new_Charge[i]=Charge;
					//file update
					ofstream out("temp.txt");
					for(i=0;i<d;i++)
					{
						out<<new_id[i]<<endl;
						out<<new_Blood_group[i]<<endl;
						out<<new_Hiv_test[i]<<endl;
						out<<new_Blood_pressure_test[i]<<endl;
						out<<new_Liver_test[i]<<endl;
						out<<new_Heart_test[i]<<endl;
						out<<new_Disease_Name[i]<<endl;
						out<<new_AD[i]<<endl;
						out<<new_Charge[i]<<endl;
					}
					out.close();
					in.close();
					remove("Diagnosis_info.txt");
					rename("temp.txt","Diagnosis_info.txt");
					system("cls");
					Title();
					Title_update_patient_report();
					gotoxy(column+45,row+6);
					cout<<")Updated Successfully(";
					getch();
					Diagnosis_report();
				}
				islogin=true;  
				break;
			}
			else
			{
				islogin=false;
			}
		}	
	if(!islogin)
	{
		system("cls");
		Title();
		Title_update_patient_report();
		gotoxy(column+45,row+6);
		cout<<"Invalid ID (Press Enter :)";
		getch();
		goto back;
	}
}

/* ************************************************************************************* */
/* ********************************** PATIENT INFORMATION ****************************** */
/* ************************************************************************************* */
void Variable :: Patient_information()
{
	system("cls");
	Title();
	A:
	int i;
	int c=0;
	int j;
	int d;
	int d1;
	
	ofstream off;
	off.open("Patient_info.txt",ios::app);
	ofstream out;
	out.open("Diagnosis_info.txt",ios::app);
	if(off && out)
	{
		off.close();
		out.close();
		d=count_array_in_patient_files();
		ifstream infile("Patient_info.txt");
		d=count_array_in_patient_files();
		string new_id[d];
		string new_First_Name[d];
		string new_Last_Name[d];
		string new_Age[d];
		string new_Contact_no[d];
		string new_city[d];
		string new_day[d];
		string new_month[d];
		string new_year[d];
		string new_hour[d];
		string new_minute[d];
		for(i=0;i<d;i++)
		{
			cin.ignore();
			infile>>new_id[i];
			infile>>new_First_Name[i];
			infile>>new_Last_Name[i];
			infile>>new_Age[i];
			infile>>new_Contact_no[i];
			infile>>new_city[i];	
			infile>>new_day[i];
			infile>>new_month[i];
			infile>>new_year[i];
			infile>>new_hour[i];
			infile>>new_minute[i];
		}
		ifstream in("Diagnosis_info.txt");
		d1=count_array_in_diagnosis_files();
		string new_ids[d1];
		string new_Blood_group[d1];
		string new_Hiv_test[d1];
		string new_Blood_pressure_test[d1];
		string new_Liver_test[d1];
		string new_Heart_test[d1];
		string new_Disease_Name[d1];
		string new_AD[d1];
		string new_Charge[d1];	
		for(j=0;j<d1;j++)
		{
			in>>new_ids[j];
			in>>new_Blood_group[j];
			in>>new_Hiv_test[j];
			in>>new_Blood_pressure_test[j];
			in>>new_Liver_test[j];
			in>>new_Heart_test[j];	
			in>>new_Disease_Name[j];
			in>>new_AD[j];
			in>>new_Charge[j];
		}
		back:
				system("cls");
				Title();
				Title_view_patient_information();
				column=0;
				gotoxy(column+5,row+6);
				cout<<"Id";
				gotoxy(column+12,row+6);
				cout<<"|";
				gotoxy(column+22,row+6);
				cout<<"Name";
				gotoxy(column+36,row+6);
				cout<<"|";
				gotoxy(column+38,row+6);
				cout<<"Age";
				gotoxy(column+42,row+6);
				cout<<"|";
				gotoxy(column+44,row+6);
				cout<<"Contact No.";
				gotoxy(column+57,row+6);
				cout<<"|";
				gotoxy(column+60,row+6);
				cout<<"Address";
				gotoxy(column+69,row+6);
				cout<<"|";
				gotoxy(column+73,row+6);
				cout<<"Time";
				gotoxy(column+79,row+6);
				cout<<"|";
				gotoxy(column+84,row+6);
				cout<<"Date";
				gotoxy(column+90,row+6);
				cout<<"|";
				gotoxy(column+95,row+6);
				cout<<"BG";
				gotoxy(column+100,row+6);
				cout<<"|";
				gotoxy(column+105,row+6);
				cout<<"HIV Test";
				gotoxy(column+116,row+6);
				cout<<"|";
				gotoxy(column+121,row+6);
				cout<<"BP";
				gotoxy(column+126,row+6);
				cout<<"|";
				gotoxy(column+130,row+6);
				cout<<"Liver";
				gotoxy(column+140,row+6);
				cout<<"|";
				gotoxy(column+145,row+6);
				cout<<"Heart";
				gotoxy(column+154,row+6);
				cout<<"|";
				gotoxy(column+159,row+6);
				cout<<"Diseas";
				gotoxy(column+170,row+6);
				cout<<"|";
				gotoxy(column+175,row+6);
				cout<<"Alive/Dead";
				gotoxy(column+190,row+6);
				cout<<"|";
				gotoxy(column+195,row+6);
				cout<<"Charge";
				gotoxy(column,row+8);
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";				
			for(i=0;i<d;i++)
			{
				for(j=0;j<d1;j++)
				{
					if(new_id[i] == new_ids[j])
					{
						gotoxy(column+2,row+10);
						cout<<new_ids[j];
						gotoxy(column+12,row+10);
						cout<<"|";
						gotoxy(column+14,row+10);
						cout<<new_First_Name[i]<<" "<<new_Last_Name[i];
						gotoxy(column+36,row+10);
						cout<<"|";
						gotoxy(column+38,row+10);
						cout<<new_Age[i];
						gotoxy(column+42,row+10);
						cout<<"|";
						gotoxy(column+44,row+10);
						cout<<new_Contact_no[i];
						gotoxy(column+57,row+10);
						cout<<"|";
						gotoxy(column+60,row+10);
						cout<<new_city[i];
						gotoxy(column+69,row+10);
						cout<<"|";
						gotoxy(column+73,row+10);
						cout<<new_hour[i]<<":"<<new_minute[i];
						gotoxy(column+79,row+10);
						cout<<"|";
						gotoxy(column+80,row+10);
						cout<<new_day[i]<<"/"<<new_month[i]<<"/"<<new_year[i];
						gotoxy(column+90,row+10);
						cout<<"|";
						gotoxy(column+95,row+10);
						cout<<new_Blood_group[j];
						gotoxy(column+100,row+10);
						cout<<"|";
						gotoxy(column+105,row+10);
						cout<<new_Hiv_test[j];
						gotoxy(column+116,row+10);
						cout<<"|";
						gotoxy(column+117,row+10);
						cout<<new_Blood_pressure_test[j];
						gotoxy(column+126,row+10);
						cout<<"|";
						gotoxy(column+130,row+10);
						cout<<new_Liver_test[j];
						gotoxy(column+140,row+10);
						cout<<"|";
						gotoxy(column+144,row+10);
						cout<<new_Heart_test[j];
						gotoxy(column+154,row+10);
						cout<<"|";
						gotoxy(column+157,row+10);
						cout<<new_Disease_Name[j];
						gotoxy(column+170,row+10);
						cout<<"|";
						gotoxy(column+180,row+10);
						cout<<new_AD[j];
						gotoxy(column+190,row+10);
						cout<<"|";
						cout<<new_Charge[j];
						gotoxy(210,52);
						row=row+2;
					}
				}
			}
			in.close();
			infile.close();
			gotoxy(210,52);
			getch();
			Patient_info();
	}
	else
	{
		system("cls");
		Title();
		Title_add_patient_report();
		gotoxy(column+45,row+6);
		cout<<"There is no data in Patient_info file or Diagnosis_info file";
		gotoxy(column+46,row+8);
		cout<<"Press Enter to return back ";
		getch();
		system("cls");
		Patient_info();
	}
}
/* ******************************************************************************************* */
/* ******************************************************************************************* */
/* **************************************DATE INPUT ****************************************** */
/* ******************************************************************************************* */
/* ******************************************************************************************* */
void Variable :: date()
{
	system("cls");//clears screen
	Title();
	SYSTEMTIME date;
	GetSystemTime(&date);
	row=22;
	column=90;
	int valid=0;
	L:
	{
		system("cls");
		Title();
		row=22;
		column=90;
		int b,m,y,d;
		gotoxy(column-15,row);
		cout<<"Patient Entry Date(dd/mm/yyyy): ";
		cin>>day;
		gotoxy(column+19,row);
		cout<<"/";
		cin>>month;
		gotoxy(column+22,row);
		cout<<"/";
		cin>>year;
		stringstream mo(month);	//cpnversion of string into integer
		mo>>m;
		stringstream ye(year);
		ye>>y;
		stringstream da(day);
		da>>d;
		if(strlen(day.c_str())>2 || strlen(day.c_str())<1)
		{
			gotoxy(column-15,row+2);
			cout<<"The max range for day is 2 digit and min range is 1 . Enter again :)";
			gotoxy(210,52);
			getch();
			goto L;
		}
		else if(strlen(month.c_str())>2 || strlen(month.c_str())<1)
		{
			gotoxy(column-15,row+2);
			cout<<"The max range for month is 2 digit and min range is 1. Enter again :)";
			gotoxy(210,52);
			getch();
			goto L;
		}
		else if(strlen(year.c_str())>4 || strlen(year.c_str())<4)
		{
			gotoxy(column-15,row+2);
			cout<<"The required range for year is 4 digit. Enter again :)";
			gotoxy(210,52);
			getch();
			goto L;
		}
		else
		{
			for (b=0;b<strlen(year.c_str());b++)
				{
					if (isdigit(year[b]))
					{
						valid=1;
					}
					else
					{
						valid=0;
						goto M;
					}		
				}
			for (b=0;b<strlen(month.c_str());b++)
				{
					if (isdigit(month[b]))
					{
						valid=1;
					}
					else
					{
						valid=0;
						goto M;
					}		
				}
			for (b=0;b<strlen(day.c_str());b++)
				{
					if (isdigit(day[b]))
					{
						valid=1;
					}
					else
					{
						valid=0;
						goto M;
					}		
				}
			M:
			if(valid==0)
			{
				gotoxy(column-15,row+2);
				cout<<"Invalid Date Character:( Enter again :)";
				gotoxy(210,52);
				getch();
				goto L;
			}
			else
			{
				if(m<0 || m>12)
				{
					gotoxy(column-15,row+2);
					cout<<"Invalid Date Character:( Enter again :)";
					gotoxy(210,52);
					getch();
					goto L;
				}
				else
				{
					switch(m)
					{
	 					//months with 31 days
	 					case 1:  //january:
	 					case 3:  //march:
	 					case 5:  //may:
	 					case 7:  //july:
	 					case 8:  //august:
	 					case 10: //october:
	 					case 12: //december:
	 						if(y<date.wYear)
							{
								gotoxy(column-15,row+2);
								cout<<"Invalid Date:( Enter again :)";
								gotoxy(210,52);
								getch();
								goto L;
							}
							else if(y>=date.wYear)
							{
								if(y==date.wYear && m<date.wMonth)
								{
									gotoxy(column-15,row+2);
									cout<<"Invalid Date:( Enter again :)";
									gotoxy(210,52);
									getch();
									goto L;
								}
								else if (y==date.wYear && m>=date.wMonth)
								{
									if (m==date.wMonth && d<date.wDay)
									{
										gotoxy(column-15,row+2);
										cout<<"Invalid Date:( Enter again :)";
										gotoxy(210,52);
										getch();
										goto L;
									}
									else if (m==date.wMonth && d==date.wDay || d>date.wDay)
									{
										if(d<=31 && d>0)
	 									{
	 										//valid date;
										}
										else
										{
											gotoxy(column-15,row+2);
											cout<<"Invalid Date:( Enter again :)";
											gotoxy(210,52);
											getch();
											goto L;
										}
									}
									else if(m>date.wMonth && d<date.wDay || d>=date.wDay)
									{	
										if(d<=31 && d>0)
	 									{
	 										//valid date;
										}
										else
										{
											gotoxy(column-15,row+2);
											cout<<"Invalid Date:( Enter again :)";
											gotoxy(210,52);
											getch();
											goto L;
										}
									}
								}
								else if( y>date.wYear && m<date.wMonth || m>=date.wMonth)
								{
									if(d<=31 && d>0)
	 								{
	 									//valid;
									}
									else
									{
										gotoxy(column-15,row+2);
										cout<<"Invalid Date:( Enter again :)";
										gotoxy(210,52);
										getch();
										goto L;
									}
								}
							}
	 						break;
		 				//months with 30 days
		 				case 9:  //september:
		 				case 4:  //april:
	 					case 6:  //june:
		 				case 11: //november:
		 					if(y<date.wYear)
							{
								gotoxy(column-15,row+2);
								cout<<"Invalid Date:( Enter again :)";
								gotoxy(210,52);
								getch();
								goto L;
							}
							else if(y>=date.wYear)
							{
								if(y==date.wYear && m<date.wMonth)
								{
									gotoxy(column-15,row+2);
									cout<<"Invalid Date:( Enter again :)";
									gotoxy(210,52);
									getch();
									goto L;
								}
								else if (y==date.wYear && m>=date.wMonth)
								{
									if (m==date.wMonth && d<date.wDay)
									{
										gotoxy(column-15,row+2);
										cout<<"Invalid Date:( Enter again :)";
										gotoxy(210,52);
										getch();
										goto L;
									}
									else if (m==date.wMonth && d==date.wDay || d>date.wDay)
									{
										if(d<=30 && d>0)
	 									{
	 										//valid date;
										}
										else
										{
											gotoxy(column-15,row+2);
											cout<<"Invalid Date:( Enter again :)";
											gotoxy(210,52);
											getch();
											goto L;
										}
									}
									else if(m>date.wMonth && d<date.wDay || d>=date.wDay)
									{	
										if(d<=30 && d>0)
	 									{
	 										//valid date;
										}
										else
										{
											gotoxy(column-15,row+2);
											cout<<"Invalid Date:( Enter again :)";
											gotoxy(210,52);
											getch();
											goto L;
										}
									}
								}	
								else if( y>date.wYear && m<date.wMonth || m>=date.wMonth)
								{
									if(d<=30 && d>0)
	 								{
	 									//valid date;
									}
									else
									{
										gotoxy(column-15,row+2);
										cout<<"Invalid Date:( Enter again :)";
										gotoxy(210,52);
										getch();
										goto L;
									}
								}
							}
		 					break;
		 				//28 or 29 depending on leap year
		 				case 2:  //february:
		 				{
		 					if(y<date.wYear)
							{
								gotoxy(column-15,row+2);
								cout<<"Invalid Date:( Enter again :)";
								gotoxy(210,52);
								getch();
								goto L;
							}
							else if(y>=date.wYear)
							{
								if(y==date.wYear && m<date.wMonth)
								{
									gotoxy(column-15,row+2);
									cout<<"Invalid Date:( Enter again :)";
									gotoxy(210,52);
									getch();
									goto L;
								}
								else if (y==date.wYear && m>=date.wMonth)
								{
									if (m==date.wMonth && d<date.wDay)
									{
										gotoxy(column-15,row+2);
										cout<<"Invalid Date:( Enter again :)";
										gotoxy(210,52);
										getch();
										goto L;
									}
									else if (m==date.wMonth && d==date.wDay || d>date.wDay)
									{
										if(y%400==0)
		 								{
		 									if(d<=29&&d>0)
		 									{
		 										//valid date;
									 		}
											else 
											{
												gotoxy(column-15,row+2);
												cout<<"Invalid Date:( Enter again :)";
												gotoxy(210,52);
												getch();
												goto L;
											}
										}	
					 					else if(y%100==0)
										{
					 						if(d<=28 && d>0)
			 								{
			 									//valid date;
											}
											else 
											{
												gotoxy(column-15,row+2);
												cout<<"Invalid Date:( Enter again :)";
												gotoxy(210,52);
												getch();
												goto L;
											}
							 			}
							 			else if(y%4==0)
										{
					 						if(d<=29 && d>0)
	 										{
	 											//valid date;
											}
											else 
											{
												gotoxy(column-15,row+2);
												cout<<"Invalid Date:( Enter again :)";
												gotoxy(210,52);
												getch();
												goto L;
											} 
			 							}
			 							else
										{
										 	if(d<=28 && d>0)
	 										{
	 											//valid date;
											}
											else 
											{
												gotoxy(column-15,row+2);
												cout<<"Invalid Date:( Enter again :)";
												gotoxy(210,52);
												getch();
												goto L;
											}
						 				}
									}
									else if(m>date.wMonth && d<date.wDay || d>=date.wDay)
									{	
										if(y%400==0)
		 								{
		 									if(d<=29&&d>0)
		 									{
		 										//valid date;
									 		}
											else 
											{
												gotoxy(column-15,row+2);
												cout<<"Invalid Date:( Enter again :)";
												gotoxy(210,52);
												getch();
												goto L;
											}
										}	
								 		else if(y%100==0)
										{
					 						if(d<=28 && d>0)
			 								{
			 									//valid date;
											}
											else 
											{
												gotoxy(column-15,row+2);
												cout<<"Invalid Date:( Enter again :)";
												gotoxy(210,52);
												getch();
												goto L;
											}
				 						}
				 						else if(y%4==0)
										{
					 						if(d<=29 && d>0)
	 										{
	 											//valid date;
											}
											else 
											{
												gotoxy(column-15,row+2);
												cout<<"Invalid Date:( Enter again :)";
												gotoxy(210,52);
												getch();
												goto L;
											} 
			 							}
			 							else
										{
										 	if(d<=28 && d>0)
	 										{
	 											//valid date;
											}
											else 
											{
												gotoxy(column-15,row+2);
												cout<<"Invalid Date:( Enter again :)";
												gotoxy(210,52);
												getch();
												goto L;
											}
				 						}
									}
								}
								else if( y>date.wYear && m<date.wMonth || m>=date.wMonth)
								{
									if(y%400==0)
		 							{
		 								if(d<=29&&d>0)
		 								{
		 									//valid date;
								 		}
										else 
										{
											gotoxy(column-15,row+2);
											cout<<"Invalid Date:( Enter again :)";
											gotoxy(210,52);
											getch();
											goto L;
										}
									}	
									else if(y%100==0)
									{
						 				if(d<=28 && d>0)
			 							{
			 								//valid;
										}
										else 
										{
											gotoxy(column-15,row+2);
											cout<<"Invalid Date:( Enter again :)";
											gotoxy(210,52);
											getch();
											goto L;
										}
						 			}
									else if(y%4==0)
									{
						 				if(d<=29 && d>0)
	 									{
	 										//valid date;
										}
										else 
										{
											gotoxy(column-15,row+2);
											cout<<"Invalid Date:( Enter again :)";
											gotoxy(210,52);
											getch();
											goto L;
										} 
			 						}
			 						else
									{
									 	if(d<=28 && d>0)
	 									{
	 										//valid date;
										}
										else 
										{
											gotoxy(column-15,row+2);
											cout<<"Invalid Date:( Enter again :)";
											gotoxy(210,52);
											getch();
											goto L;
										}
					 				}
								}
								
							}
						}
					}
				}
			}
		}
	}
store_date(&day,&month,&year);
}
/* **************************************************************************** */
/* ********************************** STORE DATE ****************************** */
/* **************************************************************************** */
void Variable :: store_date(string* day, string* month, string* year)
{
	days=day;
	months=month;
	years=year;
}
/* ****************************************************************************************** */
/* ****************************************************************************************** */
/* **************************************** TIME ******************************************** */
/* ****************************************************************************************** */
/* ****************************************************************************************** */
void Variable :: time()
{
	system("cls");
	Title();
	row=22;
	column=90;
	SYSTEMTIME date;
	GetSystemTime(&date);
	M:
	{
		system("cls");
		Title();
		row=22;
		column=90;
		int valid=0,sh,sm,b;
		/* ****************************************************************************** */
		/* **************************** STARTING TIME *********************************** */
		gotoxy(column-15,row);
		cout<<"Time(24 hrs): ";
		cin>>hour;
		gotoxy(column+1,row);
		cout<<":";	
		cin>>minute;
		stringstream hr(hour);
		hr>>sh;
		stringstream mi(minute);
		mi>>sm;
		if(strlen(hour.c_str())>2 || strlen(hour.c_str())<1)
		{
			gotoxy(column-15,row+2);
			cout<<"The max range for hour is 2 digit and min range is 1 . Enter again :)";
			gotoxy(210,52);
			getch();
			goto M;
		}
		else if(strlen(minute.c_str())>2 || strlen(minute.c_str())<1)
		{
			gotoxy(column-15,row+2);
			cout<<"The max range for minute is 2 digit and min range is 1 . Enter again :)";
			gotoxy(column-15,row+2);
			getch();
			goto M;
		}
		else 
		{
			for (b=0;b<strlen(hour.c_str());b++)
			{
				if(isdigit(hour[b]) && isdigit(minute[b]))
				{
					valid=1;
				}
				else
				{
					valid=0;
					break;
				}		
			}
			if(valid==0)
			{
				gotoxy(column-15,row+2);
				cout<<"Invalid Time Character:( Enter again :)";
				gotoxy(210,52);
				getch();
				goto M;
			}
			else
			{
				if(sh<=24 && sh>=0)
				{
					if(sm<=60 && sm>=00)
					{
						//valid time;
					}
					else
					{
						gotoxy(column-15,row+2);
						cout<<"Invalid Time:( Enter again :)";
						gotoxy(210,52);
						getch();
						goto M;
					}
				}
				else 
				{
					gotoxy(column-15,row+2);
					cout<<"Invalid Time:( Enter again :)";
					gotoxy(210,52);
					getch();
					goto M;
				}
			}
		}
	}
	store_time(&hour,&minute);
}
/* **************************************************************************** */
/* ********************************** STORE TIME ****************************** */
/* **************************************************************************** */
void Variable :: store_time(string* hour, string* minute)
{
	hours=hour;
	minutes=minute;
}

/* ******************************************************************************************** */
/* ******************************************************************************************** */
/* ************************************* PATIENT MENU ***************************************** */
/* ******************************************************************************************** */
/* ******************************************************************************************** */

void Variable :: Patient()
{
	system("cls");
	Title();
	//variables v;
	row=25;
	column=88;
	int ch;
	gotoxy(column,row);
	cout<<"1. Hospital Data";
	gotoxy(column,row+2);
	cout<<"2. Patient Bill And Report";
	gotoxy(column,row+4);
	cout<<"3. Exit";
	gotoxy(column,row+6);
	cout<<"4. Back";
	gotoxy(column,row+8);
	cin>>ch;
	switch(ch)
	{
		case 1:
			Hospital_data();
			break;
		case 2:
			Patient_data();
			break;
		case 3:
			exit(0);
			break;
		case 4:
			AccessScreen();
			break;
		default:
			gotoxy(column,row+8);
			cout<<"Invalid Input (Press Enter :)";
			gotoxy(210,52);
			getch();
			Patient();
			break;
	}
}
/* ******************************************************************************************** */
/* ******************************************************************************************** */
/* ************************************* HOSPITAL DATA ***************************************** */
/* ******************************************************************************************** */
/* ******************************************************************************************** */
void Variable :: Hospital_data()
{
	system("cls");
	Title();
	row=25;
	column=88;
	A:
	c=0;
	d=0;
	valid=0;
	int e;
	ofstream off;
	off.open("Hospital_info.txt",ios::app);
	off.close();
	if(off)
	{
		off.close();
		e=count_array_in_hospital_files();
		//getch();
		string new_Original_id[e];
		string new_Original_Hospital_Ful_Name[e];
		string new_Contact_no[e];
		string new_Hospital_city[e];
		string new_Specialisations[e];
		int charges;
		charges=1500;
		ifstream ins("Hospital_info.txt");
		for(i=0;i<e;i++)
		{
			ins>>new_Original_id[i];
			ins>>new_Original_Hospital_Ful_Name[i];
			ins>>new_Contact_no[i];
			ins>>new_Hospital_city[i];
			ins>>new_Specialisations[i];
		}
		back:
			//cin.ignore();
			system("cls");
			Title();
			Title_view_hospital_information();
			column=55;
			gotoxy(column+5,row+6);
			cout<<"|";
			gotoxy(column+8,row+6);
			cout<<"Id";
			gotoxy(column+14,row+6);
			cout<<"|";
			gotoxy(column+17,row+6);
			cout<<"Hospital Name";
			gotoxy(column+30,row+6);
			cout<<"|";
			gotoxy(column+34,row+6);
			cout<<"Contact No.";
			gotoxy(column+45,row+6);
			cout<<"|";
			gotoxy(column+50,row+6);
			cout<<"Address";
			gotoxy(column+58,row+6);
			cout<<"|";
			gotoxy(column+62,row+6);
			cout<<"Specialisations";
			gotoxy(column+82,row+6);
			cout<<"|";
			gotoxy(column+85,row+6);
			cout<<"CPB"; 
			gotoxy(column+92,row+6);
			cout<<"|";
			gotoxy(column-45,row+8);
			cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
			for(i=0;i<e;i++)
			{
				gotoxy(column+5,row+10);
				cout<<"|";
				gotoxy(column+6,row+10);
				cout<<new_Original_id[i];
				gotoxy(column+14,row+10);
				cout<<"|";
				gotoxy(column+16,row+10);
				cout<<new_Original_Hospital_Ful_Name[i];
				gotoxy(column+30,row+10);
				cout<<"|";
				gotoxy(column+32,row+10);
				cout<<new_Contact_no[i];
				gotoxy(column+45,row+10);
				cout<<"|";
				gotoxy(column+47,row+10);
				cout<<new_Hospital_city[i];
				gotoxy(column+58,row+10);
				cout<<"|";
				gotoxy(column+61,row+10);
				cout<<new_Specialisations[i];
				gotoxy(column+82,row+10);
				cout<<"|";
				gotoxy(column+83,row+10);
				cout<<"Rs.";
				gotoxy(column+87,row+10);
				cout<<charges;
				gotoxy(column+92,row+10);
				cout<<"|";
				gotoxy(column+5,row+10);
				charges=charges+100;
				row=row+2;
			}
			ins.close();
			gotoxy(210,52);
			getch();
			Patient();
	}
	else
	{
		system("cls");
		Title();
		Title_add_patient_report();
		gotoxy(column+45,row+6);
		cout<<"There is no data in Hospital_info file";
		gotoxy(column+46,row+8);
		cout<<"Press Enter to return back ";
		getch();
		system("cls");
		Patient();
	}
		
}

/* ******************************************************************************************** */
/* ******************************************************************************************** */
/* ************************************* PATIENT DATA ***************************************** */
/* ******************************************************************************************** */
/* ******************************************************************************************** */
void Variable :: Patient_data()
{
	system("cls");
	Title();
	A:
	int i;
	int c=0;
	int j;
	int d;
	int d1;
	
	ifstream infile("Patient_info.txt");
	d=count_array_in_patient_files();
	string new_id[d];
	string new_First_Name[d];
	string new_Last_Name[d];
	string new_Age[d];
	string new_Contact_no[d];
	string new_city[d];
	string new_day[d];
	string new_month[d];
	string new_year[d];
	string new_hour[d];
	string new_minute[d];
	for(i=0;i<d;i++)
	{
		cin.ignore();
		infile>>new_id[i];
		infile>>new_First_Name[i];
		infile>>new_Last_Name[i];
		infile>>new_Age[i];
		infile>>new_Contact_no[i];
		infile>>new_city[i];
		infile>>new_day[i];
		infile>>new_month[i];
		infile>>new_year[i];
		infile>>new_hour[i];
		infile>>new_minute[i];
	}
	ifstream in("Diagnosis_info.txt");
	d1=count_array_in_diagnosis_files();
	string new_ids[d1];
	string new_Blood_group[d1];
	string new_Hiv_test[d1];
	string new_Blood_pressure_test[d1];
	string new_Liver_test[d1];
	string new_Heart_test[d1];
	string new_Disease_Name[d1];
	string new_AD[d1];
	string new_Charge[d1];
	for(j=0;j<d1;j++)
	{
		in>>new_ids[j];
		in>>new_Blood_group[j];
		in>>new_Hiv_test[j];
		in>>new_Blood_pressure_test[j];
		in>>new_Liver_test[j];
		in>>new_Heart_test[j];
		in>>new_Disease_Name[j];
		in>>new_AD[j];
		in>>new_Charge[j];
	}
	back:
		cin.ignore();
		bool islogin=false;
		for(i=0;i<d;i++)
		{
			system("cls");
			Title();
			Title_view_patient_information();
			gotoxy(column+45,row+6);
			cout<<"Patient's ID: ";
			cin>>Id;
			if(strlen(Id.c_str())!=8)
			{
				gotoxy(column+45,row+8);
				cout<<"Invalid :( The range of Patient id is 8 :)";
				getch();
				goto back;
			}
			else
			{
				for(i=0;i<d;i++)
				{
					if(Id == new_id[i])
					{
						
						for(j=0;j<d1;j++)
						{
							if(Id == new_ids[j])
							{
								system("cls");
								Title();
								gotoxy(column+45,row+16);
								cout<<"Patient Record found (Press enter to view:)";
								getch();
								system("cls");
								Title();
								Title_view_patient_information();
								column=0;
								gotoxy(column+5,row+6);
								cout<<"Id";
								gotoxy(column+12,row+6);
								cout<<"|";
								gotoxy(column+22,row+6);
								cout<<"Name";
								gotoxy(column+36,row+6);
								cout<<"|";
								gotoxy(column+38,row+6);
								cout<<"Age";
								gotoxy(column+42,row+6);
								cout<<"|";
								gotoxy(column+44,row+6);
								cout<<"Contact No.";
								gotoxy(column+57,row+6);
								cout<<"|";
								gotoxy(column+60,row+6);
								cout<<"Address";
								gotoxy(column+69,row+6);
								cout<<"|";
								gotoxy(column+73,row+6);
								cout<<"Time";
								gotoxy(column+79,row+6);
								cout<<"|";
								gotoxy(column+84,row+6);
								cout<<"Date";
								gotoxy(column+90,row+6);
								cout<<"|";
								gotoxy(column+95,row+6);
								cout<<"BG";
								gotoxy(column+100,row+6);
								cout<<"|";
								gotoxy(column+105,row+6);
								cout<<"HIV Test";
								gotoxy(column+116,row+6);
								cout<<"|";
								gotoxy(column+121,row+6);
								cout<<"BP";
								gotoxy(column+126,row+6);
								cout<<"|";
								gotoxy(column+130,row+6);
								cout<<"Liver";
								gotoxy(column+140,row+6);
								cout<<"|";
								gotoxy(column+145,row+6);
								cout<<"Heart";
								gotoxy(column+154,row+6);
								cout<<"|";
								gotoxy(column+159,row+6);
								cout<<"Diseas";
								gotoxy(column+170,row+6);
								cout<<"|";
								gotoxy(column+175,row+6);
								cout<<"Alive/Dead";
								gotoxy(column+190,row+6);
								cout<<"|";
								gotoxy(column+195,row+6);
								cout<<"Charge";
								gotoxy(column,row+8);
								cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
								gotoxy(column+2,row+10);
								cout<<new_ids[j];
								gotoxy(column+12,row+10);
								cout<<"|";
								gotoxy(column+14,row+10);
								cout<<new_First_Name[i]<<" "<<new_Last_Name[i];
								gotoxy(column+36,row+10);
								cout<<"|";
								gotoxy(column+38,row+10);
								cout<<new_Age[i];
								gotoxy(column+42,row+10);
								cout<<"|";
								gotoxy(column+44,row+10);
								cout<<new_Contact_no[i];
								gotoxy(column+57,row+10);
								cout<<"|";
								gotoxy(column+60,row+10);
								cout<<new_city[i];
								gotoxy(column+69,row+10);
								cout<<"|";
								gotoxy(column+73,row+10);
								cout<<new_hour[i]<<":"<<new_minute[i];
								gotoxy(column+79,row+10);
								cout<<"|";
								gotoxy(column+80,row+10);
								cout<<new_day[i]<<"/"<<new_month[i]<<"/"<<new_year[i];
								gotoxy(column+90,row+10);
								cout<<"|";
								gotoxy(column+95,row+10);
								cout<<new_Blood_group[j];
								gotoxy(column+100,row+10);
								cout<<"|";
								gotoxy(column+105,row+10);
								cout<<new_Hiv_test[j];
								gotoxy(column+116,row+10);
								cout<<"|";
								gotoxy(column+117,row+10);
								cout<<new_Blood_pressure_test[j];
								gotoxy(column+126,row+10);
								cout<<"|";
								gotoxy(column+130,row+10);
								cout<<new_Liver_test[j];
								gotoxy(column+140,row+10);
								cout<<"|";
								gotoxy(column+144,row+10);
								cout<<new_Heart_test[j];
								gotoxy(column+154,row+10);
								cout<<"|";
								gotoxy(column+157,row+10);
								cout<<new_Disease_Name[j];
								gotoxy(column+170,row+10);
								cout<<"|";
								gotoxy(column+180,row+10);
								cout<<new_AD[j];
								gotoxy(column+190,row+10);
								cout<<"|";
								cout<<new_Charge[j];
								gotoxy(210,52);
								row=row+2;
								break;
							}
							else
							{
								islogin=false;
							}
							in>>new_ids[j];
							in>>new_Blood_group[j];
							in>>new_Hiv_test[j];
							in>>new_Blood_pressure_test[j];
							in>>new_Liver_test[j];
							in>>new_Heart_test[j];
							in>>new_Disease_Name[j];
							in>>new_AD[j];
							if(c==1)
							{
								break;
							}
							
						}
					}
					else
					{
						islogin=false;
					}
					infile>>new_id[i];
					infile>>new_First_Name[i];
					infile>>new_Last_Name[i];
					infile>>new_Age[i];
					infile>>new_Contact_no[i];
					infile>>new_city[i];
					infile>>new_day[i];
					infile>>new_month[i];
					infile>>new_year[i];
					infile>>new_hour[i];
					infile>>new_minute[i];
			}
		}
		if(c!=1)
		{
			gotoxy(column,row+2);
			cout<<"Invalid ID (Press Enter :)";
			gotoxy(210,52);
			getch();
			goto back;
		}
		else
		{
			getch();
			gotoxy(column+88,row+18);
			cout<<"This is the patient information :)";
			in.close();
			infile.close();
			
			getch();
			Patient_info();
		}
	}
}

/* ************************************************************************************ */
/* ************************************************************************************ */
/* ************************************* EXIT ***************************************** */
/* ************************************************************************************ */
/* ************************************************************************************ */

void Variable :: ex_it()//function to exit
{
	system("cls");
	Title();
	column=80;
	row=25;
	gotoxy(column,row);
	cout<<"THANK YOU FOR VISITING :)";
	gotoxy(210,52);
	getch();
	system("cls");
	exit(0);
	//gotoxy(210,52);	
}

/* ************************************************************************************ */
/* ************************************************************************************ */
/* **************************************** GOTOXY ************************************ */
/* ************************************************************************************ */
/* ************************************************************************************ */

void Variable :: gotoxy(short x, short y)
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

/* ************************************************************************************ */
/* ************************************************************************************ */
/* ************************************* Rough ***************************************** */
/* ************************************************************************************ */
/* ************************************************************************************ */

/* ******************************************************************************************* */
/* ********************************** SPECIALIZATION_ADD_DOCTOR ****************************** */
/* ******************************************************************************************* */
string Variable :: Specialization_add_doctor()
{
	system("cls");
	Title();
	Title_add_doctor();
	Specialisation=Specialization();
	return Specialisation;
}
/* ********************************************************************************************** */
/* ********************************** SPECIALIZATION_UPDATE_DOCTOR ****************************** */
/* ********************************************************************************************** */
string Variable :: Specialization_update_doctor()
{
	system("cls");
	Title();
	Title_update_doctor();
	Specialisation=Specialization();
	return Specialisation;
}
/* ******************************************************************************** */
/* ********************************** SPECIALISATION ****************************** */
/* ******************************************************************************** */
string Variable :: Specialization()
{
	system("cls");
	Title();
	int ch;
	column=45;
	row=15;
	gotoxy(column+40,row+6);
	cout<<"Qualification ( Choose :) :: ";
	gotoxy(column+40,row+8);
	cout<<"1. Medical Technologist";
	gotoxy(column+40,row+10);
	cout<<"2. Nursing";
	gotoxy(column+40,row+12);
	cout<<"3. DMS";
	gotoxy(column+40,row+14);
	cout<<"4. Radiotherapy";
	gotoxy(column+40,row+16);
	cout<<"5. Physiotherapy";
	gotoxy(column+40,row+18);
	cout<<"6. BPharm";
	gotoxy(column+40,row+20);
	cout<<"7. Medical Assistance";
	gotoxy(column+40,row+22);
	cin>>ch;
	switch(ch)
	{
		case 1:
			Specialisation="Mediacal_Technologist";
			break;
		case 2:
			Specialisation="Nursing";
			break;
		case 3:
			Specialisation="DMS";
			break;
		case 4:
			Specialisation="Radiotherapy";
			break;
		case 5:
			Specialisation="Physiotherapy";
			break;
		case 6:
			Specialisation="BPharm";
			break;
		case 7:
			Specialisation="Medical_Assitance";
			break;
		default:
			gotoxy(column+40,row+24);
			cout<<"Invalid (Press Enter To Return :)";
			gotoxy(210,52);
			getch();
			Specialization();
			break;
	}
	return Specialisation;
}
/* ************************************************************************************** */
/* ********************************** COUNT ARRAY IN FILES ****************************** */
/* ************************************************************************************** */
int Variable ::  count_array_in_files()
{
	int c=0,d;
	string line;
	ifstream in("Doctor_info.txt");
	while(getline(in,line))
	{
		c=c+1;
	}
	d=c/7;
	return d;
}
/* *********************************************************************************************** */
/* ********************************** COUNT ARRAY IN HOSPITAL FILES ****************************** */
/* *********************************************************************************************** */
int Variable :: count_array_in_hospital_files()
{
	int c=0,d;
	string line;
	ifstream in("Hospital_info.txt");
	while(getline(in,line))
	{
		c=c+1;
	}
	d=c/5;
	return d;
}
/* *********************************************************************************************** */
/* ********************************** COUNT ARRAY IN HOSPITAL FILES ****************************** */
/* *********************************************************************************************** */
int Variable :: count_array_in_staff_files()
{
	int c=0,d;
	string line;
	ifstream in("Staff_info.txt");
	while(getline(in,line))
	{
		c=c+1;
	}
	d=c/6;
	return d;
}
/* ********************************************************************************************** */
/* ********************************** COUNT ARRAY IN PATIENT FILES ****************************** */
/* ********************************************************************************************** */
int Variable ::  count_array_in_patient_files()
{
	int c=0,d;
	string line;
	ifstream in("Patient_info.txt");
	while(getline(in,line))
	{
		c=c+1;
	}
	d=c/11;
	return d;
}
/* ************************************************************************************************ */
/* ********************************** COUNT ARRAY IN DIAGNOSIS FILES ****************************** */
/* ************************************************************************************************ */
int Variable ::  count_array_in_diagnosis_files()
{
	int c=0,d;
	string line;
	ifstream in("Diagnosis_info.txt");
	while(getline(in,line))
	{
		c=c+1;
	}
	d=c/9;
	return d;
}
/* ******************************************************************************** */
/* ********************************** PASSWORD CHUNK ****************************** */
/* ******************************************************************************** */
string Variable :: Password_chunk()
{
	char Passwords[20];
	for(i=0;i<=20;i++)
	{
		ch=getch();
		if(ch==enter || ch==tab)
		{
			Passwords[i]='\0';
			break;
		}
		else if(ch==backspace)
		{
			if(i>0)
			{
				i--;
				printf("\b\b");
			}
		}
		else
		{
			Passwords[i++]=ch;
			cout<<"* \b";
		}
		i--;
	}
	return Passwords;
}
/* ********************************************************************************************* */
/* ********************************** STRING CONVERT TO UPPERCASE ****************************** */
/* ********************************************************************************************* */
string Variable :: convert(string s)
{
	for(int i=0;i<s.length();i++)
	{
		s[i]=toupper(s[i]);
	}
	return s;
}
