/*
 * main.cpp
 *
 *  Created on: 1 lis 2017
 *      Author: filip
 */


#include <iostream>

using namespace std;

int main() {

	int ile;
	cout << "Ile gwiazdek ma miec kapitan?: ";
	cin >> ile;
	cout << "No to narysujemy wszystkie " << ile << " : ";

	while (ile) {
		cout << "*";
		ile = ile - 1;

	}
	cout << "\nTeraz zmienna ile ma wartosc " << ile;
	
	cin.ignore();
	getchar();
	
}


