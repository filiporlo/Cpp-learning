/*
 * main.cpp
 *
 *  Created on: 1 lis 2017
 *      Author: filip
 */


#include <iostream>
#include <vector>


using namespace std;

int main() {
//
//	vector<int> ww { 9, 4, 7, -6, 2, 7 };
//	cout << "ww[1]= " << ww[1] << endl;
//
//	int rozmiar = ww.size();
//	cout << "Wektor ww ma " << rozmiar << endl;
//
//	for (int i { }; i < rozmiar; i++) {
//		cout << ww[i] << ", ";
//
////		if (i == (rozmiar - 1))
////			continue;
////		cout << ", ";
//
////		if (i < (rozmiar - 1))
////			cout << ", ";
//	}
//
//	cout << endl;
//
//	int b = ww[4] + 500;
//	ww[2] = ww[3] * 10;
//	cout << "b = " << b << " ww[2] = " << ww[2] << endl;
//
//
//	cout << "Obecna zawartosc wektora ww: " << endl;
//	for (unsigned int i { }; i < ww.size(); i++) {
//		cout << "ww[" << i << "] = " << ww[i];
//
//		if (ww[i] == 2)
//			cout << " DWA!";
//
//		cout << endl;
//
//
//	}

	vector<int> m;
	vector<char> symbole(10);
	vector<char> litery(12, '.');

	cout << "Tresc wektora litery: \n";
	for (unsigned int i { }; i < litery.size(); i++)
		cout << litery[i];

	cout << endl;

	litery[0] = 'F';
	litery[6] = '9';
	litery[10] = 'S';

	for (unsigned int i { }; i < litery.size(); i++)
		cout << litery[i];
	cout << endl;
	
	
	
	cin.ignore();
	getchar();
}


