

#include <iostream>
using namespace std;

class hangar { 
	double w, l; //w-width, l-length
public:
	hangar(double w, double l) {
		this->w = w; this->l = l;
	}
	double S() { //S-area
		return w * l;
	}
	void print() {
		cout << "Wedth=" << w << endl << "Length=" << l << endl << "Area=" << S();
	}
};

int main() {
	int n;
	cout << "n=";
	cin >> n;
	hangar** hangars;
	hangars = new hangar * [n];
	for (int i = 0; i < n; i++) {
		double w, l;
		cout << "wedth=";
		cin >> w;
		cout << "length=";
		cin >> l;
		hangars[i] = new hangar(w, l);
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