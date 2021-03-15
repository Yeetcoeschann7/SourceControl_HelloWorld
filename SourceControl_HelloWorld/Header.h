#include <iostream>
#include <iomanip>
#include <random>
#include <time.h>
#include <assert.h>
#include <array>
#include <string>
#include <optional>
#include <cstring>
#include <Windows.h> //Sleep function
#include <fstream> //File input/output
#include <vector>

using namespace std;

//*********************
// endFile            *
// Ends the program   *
//*********************
int endFile() {//method signature: whats going out, function name, whats coming in
	cout << endl << endl << setfill('-') << setw(100) << "-" << endl;//Ends program
	cout << "programmed by Jacob Lewis.\n";
	cout << "\npress enter to end the program... " << endl;
	cin.sync();
	cin.get();
	return 0;
}

