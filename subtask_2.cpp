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
