#include "TAs.h"

void setTA(ifstream& inputFile, int totalTAs)
{
	//reading TAs data form file
	for (int i = 0; i < totalTAs; i++)
	{
		inputFile >> teachersArray[i].name;
		teachersArray[i].minute = 0;
		teachersArray[i].studentWithTA.firstName = "";
		for (int j = 0; j < 3; j++)
		{
			inputFile >> teachersArray[i].startTimes[j] >> teachersArray[i].endTimes[j];
		}
	}
}

void assignTA(int day, int totalTAs, int time)
{
	Time t;
	//Checking availablity of TA
	for (int i = 0; i < totalTAs; i++)
	{
		if (teachersArray[i].endTimes[day] != 0)
		{
			if (time == teachersArray[i].startTimes[day])
			{
				availableTA[i] = teachersArray[i];
				cout << t.convertTime(time) << "\t" << availableTA[i].name << " has began lab hours" << endl;
			}
		}
	}
}
