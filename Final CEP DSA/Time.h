#pragma once
#include <iostream>
#include <string>
using namespace std;

class Time {
private:
    int hour, min, time;
public:
    Time();
    void	setTime(int);
    int     getTime();
    string  convertTime(int);
};

