#include "LDM.h"

void setLaptops(ifstream& inputFile, int totalLaps)
{
	//reading Laptops data form file
	int lapSerial;
	for (int i = 0; i < totalLaps; i++)
	{
		inputFile >> lapSerial;
		lap.push(lapSerial);
	}
}

int assignLaptop()
{
	int lapSerial;
	lapSerial = lap.top();
	lap.pop();
	return lapSerial;
}

void returnLaptop(Student s, int time)
{
	Time t;
	if (happyORfrustrated(s.numQuestions, s.numAnswered) == 1)
	{
		cout << t.convertTime(time) << "\t" << s.firstName << " " << s.lastName << "  has returned laptop " << s.lapSerial << " and went home HAPPY."<< endl;
		lap.push(s.lapSerial);
	}
	else
	{
		cout << t.convertTime(time) << "\t" << s.firstName << " " << s.lastName << "  has returned laptop " << s.lapSerial << " and went home FRUSTRATED." <<endl;
		lap.push(s.lapSerial);
	}
}