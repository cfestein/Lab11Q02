#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>
using namespace std;

class Student {

public:
	Student();	// Constructor
	~Student(); // Destructor

	string getName() const;
	int getGrade() const;
	float average() const;

	void setName(string);
	void setGrade(int);

	void findGrade(vector<Student>&);

private:
	string name;
	int grades;
	//vector<int> grades;
}; 
#endif // !STUDENT_H