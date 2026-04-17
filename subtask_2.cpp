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
