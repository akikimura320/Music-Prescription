// **********************************************************************************************
// * Author: Karsten Masesane *
// * Date : 2024 - 06 - 27 *
// * Description : "A simple C++ console application to register drivers *
// * using prompted information and displays it."*
// **********************************************************************************************

#include <iostream>
#include <string>

using namespace std;

int main() {

	int driverAge;
	string driverVehicle;
	string driverName;
	string driverNameString;
	int vehicleHorsepower;
	int vehicleWeight;
	string vehicleEngine;
	int vehicleTorque{};
	string vehicleMake;
	string vehicleModel;
	int vehicleYear;
	int vehicleRPM{};
	string driverDescription;
	// Variables for driver information
	  


	vehicleHorsepower = (vehicleTorque * vehicleRPM) / 5252;
    vehicleRPM = (1 <= 10000);
    vehicleTorque = (1 <= 1500);
    vehicleWeight = (500 <= 5000);

	// declaring and initializing an array of size 10
	string vehicleArr[11] = {"BMW E82", "Nissan 400Z", "Toyota Supra MK5", "Ford Mustang RTR", "Chevrolet Corvette C6", "Mercedes-Benz R230 SL", "Toyota GT86", "Nissan 180SX", "Toyota Corolla", "Ford Mustang GT", "BMW E36"}; 
	string driversArr[10] = {"Petyo Radichev", "George Christoforou", "Matt Coffman", "Adam LZ", "James Deane", "Conor Shanahan", "Joao Barion", "Chris Forsberg", "Ryan Tuerck", "Fredric Aasbo"};

	cout << "Enter the driver's name: ";
	getline(cin, driverName);

    if (driverName == "Adam LZ") {
		vehicleMake = "BMW";
		vehicleModel = "E36";
		vehicleHorsepower = 1200;
		vehicleTorque = 1220;
		vehicleWeight = 1250;	
		vehicleRPM = 9000;
		vehicleEngine = "2JZ-GTE";
		vehicleYear = 1995;
		driverAge = 28;
		driverDescription = "Adam LZ is a professional drifter and YouTuber known for his impressive car builds and drifting skills. He has a massive following on social media and is recognized for his contributions to the automotive community.";

	} else if (driverName == "Petyo Radichev") {
		vehicleMake = "Mercedes-Benz";
		vehicleModel = "R230 SL";
		vehicleHorsepower = 800;
		vehicleTorque = 949;
		vehicleWeight = 1500;	
		vehicleRPM = 8500;
		vehicleEngine = "Supercharged LS3 V8";
		vehicleYear = 2005;
		driverAge = 30;
		driverDescription = "Petyo Radichev is a Bulgarian professional drifter and automotive enthusiast. He is known for his exceptional drifting skills and has competed in various international drifting competitions. Petyo is also recognized for his car builds and modifications, often showcasing high-performance vehicles on his social media platforms.";

	} else if (driverName == "George Christoforou") {
		vehicleMake = "BMW";
		vehicleModel = "E82";
		vehicleHorsepower = 1000;
		vehicleTorque = 1085;
		vehicleWeight = 1300;
		vehicleRPM = 9000;
		vehicleEngine = "S50B32";
		vehicleYear = 2008;
		driverAge = 32;
		driverDescription = "George Christoforou is a professional drifter and automotive enthusiast known for his impressive driving skills and car builds. He has competed in various drifting competitions and is recognized for his contributions to the drifting community.";

	} else if (driverName == "Matt Coffman") {
		vehicleMake = "Nissan";
		vehicleModel = "180SX";
		vehicleHorsepower = 950;
		vehicleTorque = 1017;
		vehicleWeight = 1200;
		vehicleRPM = 9500;
		vehicleEngine = "LS V8";
		vehicleYear = 1992;
		driverAge = 29;
		driverDescription = "Matt Coffman is a professional drifter and automotive enthusiast known for his exceptional driving skills and car builds. He has competed in various drifting competitions and is recognized for his contributions to the drifting community.";
	
	} else if (driverName == "James Deane") {
		vehicleMake = "Ford";
		vehicleModel = "Mustang RTR";
		vehicleHorsepower = 1100;
		vehicleTorque = 1152;
		vehicleWeight = 1474;
		vehicleRPM = 9200;
		vehicleEngine = "Roush Yates V8";
		vehicleYear = 2020;
		driverAge = 33;
		driverDescription = "James Deane is a professional drifter from Ireland, widely regarded as one of the best drifters in the world. He has won multiple championships, including the Formula Drift Pro Championship, and is known for his smooth driving style and technical skills.";

	} else if (driverName == "Conor Shanahan") {
		vehicleMake = "Toyota";
		vehicleModel = "GT86";
		vehicleHorsepower = 900;
		vehicleTorque = 881;
		vehicleWeight = 1250;
		vehicleRPM = 8800;
		vehicleEngine = "2JZ-GTE";
		vehicleYear = 2013;
		driverAge = 27;
		driverDescription = "Conor Shanahan is a professional drifter and automotive enthusiast known for his impressive driving skills and car builds. He has competed in various drifting competitions and is recognized for his contributions to the drifting community.";

	} else if (driverName == "Joao Barion") {
		vehicleMake = "Ford";
		vehicleModel = "Mustang GT";
		vehicleHorsepower = 1050;
		vehicleTorque = 800;
		vehicleWeight = 1450;
		vehicleRPM = 9300;
		vehicleEngine = "Coyote V8";
		vehicleYear = 2015;
		driverAge = 31;
		driverDescription = "Joao Barion is a professional drifter and automotive enthusiast known for his impressive driving skills and car builds. He has competed in various drifting competitions and is recognized for his contributions to the drifting community.";

	} else if (driverName == "Chris Forsberg") {
		vehicleMake = "Nissan";
		vehicleModel = "400Z";
		vehicleHorsepower = 1300;
		vehicleTorque = 1220;
		vehicleWeight = 1400;
		vehicleRPM = 9400;
		vehicleEngine = "VR38DETT";
		vehicleYear = 2022;
		driverAge = 34;
		driverDescription = "Chris Forsberg is a professional drifter and three-time Formula Drift champion. He is known for his aggressive driving style and has been a prominent figure in the drifting community for many years.";

	} else if (driverName == "Ryan Tuerck") {
		vehicleMake = "Toyota";
		vehicleModel = "Corolla";
		vehicleHorsepower = 1200;
		vehicleTorque = 1152;
		vehicleWeight = 1150;
		vehicleRPM = 8700;	
		vehicleEngine = "B58B30";
		vehicleYear = 2020;
		driverAge = 36;
		driverDescription = "Ryan Tuerck is a professional drifter and automotive enthusiast known for his impressive driving skills and car builds. He has competed in various drifting competitions and is recognized for his contributions to the drifting community.";

	} else if (driverName == "Fredric Aasbo") {
		vehicleMake = "Toyota";
		vehicleModel = "Supra MK5";
		vehicleHorsepower = 1150;
		vehicleTorque = 1085;	
		vehicleWeight = 1350;
		vehicleRPM = 9100;
		vehicleEngine = "B58B30";
		vehicleYear = 2021;
		driverAge = 35;
		driverDescription = "Fredric Aasbo is a Norwegian professional drifter and the 2015 Formula Drift champion. He is known for his precise driving style and has been a key figure in the drifting community for several years.";

	} else {
		cout << "Driver not found in the database.\n";
		return 1; // Exit the program if driver not found

	}

	// Display the collected driver information
	
	cout << "Displaying Driver Information:\n";
    cout << "Driver's Name: " << driverName << "\n";
    cout << "Driver's Age: " << driverAge << "\n";
   	cout << "Vehicle Model: " << vehicleModel << "\n";
    cout << "Vehicle Horsepower: " << vehicleHorsepower << " HP\n";
    cout << "Vehicle Torque: " << vehicleTorque << " nm\n";
    cout << "Vehicle Weight: " << vehicleWeight << " kgs\n";
	 cout << "Driver's Description: " << driverDescription << "\n";
	cout << "Vehicle Engine: " << vehicleEngine << "\n";
	cout << "Vehicle Year: " << vehicleYear << "\n";

	return 0;
    



	
	
}

