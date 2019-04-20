/*
 * main.cpp
 *
 *  Created on: 1 lis 2017
 *      Author: filip
 */


#include <iostream>

using namespace std;

int main() {

	int wys, punkty_karne;

	cout << "Na jakiej wysokosci lecimy? [w metrach]: ";
	cin >> wys;
	if (wys < 500) {
		cout << wys << " metrow to za nisko!\n";
		punkty_karne = 1;
	} else {
		cout << "Na wysokosci " << wys << " metrow jestes juz bezpieczny\n";
		punkty_karne = 0;

	}

	cout << "Masz " << punkty_karne << " punktow karnych\n";
	if (punkty_karne)
		cout << "Popraw sie!";
	
	
	cin.ignore();
	getchar();
	
}


