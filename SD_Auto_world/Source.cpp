#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include <iomanip>
#include <conio.h>


using namespace std;

void OptionNumberadmin();
void Register();
void viewRegister();
void addServicesAndBills();	
void ViewaddServices();
void addhistoryreport();
void viewaddreports();
void exitProgram();
									
//User login in Main method
int main() {
	string username;									//Username
	string password;									//Password
	bool LoginSuccess = false;							//boolean expression for login
	int attempt = 1;

	cout << "\t\t******************** \\\\______ SD_AUTO_WORLD ______// ***********************"              << endl;
	cout << "\t*********************** \\\\______ Future_of_Vehicle_Repairs ______// ***********************" << endl;
	cout << "\n";
	cout << "\t\t*************************** \\\\___WELCOME___// ******************************"              << endl;
	cout << "\n";
	cout << "___ Admin Login Page ___"                                                                        << endl;
	cout << "" << endl;
	cout << "\t\t        SD AUTO WORLD       "                                                                << endl;
	cout << "\t\t * * * * * * * * * * * * * * *  "                                                            << endl;

	do {
		cout << "\tUsername: ";                                  // (enterd username)
		cin >> username;
		cout << "\n";                                     
		cout << "\tPassword: ";                                  // (enterd Password)
		cin >> password;    
		cout << "\n";                             

		cout << "" << endl;							  

		if ((username == "Admin" && password == "1234")) {
			system("cls");
			cout << endl << endl << endl;
			cout << "\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
			cout << "\t\t\t\t    _ _ _ _ _ _ Welcome Admin  _ _ _ _ _ _"                   << endl;
			cout << "Successfully Logged In!\n"                                            << endl;
			cout << ""                                                                     << endl;
			system("pause");
			LoginSuccess = true;
			system("cls");
			OptionNumberadmin();						//if password and username are correct, user will be directed to main menu
		}
		

		else {
			system("cls");
			cout << "\t\t******************** \\\\______ SD_AUTO_WORLD ______// ***********************"               << endl;
			cout << "\t*********************** \\\\______ Future_of_Vehicle_Repairs ______// ***********************"  << endl;
			cout << "\n";
			cout << "\t\t*************************** \\\\___WELCOME___// ******************************"               << endl;
			cout << "\n";
			cout << "___ Admin Login Page ___"                                                                         << endl;
			cout << ""                                                                                                 << endl;
			cout << "LOGIN\n" << "_ _ _ _ "                                                                            << endl;
			cout << "\t\tInvalid Username and Password    " << 3 - attempt << " Attempt(s) left "                      << endl;
			cout << ""                                                                                                 << endl;

			++attempt;

		}

	} while (!LoginSuccess && attempt <= 3);	    	//if user does not login within 3 attempts, program will be closed.
	if (attempt = 3) {
		cout << "Application Closed" << endl;
		exit(0);
	}
}

//Choose options for user
void OptionNumberadmin() {
	int choose;
	system("cls");
	cout << "\t\t******************** \\\\______ SD_AUTO_WORLD ______// ***********************"                        << endl;
	cout << "\t*********************** \\\\______ Future_of_Vehicle_Repairs ______// ***********************"           << endl;
	cout << "\n";
	cout << "\t\t*************************** \\\\___WELCOME___// ******************************"                        << endl;
	cout << "\n";
	cout << "" << endl;
	cout << "\t\t\t\tADMIN MENU\n" << "\t\t\t\t_ _ _ _ _ _ _"          << endl;
	cout << "" << endl;
	cout << "\t\t\t\t1. Vehicle Registration"                          << endl;							//register vehicles and save to txt file
	cout << "" << endl;
	cout << "\t\t\t\t2. View All Registerd Vehicles"                   << endl;						    //view registered vehicle details
	cout << "" << endl;
	cout << "\t\t\t\t3. Calculate Bill "                               << endl;				            //add service list and calculate Bill
	cout << "" << endl;
	cout << "\t\t\t\t4. View All Bills"                                << endl;						    //view servicess and bills added for customers
	cout << "" << endl;
	cout << "\t\t\t\t5. Add Vehicle History Report"                    << endl;			        	    //add history report for vehicle					
	cout << "" << endl;
	cout << "\t\t\t\t6. Search Vehicle History Report"                 << endl;			        	    //Search history reports of vehicles		
	cout << "" << endl;
	cout << "\t\t\t\t7. Exit program"                                  << endl;							//Exit from the program
	cout << "" << endl;

	cout << "\tEnter Option: ";
	cin >> choose;
	cout << "" << endl;
	switch (choose) {
	case 1:
		Register();											                                        	// Calling fucntion to Register vehicle
		system("pause");
		system("cls");
		break;
	
	case 2:
		viewRegister();										                                         	// Calling function to view details in Registered vehicles
		system("pause");
		system("cls");
		break;
	
	case 3:
		addServicesAndBills();											                                // Calling function to add Services and calculate bill that customer used
		system("pause");
		system("cls");
		break;
	
	case 4:
		ViewaddServices();									                                        	// Calling function to view Added customer services and bills
		system("pause");
		system("cls");
		break;
														
	case 5:
		addhistoryreport();											                                   // Calling function add vehicle history reports with details
		system("pause");
		system("cls");
		break;

	case 6:
		viewaddreports();									                                   		   // Calling function to view vehicle history reports with details
		system("pause"); 
		system("cls");
		break;


	case 7:
		exitProgram();											                                       // Calling function to exit program
		system("pause");
		system("cls");
		break;
		
	default:
		                                                                                               //Display of Error Message
		std::cout << "Enter Valid Input OR Log again" << '\n';
		std::cin.get();
		system("pause");
		system("cls");
		OptionNumberadmin();
		break;							                                       	                       //Calling the Function to reenter the correct input 
		
	}
};

//Register vehicle details
void Register() {
	system("cls");
	std::string vehiclenum, manufacture, country, owner, km, brd, year;
	cout << "\t\t******************** \\\\______ SD_AUTO_WORLD ______// ***********************"                   << endl;
	cout << "\t*********************** \\\\______ Future_of_Vehicle_Repairs ______// ***********************"      << endl;
	cout << "\n";
	cout << "\t\t*************************** \\\\___WELCOME___// ******************************"                   << endl;
	cout << "\n";
	cout << ""                                                                                                     << endl;
	cout << "\t\t\t\t            Register Vehicles\n" << "\t\t\t\t            _ _ _ _ _ _ _ _ _ "                  << endl;
	cout << ""                                                                                                     << endl;

	ofstream reg("D:\\SD AUTO WORLD\\Database\\Vehicle_Register.txt", ios::app);

	if (reg.is_open()) {

		//Collect Vehicle Details
		std::cin.get();
		reg << "" << endl;
		reg << "_______________________________________________________ " << brd << endl;
		cout << "Enter vehicle number: ";
		getline(std::cin, vehiclenum);
		reg << "Vehicle number: " << vehiclenum << endl;
		cout << "Enter manufacturer name: ";
		getline(std::cin, manufacture);
		reg << "Manufacturer Name: " << manufacture << endl;
		cout << "Enter country: ";
		getline(std::cin, country);
		reg << "Manufactured country: " << country << endl;
		cout << "Manufactured year: ";

		std::cin >> year;
		reg << "Manufactured Year: " << year << endl;
		std::cin.get();
		cout << "Mileage: ";
		getline(std::cin, km);
		reg << "Vehicle number: " << km << endl;
		cout << "Enter Owner Name: ";
		getline(std::cin, owner);
		reg << "Owner Name: " << owner << endl;
		reg << "_______________________________________________________ " << brd << endl;
		reg << "" << endl;
		reg.close();

		cout << "" << endl;

		cout << "\t\t - - Vehicle Registered! Successfully - - " << endl;
	}

	else {
		cout << "File not found" << endl;
		}

	system("pause");
	cout << "" << endl;
	OptionNumberadmin();										//function calling for After vehicle registration, user will be directed to main menu

};

//View Registered vehicles
void viewRegister()
{
	system("cls");
	cout << "\t\t******************** \\\\______ SD_AUTO_WORLD ______// ***********************"                   << endl;
	cout << "\t*********************** \\\\______ Future_of_Vehicle_Repairs ______// ***********************"      << endl;
	cout << "\n";
	cout << "\t\t*************************** \\\\___WELCOME___// ******************************"                   << endl;
	cout << "\n";
	cout << ""                                                                                                     << endl;
	cout << "\t\t\t\t Registered Vehicle Details\n" << "\t\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _"                     << endl;
	system("pause");
	cout << "" << endl;
	std::string line_;
	//Reading of File
	ifstream reg("D:\\SD AUTO WORLD\\Database\\Vehicle_Register.txt");
	if (reg.is_open()) {
		while (getline(reg, line_)) {
			std::cout << line_ << '\n';
		}
		reg.close();
	}
	else
		//Display of Error Message
		std::cout << "file not found" << '\n';
	std::cin.get();
	system("pause");
	OptionNumberadmin();								  	     //After viewing register details, user will directed to main menu
}

//Add services and bill for customers
void addServicesAndBills()
{
	system("cls");
	cout << "\t\t******************** \\\\______ SD_AUTO_WORLD ______// ***********************" << endl;
	cout << "\t*********************** \\\\______ Future_of_Vehicle_Repairs ______// ***********************" << endl;
	cout << "\n";
	cout << "\t\t*************************** \\\\___WELCOME___// ******************************" << endl;
	cout << "\n";
	cout << "" << endl;

	cout << "\t\t\t\t\t   Add service details \n" << endl;

	// Price Chart
	cout << "\t\t__________________________ \\\\___Price_List___// ____________________________" << endl;
	cout << "\n";
	cout << "____________________________________________________________________________________________________" << endl;
	cout << "    Service Name                             Service Code                                    Price  " << endl;
	cout << "____________________________________________________________________________________________________" << endl;
	cout << "\n";
	cout << "    Oil Change                                 ID0001                                       LKR 2000" << endl;
	cout << "    Brake Checking                             ID0002                                       LKR 3000" << endl;
	cout << "    Battery Checking                           ID0003                                       LKR 4000" << endl;
	cout << "    Interior Washing                           ID0004                                       LKR 5000" << endl;
	cout << "    Exterior Washing                           ID0005                                       LKR 7000" << endl;
	cout << "    Engine Checking                            ID0006                                       LKR 7000" << endl;
	cout << "    Eco Check                                  ID0007                                       LKR 8000" << endl;
	cout << "    Full body Paint (Bike)                     ID0008                                       LKR 8000" << endl;
	cout << "    Full body Paint (Car)                      ID0009                                       LKR 15000" << endl;
	cout << "    Full body Paint (Van)                      ID0010                                       LKR 25000" << endl;
	cout << "    Engine Tune Up                             ID0011                                       LKR 20000" << endl;
	cout << "    Full Service (Bike)                        ID0012                                       LKR 2000" << endl;
	cout << "    Full Service (Three-Wheel)                 ID0013                                       LKR 5000" << endl;
	cout << "    Full Service (Car)                         ID0014                                       LKR 8000" << endl;
	cout << "    Full Service (Van)                         ID0015                                       LKR 10000" << endl;
	cout << "    Full Repair (Bike)                         ID0016                                       LKR 10000" << endl;
	cout << "    Full Repair (Three-Wheel)                  ID0017                                       LKR 50000" << endl;
	cout << "    Full Repair (Car)                          ID0018                                       LKR 100000" << endl;
	cout << "    Full Repair (Van)                          ID0019                                       LKR 250000" << endl;
	cout << "    Headlight replacement (1)                  ID0020                                       LKR 5000" << endl;
	cout << "\n";
	cout << "******************************************************************************************************" << endl;


	cout << "" << endl;
	int n;
	std::string service, Quantity, Code, price, vnum, own, km, worker, brd;
	ifstream ser("D:\\SD AUTO WORLD\\Database\\ServiceList_and_Bill.txt");
	if (ser.is_open()) {

		fstream ser("D:\\SD AUTO WORLD\\Database\\ServiceList_and_Bill.txt", ios::app);
		std::cin.get();
		cout << "Enter vehicle number: ";
		getline(std::cin, vnum);
		cout << "Enter Name of the Owner: ";
		getline(std::cin, own);
		cout << "Enter Mileage: ";
		getline(std::cin, km);
		cout << "Handle by (Worker name): ";
		getline(std::cin, worker);

		ser << "" << endl;
		ser << "_______________________________________________________ " << brd << endl;
		ser << "Vehicle number: " << vnum << endl;
		ser << "Owner name: " << own << endl;
		ser << "Mileage: " << km << endl;
		ser << "Handle by: " << worker << endl;
		ser << "_______________________________________________________ " << brd << endl;
		ser.close();

		do {
			cout << "No of services to be added : ";
			cin >> n;
			cout << "" << endl;
			if (n > 30)
			{
				system("cls");
				cout << "\n\t\t\t*******You can Enter 30 Services AT ONCE*********\n " << endl;
				system("pause");
			}

		} while (n>30);

		double totalCost = 0.0;                                                   
		for (int c = 0; c < n; ++c) {


		}

		cout << "" << endl;
		for (int c = 0; c < n; c++) {
			fstream ser("D:\\SD AUTO WORLD\\Database\\ServiceList_and_Bill.txt", ios::app);
			std::cin.get();
			cout << "Enter the Service : ";
			getline(std::cin, service);
			cout << "Enter the Service Code : ";
			getline(std::cin, Code);
			cout << "Quantity : ";
			getline(std::cin, Quantity);
			cout << "Total Price : LKR. ";
			cin >> price;

			cout << "" << endl;
			ser << "service: " << service << endl;
			ser << "Code: " << Code << endl;
			ser << "Quantity: " << Quantity << endl;
			ser << "Price: " << price << endl;
			ser << "" << endl;

			ser.close();

			totalCost += std::stod(price);                            // Calculate Total Balance

		}

		fstream ser1("D:\\SD AUTO WORLD\\Database\\ServiceList_and_Bill.txt", ios::app);

		cout << "Total Balance : " << totalCost << " LKR" << endl;
		ser1 << "Total Balance : " << totalCost << " LKR" << endl;
		ser1 << "_______________________________________________________ " << brd << endl;
		cout << "" << endl;

		cout << "\n";

		cout << "Bill Calculate successfully" << endl;

		ser1.close();

		system("pause");
		system("cls");

	}

	else

	{

		cout << "File is not found to add new Services" << endl;
		system("pause");

	}

	OptionNumberadmin();										//function calling for After entering service details user will be directed to main menu
}

//View services and bills for customers
void ViewaddServices() {
	system("cls");
	cout << "\t\t******************** \\\\______ SD_AUTO_WORLD ______// ***********************"                << endl;
	cout << "\t*********************** \\\\______ Future_of_Vehicle_Repairs ______// ***********************"   << endl;
	cout << "\n";
	cout << "\t\t*************************** \\\\___WELCOME___// ******************************"                << endl;
	cout << "\n";
	cout << ""                                                                                                  << endl;
	cout << "\t\t\t\t      View Added services and Bills\n" << "\t\t\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"  << endl;
	cout << "" << endl;
	std::string line_;
	cout << "" << endl;
	cout << " HISTORY\n"  << endl;
	cout << "" << endl;
	ifstream serv("D:\\SD AUTO WORLD\\Database\\ServiceList_and_Bill.txt");
	if (serv.is_open()) {
		while (getline(serv, line_)) {
			std::cout << line_ << '\n';
		}
		serv.close();
	}
	else
		//Display of Error Message
		std::cout << "file not found" << '\n';
	std::cin.get();
	system("pause");
	OptionNumberadmin();									//function calling for After viewing service details and bills, user will be directed to main menu

}

//Vehicle History detailed report
void addhistoryreport() {
	ofstream rep;
	std::string vnum, own, km, phone, brd, service, date, note, price;
	rep.open("D:\\SD AUTO WORLD\\Database\\Owner_Details.txt", std::ios_base::app);
	system("cls");
	cout << "\t\t******************** \\\\______ SD_AUTO_WORLD ______// ***********************"                     << endl;
	cout << "\t*********************** \\\\______ Future_of_Vehicle_Repairs ______// ***********************"        << endl;
	cout << "\n";
	cout << "\t\t*************************** \\\\___WELCOME___// ******************************"                     << endl;
	cout << "\n";
	cout << ""                                                                                                       << endl;
	cout << "\t\t\t\t         History Reports of Vehicles\n" << "\t\t\t\t     _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "  << endl;
	cout << ""                                                                                                       << endl;
	cout << " ****Enter Vehicle Number Without Space****\n"                                                          << endl;
	cout << ""                                                                                                       << endl;
	int n;
	

	if (rep.is_open()) {

		std::cin.get();
		cout << "Enter vehicle number: ";
		getline(std::cin, vnum);
		cout << "Enter Name of the Owner: ";
		getline(std::cin, own);
		cout << "Enter the phone number of the Owner: ";
		getline(std::cin, phone);
		cout << "Enter Mileage: ";
		getline(std::cin, km);

		rep << "_______________________________________________________ " << brd << endl;
		rep << "Vehicle number: " << vnum << endl;
		rep << "Customer name: " << own << endl;
		rep << "Customer Phone Number: " << phone << endl;
		rep << "Mileage: " << km << endl;
		rep << "_______________________________________________________ " << brd << endl;
		rep << "" << endl;
		rep.close();

		do {
			cout << "Enetr No of services Done: ";
			cin >> n;
			cout << "" << endl;
			if (n > 30)
			{
				system("cls");
				cout << "\n\t\t\t*******You can Enter 30 Services AT ONCE*********\n " << endl;
				system("pause");
			}

		} while (n>30);


	    	cout << "" << endl;
		 {

			   rep.open( vnum + ".txt", std::ios_base::app);
			   std::cin.get();
			   cout <<  vnum << "___" << own << "___" << km << endl;
			   cout << "***************************************" << endl;
			   cout <<  ""   << endl;
		   	   cout << "Enter the Service : ";
			   getline(std::cin, service);
			   cout << "Enter the Date : ";
			   getline(std::cin, date);
			   cout << "Description : ";
			   getline(std::cin, note);
			   cout << "Next Service Date : ";
			   cin >> date;
			   cout << ""                                       << endl;
			   rep << vnum << "___" << own << "___" << km       << endl;
			   rep << "***************************************" << endl;
			   rep << "Service: " << service                    << endl;
			   rep << "Date: " << date                          << endl;
			   rep << "Description: " << note                   << endl;
			   rep << "Next Service Date: " << date             << endl;
			   rep << ""                                        << endl;
			   rep << ""                                        << endl;
			   rep.close();
		}


		cout << "\t\t - - Vehicle History Report Completed! - - " << endl;
	}

	else {
		cout << "File not found" << endl;
	}

	system("pause");
	cout << "" << endl;
	OptionNumberadmin();										//function calling for After adding history report, user will be directed to main menu

		
	
};


//Search vehicle history reports
void viewaddreports()
{
	system("cls");
	cout << "\t\t******************** \\\\______ SD_AUTO_WORLD ______// ***********************"               << endl;
	cout << "\t*********************** \\\\______ Future_of_Vehicle_Repairs ______// ***********************"  << endl;
	cout << "\n";
	cout << "\t\t*************************** \\\\___WELCOME___// ******************************"               << endl;
	cout << "\n";
	cout << "" << endl;
	cout << "\t\t\t\t       View Vehicle History Reports\n" << "\t\t\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
	cout << "" << endl;
	cout << " ****Enter Vehicle Number Without Space****\n"                                                    << endl;
	std::string vnum, line_;
	cout << "" << endl;
	//Reading of File

	cout << "\tEnter Vehicle Number: ";
	cin  >> vnum;

	cout << "" << endl;

	ifstream rep;
	rep.open(vnum + ".txt");                                                       // open txt file according to vehicle number

	if (rep.is_open()) {


		while (getline(rep, line_)) {
			std::cout << line_ << '\n';
		}
		rep.close();
	}
	else
		//Display of Error Message
		std::cout << "file not found" << '\n';
	std::cin.get();
	system("pause");
	OptionNumberadmin();								  	     //After viewing register details, user will directed to main menu

}



//exit program
void exitProgram(){

	system("cls");
	string in;
	cout << "EXIT\n" << "_ _ _ _" << endl;
	cout << "" << endl;
	cout << "\t\t\t\t|         * CONFIRM, DO YOU WANT TO EXIT *	|" << endl;
	cout << "\t\t\t\t|                   [ Y / N ]			|" << endl;
	cin >> in;
	if (in == "Y")
	{
		exit(0);
	}
	else if
		(in == "N")
	{
		system("cls");
		OptionNumberadmin();
	}
	else
	{
		cout << "\n\t\t\t\t\t   ***   Invalid Input. Try again   *** \n" << endl;
		system("pause");
		exitProgram();
	}
};
