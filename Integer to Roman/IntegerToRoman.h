#pragma once
#include <iostream>
#include <string>
using namespace std;

class IntegerToRoman
{
private:
	int num_;
	static char romans[7]; 

public:
	IntegerToRoman(int);
	string ToRoman() const;
};

