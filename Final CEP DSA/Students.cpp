#include "Students.h"

void setStudents(ifstream& inputFile, int numOfStudentsPerDay, int day)
{
	for (int i = 0; i < numOfStudentsPerDay; i++)
	{
		inputFile >> s[day][i].enterTime >> s[day][i].firstName >> s[day][i].lastName >> s[day][i].numQuestions;
		s[day][i].numAnswered = 0;
		s[day][i].count = 0;
		s[day][i].number = i;
	}
}

bool happyORfrustrated(int questions, int answers)
{
	double percentage = (double)answers/questions;
	if (percentage > 0.75)
	{
		return true;		//happy
	}
	else
	{
		return false;		//frustrated
	}
}