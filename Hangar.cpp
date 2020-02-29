
#include <stdio.h>
#include <iostream>
#include "Hangar.h"
using namespace std;

Hangar::Hangar(double w, double l) {
		this->w = w; 
		this->l = l;
	}
double Hangar:: S() { //S-area
	return w * l;
	}
void Hangar::print() {
	cout << "Wedth=" << w << endl << "Length=" << l << endl << "Area=" << S();
}