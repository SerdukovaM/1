

#include <iostream>
#include <vector>
#include "Hangar.h"
using namespace std;


int main() {
	int n;
	cout << "n=";
	cin >> n;
	Hangar** hangars;
	hangars = new Hangar* [n];
	for (int i = 0; i < n; i++) {
		double w, l;
		cout << "wedth=";
		cin >> w;
		cout << "length=";
		cin >> l;
		hangars[i] = new Hangar(w, l);
	}
	int SumS=0; //SumS-sum of area
	for (int i = 0; i < n; i++) {
		SumS += hangars[i]->S();
	}
	cout << "Sum of area=" << SumS;
	for (int i = 0; i < n; i++) {
		delete hangars[i];
	}
	delete[]hangars;
}