/*
 * main.cpp
 *
 *  Created on: 1 lis 2017
 *      Author: Filip Orlovsky
 *      MinGW-w64 + ECLIPSE OXYGEN
 */


#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	double a { }, b { }, c { }, alpha { }, p { };
	cout << "Mamy trojmian kwadratowy typu:\nax^2 + bx + c = 0 dla a /= 0\n";

	cout << "Podaj wspolczynnik a = ";
	cin >> a;
	
	cout << "Podaj wspolczynnik b = ";
	cin >> b;
	cout << "Podaj wspolczynnik c = ";
	cin >> c;

	if (a) {
		//cout << "Podales a = " << a << " b = " << b << " c = " << c;

		p = (-b) / (2 * a);
		alpha = p * p - c / a;

		if (alpha < 0)
			cout << "Brak rozwiazan rzeczywistych";

		else if (!alpha)
			cout << "Tylko jedno miejsce zerowe\n" << "X to: " << p;

		else {

			alpha = sqrt(alpha);

			cout << "X_1 to: " << p + alpha << "\t";
			cout << "X_2 to: " << p - alpha;

		}
	} else
		cout << "Bledne dane!!!";
	

	
	
	

	
	cin.ignore();
	getchar();
}


