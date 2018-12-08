#include ".\header\Student.h"
#include <iostream>

Student::Student() {

}

Student::~Student() {
	cout << "Then end!" << endl;
}

string Student::getName() const {
	return name;
}

int Student::getGrade() const {
	return grades;
}

float Student::average() const {
	return 0;
}

void Student::setName(string nm = "no name") {
	name = nm;
}

void Student::setGrade(int gr = -1) {
	grades = gr;
}

void Student::findGrade(vector<Student>&){

}