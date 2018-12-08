/*
 * Author: Chris Stein
 * CIS150 Fall 2018
 * Date Created: 12/6/2018
 * Date Modified: 
 * Purpose: 
 */

#include "..\header\Student.h"
#include <fstream>
#include <iostream>
using namespace std;

int main() {

	ifstream inputFile;
	inputFile.open("studentData.txt");

	string text;
	while (!inputFile.eof()) {
		inputFile >> text;
		cout << text;
	}

	inputFile.close();

	system("pause");
	return 0;
}