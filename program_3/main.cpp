/*
 * main.cpp
 *
 *  Created on: 1 lis 2017
 *      Author: filip
 */


#include <iostream>

using namespace std;

int k { 33 };

int main() {

//	cout << "Kapitanie, ktory podzespol sprawdzic ?\n"
//			<< "nr-10-Silnik\nnr-35-Stery \nnr-28-radar\n"
//			<< "Podaj, kapitanie numer: ";
//
//	int ktory;
//	cin >> ktory;
//	switch (ktory) {
//
//	case (10):
//		cout << "Silnik spr\n";
//		break;
//	case (28):
//		cout << "radar spr\n";
//		break;
//	case (35):
//		cout << "Stery spr\n";
//		break;
//	default:
//		cout << "Dales nr " << ktory << " nie znam takiego!!!!";
//		break;
//
//	}

	
//	int i { 3 };
//	while (1) {
//		cout << "Petla, i= " << i << "\n";
//		i--;
//		if (i < 5) {
//			cout << "Przerywamy te petle";
//			break;
//		}
//
//
//	}

	for (int k { }; k < 12; k++) {
		cout << "A";
		if (k > 1)
			continue;
		cout << "b\n";
	}

//	cout << "Jestem w main k= " << k << "\n";
//	{
//		int k { 10 };
//		cout << "po lokalnej definicji k= " << k << "\n";
//
//	}
//
//	cout << "poza blokiem k= " << k << "\n";
	
	
	cin.ignore();
	getchar();
	
}


