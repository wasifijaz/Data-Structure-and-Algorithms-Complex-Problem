#pragma once
#include <stack>
#include <fstream>
#include "Students.h"
#include "Time.h"
using namespace std;

extern stack <int> lap;
void setLaptops(ifstream&, int);
int assignLaptop();
void returnLaptop(Student, int);
