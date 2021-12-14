#include <iostream>
#include "figure.h"

using namespace std;



int* Circle::GetRadiusAdress() {
	return &radius;
}

Circle::Circle(int _R) {
	if (_R > 0) {
		radius = _R;
	}
	else {
		cout << "Ðàäèóñ ìåíüøå 0";
		abort;
	}
}

double Circle::area() {
	return 3.14 * radius * radius;
}


void Circle::show() {
	cout << "Êðóã" << endl;
	cout << "Ðàäèóñ: "<< radius << endl;
	cout << "Ïëîùàäü: "<< Circle::area() << endl;
}


Rectangle::Rectangle(int _a, int _b) {
	a = _a;
	b = _b;
}

Rectangle::Rectangle(int _a) {
	a = _a;
}

int* Rectangle::GetAAdress() {
	return &a;
}

int* Rectangle::GetBAdress() {
	return &b;
}

double Rectangle::area() {
	if (b <= 0) {
		return (a * a);
	}
	else {
		return (a * b);
	}	
}

void Rectangle::show() {
	if (b <= 0) {
		cout << "Êâàäðàò" << endl;
		cout << "Ñòîðîíà: " << a << endl;
	}
	else {
		cout << "Ïðÿìîóãîëüíèê" << endl;
		cout << "Âûñîòà: " << a << endl;
		cout << "Øèðèíà: " << b << endl;
	}
		
	cout << "Ïëîùàäü: " << area() << endl;
}