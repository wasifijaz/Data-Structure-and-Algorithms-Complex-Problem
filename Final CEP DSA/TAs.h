#pragma once
#include "Students.h"
#include <fstream>
#include <queue>
#include "Time.h"

typedef struct teachingAssistant
{
    string name;
    int startTimes[3];
    int endTimes[3];
    Student studentWithTA;
    int minute;
    int active;
} TA;

extern TA availableTA[2];
extern TA teachersArray[2];  //dynamic TA Array

void setTA(ifstream&, int);     //reading TAs data form file
void assignTA(int, int, int);       //Checking availablity of TA