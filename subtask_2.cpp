// 202431045
#include <iostream>
using namespace std;

int main() {
    int tempnum1;
	int tempnum2;
	int tempnum3;
	
	// main menu and user guide 
	cout <<" ________________________________________________________________________\n";
	cout <<" MAGWINYA   MAGIC   FRYING   SYSTEM\n";
	cout <<" ________________________________________________________________________\n";
	cout <<" USER GUIDE:\n";
	cout <<"Please enter three readings respectively, note that readings should be entered five minutes apart:\n";
	cout <<"This system only accepts whole numbers DO NOT USE FLOATING POINT NUMBERS:\n";
	cout <<" You may proceed...\n";
	
	
	// prompting te user to enter temperatures as per the user guide
	cout <<" CURRENT TIME :   00:00\n";  // waiting time starting point in hours and minutes format
	cout <<"Please enter the first temperature reading\n";
	cin  >> tempnum1;
	
	cout <<"PlEASE WAIT FIVE MINUTES BEFORE RECORDING YOUR READING... \n";
	cout <<" CURRENT TIME :   00:05\n";  // waiting time after entering the first temperature in hours and minutes format
	cout <<"Please enter the second temperature reading\n";
	cin  >> tempnum2;	
	
	//calculating tempeature difference
    int newtemp1 = tempnum2 - tempnum1;
    int newtemp2 = tempnum3 - tempnum2;

    // Check first temperature increase
    if (newtemp1 > 50) {
        cout << "CAUTION !! TEMPERATURE TOO HIGH: LOWER THE HEAT!\n";
    }

    // Check second temperature increase
    if (newtemp2 > 50) {
        cout << "LOWER HEAT LEVELS!\n";
    }
    
    // prompting the user to enetr third temperature reading
    cout <<"PlEASE WAIT FIVE MINUTES BEFORE RECORDING YOUR READING...  \n";
	cout <<" CURRENT TIME :   00:10\n";  // waiting time after entering the first temperature in hours and minutes format
	cout <<"Please enter the third temperature reading\n";
	cin  >> tempnum3;	
	

    // Final temperature validation
    if (tempnum3 >= 150 && tempnum3 <= 190) {
        cout << "YOU CAN NOW FRY :).\n";
    } else {
        cout << "OL IS NOT READY TO FRY  :(.\n";

    return 0;
}

