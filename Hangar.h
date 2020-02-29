#pragma once
#include <iostream>

using namespace std;

class Hangar {
	double w;
	double l; //w-width, l-length
public:
	Hangar(double w, double l);
	double S();

	void print();
};