#include "Time.h"

////////////////////////
//Time Class Functions//
////////////////////////

Time::Time()
{
	hour = 0;
	min = 0;
}

void Time::setTime(int t)
{
	time = t;
}

int Time::getTime()
{
	return time;
}

string Time::convertTime(int time)
{
	string standardTime, h, m;
	if (time == 0)
	{
		hour = 12;
		min = 00;
	}
	else
	{
		hour = 0;
		if (time <= 60)
		{
			hour = 12;
			min = time;
		}
		else
		{
			while (time >= 60)
			{
				time = time - 60;
				if (hour == 12)
				{
					hour = 0;
				}
				hour++;
			}
			min = time;
		}
	}
	if (hour < 10)
	{
		h = "0" + to_string(hour);
	}
	else
	{
		h = to_string(hour);
	}
	if (min < 10)
	{
		m = "0" + to_string(min);
	}
	else
	{
		m = to_string(min);
	}
	if (min == 0)
	{
		standardTime = h + ":00" + " PM:";
	}
	else
	{
		standardTime = h + ":" + m + " PM:";
	}
	return standardTime;
}
