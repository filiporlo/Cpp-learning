/*
 * main.cpp
 *
 *  Created on: 1 lis 2017
 *      Author: filip
 */


#include <iostream>
#include <string>

using namespace std;

int main() {
	
	string solar { "Panel sloneczny" };
	string antena { "Antena" };
	
	cout << "Napisz jak masz na imie: ";
	string imie;
	cin >> imie;
	cout << "Sterowanie wlasnie przejal " << imie << endl;
	if (imie == "Jurek") {
		cout << "(To jest najgorszy pilot)\n";
	}
	
	string rozkaz;
	rozkaz = "Naprawic " + solar;
	string komunikat = antena + " dziala poprawnie";

	rozkaz += " natychmiast";
	cout << rozkaz << endl;
	
	rozkaz = komunikat;
	cout << komunikat << endl;
	
	string raport = "Alfabetycznie wczesniej jest: ";
	if (solar < antena)
		raport += solar;
	else
		raport += antena;
	cout << raport << endl;
	
	
	komunikat = "Sprawdzone juz zostaly segmenty: ";
	for (int nr_seg = 39; nr_seg < 42; nr_seg++) {
		string liczba_tekstowo = to_string(nr_seg);
		string element = antena + liczba_tekstowo;

		string nazwa_pliku = element + ".txt";
		cout << "Test segmentu " << nr_seg << " zapisany w pliku C:\\"
				<< nazwa_pliku << endl;
		komunikat += (element + ", ");

	}

	cout << komunikat << endl;
	
	string info = " NIE DZIALA Antena satelitarna ";
	int szer = info.size() + 6;

	string kreska(szer, '*');
	string alarm = kreska + "\n";
	alarm += "*!*" + info + "*!*\n";
	alarm += kreska;

	cout << alarm << endl;

	cin.ignore();
	getchar();
	
}


