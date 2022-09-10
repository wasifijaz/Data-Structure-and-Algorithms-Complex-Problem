#pragma once
#include <iostream>
#include <fstream>
using namespace std;

 
typedef struct DataStructuresStudent
{
    string firstName;
    string lastName;
    int enterTime;
    int numQuestions;
    int numAnswered;
    int lapSerial;
    int count;
    int number;
} Student;

const int numOfDays = 3;
extern Student s[numOfDays][300];              //Array of Students for each day not exceeding the limit 300

void setStudents(ifstream&, int, int);  //reading Students data form file
bool happyORfrustrated(int, int);